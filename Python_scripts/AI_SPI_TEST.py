import pandas as pd
import numpy as np
from sklearn.ensemble import RandomForestClassifier
from sklearn.preprocessing import LabelEncoder
from sklearn.metrics import accuracy_score

# Load data
data = pd.read_csv("Database_SPI.csv")  # Replace with your actual CSV file path
data['Category_encoded'] = LabelEncoder().fit_transform(data['Category'])
data['Command_Hex_int'] = data['Command Hex'].apply(lambda x: int(x.split()[0], 16))
data['Device_encoded'] = LabelEncoder().fit_transform(data['Device'])
data['Meaning_encoded'] = LabelEncoder().fit_transform(data['Meaning'])

# Prepare training data
X_train = data[['Category_encoded', 'Command_Hex_int']].values
y_train = data[['Device_encoded', 'Meaning_encoded']].values

# Train the RandomForestClassifier
clf = RandomForestClassifier(n_estimators=100, random_state=42)
clf.fit(X_train, y_train)

# Generate test data (all combinations of categories and command values 0-255)
categories = np.unique(data['Category_encoded'])
test_X = []
for cat in categories:
    for cmd in range(256):
        test_X.append([cat, cmd])
test_X = np.array(test_X)

# Predict
y_pred = clf.predict(test_X)

# Calculate accuracy (approximate by nearest neighbor in training data)
y_test_device = []
y_test_meaning = []
for test_row in test_X:
    distances = np.sum((X_train - test_row) ** 2, axis=1)
    nearest_idx = np.argmin(distances)
    y_test_device.append(y_train[nearest_idx][0])
    y_test_meaning.append(y_train[nearest_idx][1])

y_test_device = np.array(y_test_device)
y_test_meaning = np.array(y_test_meaning)

device_accuracy = accuracy_score(y_test_device, y_pred[:, 0])
meaning_accuracy = accuracy_score(y_test_meaning, y_pred[:, 1])

print(f"Device Accuracy: {device_accuracy * 100:.2f}%")
print(f"Meaning Accuracy: {meaning_accuracy * 100:.2f}%")