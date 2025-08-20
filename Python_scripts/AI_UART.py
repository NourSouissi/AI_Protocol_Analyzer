import pandas as pd
from sklearn.ensemble import RandomForestClassifier
from sklearn.preprocessing import LabelEncoder
from micromlgen import port

# Load data from CSV
data = pd.read_csv("modbus_database.csv")

# Convert hexadecimal function codes to integers
data['Function_Code_int'] = data['Function Code'].apply(lambda x: int(x, 16))

# Encode the meanings into numerical labels
le = LabelEncoder()
data['Meaning_encoded'] = le.fit_transform(data['Meaning'])

# Prepare features (function code integers) and labels (encoded meanings)
X = data['Function_Code_int'].values.reshape(-1, 1)
y = data['Meaning_encoded'].values

# Initialize and train the RandomForestClassifier
clf = RandomForestClassifier(n_estimators=100, random_state=42)
clf.fit(X, y)

# Generate C++ code for the model
cpp_code = port(clf)
with open("rf_function_model.h", "w") as f:
    f.write(cpp_code)

# Generate meanings_function.h with the array of meanings
with open("meanings_function.h", "w") as f:
    f.write("const char* meanings_function[] = {\n")
    for meaning in le.classes_:
        f.write(f'    "{meaning}",\n')
    f.write("};\n")

print("Model converted to rf_function_model.h and meanings saved to meanings_function.h successfully.")