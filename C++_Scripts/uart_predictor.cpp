#include <iostream>
#include <string>
#include "rf_model_uart.h"
#include "meanings_function.h"

int main() {
    Eloquent::ML::Port::RandomForest model;
    std::string line;
    std::cout << "Enter hexadecimal Function Code values (e.g., 0x01), one per line. Enter an empty line to exit.\n";
    while (std::getline(std::cin, line)) {
        if (line.empty()) {
            break;
        }
        try {
            unsigned int function_code = std::stoi(line, nullptr, 16);
            float feature = static_cast<float>(function_code);
            int label = model.predict(&feature);
            if (label >= 0 && label < 19) {  // 19 unique meanings in the database
                std::cout << "For Function Code 0x" << std::hex << std::uppercase << function_code 
                          << ", predicted meaning: " << meanings_function[label] << std::endl;
            } else {
                std::cout << "Invalid label predicted for Function Code 0x" << std::hex << std::uppercase 
                          << function_code << std::endl;
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