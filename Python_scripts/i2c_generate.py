import pandas as pd
from sklearn.ensemble import RandomForestClassifier
from sklearn.preprocessing import LabelEncoder
import joblib
from micromlgen import port

# Load data from CSV
data = pd.read_csv("Database_PMBus.csv")

# Convert hexadecimal command codes to integers
data['Command_Code_int'] = data['Command Code'].apply(lambda x: int(x, 16))

# Encode the meanings into numerical labels
le = LabelEncoder()
data['Meaning_encoded'] = le.fit_transform(data['Meaning'])

# Prepare features (command code integers) and labels (encoded meanings)
X = data['Command_Code_int'].values.reshape(-1, 1)
y = data['Meaning_encoded'].values

# Initialize and train the RandomForestClassifier
clf = RandomForestClassifier(n_estimators=100, random_state=42)
clf.fit(X, y)

# Save the trained model (optional)
joblib.dump(clf, "rf_command_model.joblib")

# Generate C++ code for the model
cpp_code = port(clf)
with open("rf_command_model.h", "w") as f:
    f.write(cpp_code)

# Generate meanings_command.h with the array of meanings
with open("meanings_command.h", "w") as f:
    f.write("const char* meanings_command[] = {\n")
    for meaning in le.classes_:
        f.write(f'    "{meaning}",\n')
    f.write("};\n")

print("Model converted to rf_command_model.h and meanings saved to meanings_command.h successfully.")