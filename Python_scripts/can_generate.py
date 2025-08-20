import pandas as pd
from sklearn.ensemble import RandomForestClassifier
from sklearn.preprocessing import LabelEncoder
import joblib
from micromlgen import port

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

# Save the trained model (optional, for reference)
joblib.dump(clf, "rf_model.joblib")

# Generate C++ code for the model
cpp_code = port(clf)
with open("rf_model.h", "w") as f:
    f.write(cpp_code)

# Generate meanings.h with the array of meanings
with open("meanings.h", "w") as f:
    f.write("const char* meanings[] = {\n")
    for meaning in le.classes_:
        f.write(f'    "{meaning}",\n')
    f.write("};\n")

print("Model converted to rf_model.h and meanings saved to meanings.h successfully.")