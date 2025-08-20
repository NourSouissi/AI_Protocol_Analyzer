#include <iostream>
#include <string>
#include "rf_model_i2c.h"
#include "meanings_command.h"

int main() {
    Eloquent::ML::Port::RandomForest model;
    std::string line;
    std::cout << "Enter hexadecimal Command Code values (e.g., 0x00), one per line. Enter an empty line to exit.\n";
    while (std::getline(std::cin, line)) {
        if (line.empty()) {
            break;
        }
        try {
            unsigned int command_code = std::stoi(line, nullptr, 16);
            float feature = static_cast<float>(command_code);
            int label = model.predict(&feature);
            if (label >= 0 && label < 143) {
                std::cout << "For Command Code 0x" << std::hex << std::uppercase << command_code 
                          << ", predicted meaning: " << meanings_command[label] << std::endl;
            } else {
                std::cout << "Invalid label predicted for Command Code 0x" << std::hex << std::uppercase 
                          << command_code << std::endl;
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