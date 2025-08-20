import joblib

# Load the saved model and encoder
model = joblib.load("modbus_model.joblib")
le_function = joblib.load("le_function.joblib")

# Function to predict meaning and confidence
def predict_meaning(function_code):
    """
    Predict the meaning of a Modbus function code.
    Args:
        function_code (str): Hex code like '0x01'.
    Returns:
        tuple: (predicted_meaning, confidence)
    """
    # Encode the input
    try:
        code_encoded = le_function.transform([function_code])[0]
    except ValueError:
        return "Unknown code", 0.0  # If code isn't in database
    
    # Predict probability
    probs = model.predict_proba([[code_encoded]])[0]
    predicted_index = probs.argmax()
    confidence = probs[predicted_index]
    predicted_meaning = model.classes_[predicted_index]
    
    return predicted_meaning, confidence

# Test the model with user input
while True:
    user_input = input("Enter a Modbus function code (e.g., 0x01) or 'quit' to exit: ")
    
    if user_input.lower() == 'quit':
        print("Exiting...")
        break
    
    meaning, confidence = predict_meaning(user_input)
    print(f"Input: {user_input}, Predicted Meaning: {meaning}, Confidence: {confidence:.4f}")