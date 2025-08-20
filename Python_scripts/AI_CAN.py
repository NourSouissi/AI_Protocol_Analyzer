import pandas as pd
from sklearn.ensemble import RandomForestClassifier
from sklearn.preprocessing import LabelEncoder
import joblib

# Load data from CSV
data = pd.read_csv("Database_SAE_J1939(2).csv")
data['PGN_int'] = data['PGN'].apply(lambda x: int(x, 16))

# Encode the meanings into numerical labels
le = LabelEncoder()
data['Meaning_encoded'] = le.fit_transform(data['Meaning'])

# Prepare features (PGN integers) and labels (encoded meanings)
X = data['PGN_int'].values.reshape(-1, 1)
y = data['Meaning_encoded'].values

# Initialize and train the RandomForestClassifier
clf = RandomForestClassifier(n_estimators=100, random_state=42)
clf.fit(X, y)

# Save the trained model and label encoder
joblib.dump(clf, "rf_model.joblib")
joblib.dump(le, "label_encoder.joblib")
print("Model and label encoder saved successfully.")