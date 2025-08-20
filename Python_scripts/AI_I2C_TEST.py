import pandas as pd
import numpy as np
import joblib
from sklearn.metrics import accuracy_score

# Load the trained model and label encoder
clf = joblib.load("rf_command_model.joblib")
le = joblib.load("label_encoder_command.joblib")

# Load training data to access original command codes
data = pd.read_csv("Database_PMBus.csv")
training_codes = data['Command Code'].apply(lambda x: int(x, 16)).values

# Generate test command codes (all possible 8-bit values: 0 to 255)
test_codes = np.arange(0, 256).reshape(-1, 1)

# Determine expected labels based on the nearest training command code
expected_labels = []
for test_code in test_codes:
    idx = np.argmin(np.abs(training_codes - test_code[0]))
    expected_labels.append(le.transform([data['Meaning'].iloc[idx]])[0])
expected_labels = np.array(expected_labels)

# Predict meanings for test command codes
predicted_labels = clf.predict(test_codes)

# Calculate and display accuracy
accuracy = accuracy_score(expected_labels, predicted_labels)
print(f"Accuracy: {accuracy * 100:.2f}%")

# Example: Predict meaning for a specific command code (e.g., 0x01)
test_code = 0x01
test_code_int = np.array([[test_code]])
predicted_label = clf.predict(test_code_int)[0]
predicted_meaning = le.inverse_transform([predicted_label])[0]
print(f"For Command Code 0x{test_code:02X}, predicted meaning: {predicted_meaning}")