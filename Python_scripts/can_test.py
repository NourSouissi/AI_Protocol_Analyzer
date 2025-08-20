import numpy as np
import pandas as pd
import joblib
from sklearn.metrics import accuracy_score

# Load the trained model and label encoder
clf = joblib.load("rf_model.joblib")
le = joblib.load("label_encoder.joblib")

# Load training data to access original PGNs
data = pd.read_csv("Database_SAE_J1939(2).csv")
training_pgns = data['PGN'].apply(lambda x: int(x, 16)).values

# Generate test PGNs (every 100 from 0 to 65535)
test_pgns = np.arange(0, 0x10000, 100).reshape(-1, 1)

# Determine expected labels based on the nearest training PGN
expected_labels = []
for test_pgn in test_pgns:
    idx = np.argmin(np.abs(training_pgns - test_pgn[0]))
    expected_labels.append(le.transform([data['Meaning'].iloc[idx]])[0])
expected_labels = np.array(expected_labels)

# Predict meanings for test PGNs
predicted_labels = clf.predict(test_pgns)

# Calculate and display accuracy
accuracy = accuracy_score(expected_labels, predicted_labels)
print(f"Accuracy: {accuracy * 100:.2f}%")

# Example: Predict meaning for a specific PGN (e.g., 0x0001)
test_pgn = 0xFED5
test_pgn_int = np.array([[test_pgn]])
predicted_label = clf.predict(test_pgn_int)[0]
predicted_meaning = le.inverse_transform([predicted_label])[0]
print(f"For PGN 0x{test_pgn:04X}, predicted meaning: {predicted_meaning}")