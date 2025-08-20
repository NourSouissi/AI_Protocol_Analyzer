#include <iostream>
#include <string>
#include "rf_model_can.h"  // Contains the class definition
#include "meanings.h"  // Assuming this defines the meanings array

int main() {
    Eloquent::ML::Port::RandomForest model;  // Instantiate the class (replace 'RandomForest' with the actual class name)
    std::string line;
    std::cout << "Enter hexadecimal PGN values (e.g., 0x00FF), one per line. Enter an empty line to exit.\n";
    while (std::getline(std::cin, line)) {
        if (line.empty()) {
            break;
        }
        try {
            unsigned int pgn_value = std::stoi(line, nullptr, 16);
            float feature = static_cast<float>(pgn_value);
            int label = model.predict(&feature);  // Call predict on the object
            if (label >= 0 && label < 250) {
                std::cout << "For PGN 0x" << std::hex << std::uppercase << pgn_value 
                          << ", predicted meaning: " << meanings[label] << std::endl;
            } else {
                std::cout << "Invalid label predicted for PGN 0x" << std::hex << std::uppercase 
                          << pgn_value << std::endl;
            }
        } catch (const std::invalid_argument& e) {
            std::cout << "Invalid hex input: " << line << std::endl;
        } catch (const std::out_of_range& e) {
            std::cout << "Hex input out of range: " << line << std::endl;
        }
    }
    std::cout << "Exiting program.\n";
    return 0;
}