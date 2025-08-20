#include <iostream>
#include <string>
#include "rf_model_SPI.h"
#include "category_mapping.h"
#include "device_mapping.h"
#include "meaning_mapping.h"

int main() {
    Eloquent::ML::Port::RandomForest model;
    std::string input_line;
    std::cout << "Enter Category and Command Hex (e.g., 'Memory 0x03'), separated by space. Enter 'exit' to quit.\n";
    while (true) {
        std::cout << "Input: ";
        std::getline(std::cin, input_line);
        if (input_line == "exit") {
            break;
        }
        try {
            size_t space_pos = input_line.find(' ');
            if (space_pos == std::string::npos) {
                std::cout << "Invalid input format. Use 'Category CommandHex'.\n";
                continue;
            }
            std::string category = input_line.substr(0, space_pos);
            std::string command_hex = input_line.substr(space_pos + 1);

            // Find category index
            int category_idx = -1;
            for (int i = 0; i < sizeof(categories)/sizeof(categories[0]); ++i) {
                if (category == categories[i]) {
                    category_idx = i;
                    break;
                }
            }
            if (category_idx == -1) {
                std::cout << "Invalid category.\n";
                continue;
            }

            // Convert command hex
            unsigned int command_value = std::stoi(command_hex, nullptr, 16);
            float features[2] = {static_cast<float>(category_idx), static_cast<float>(command_value)};
            int labels[2];
            model.predict(features, labels);  // Multi-output predict

            if (labels[0] >= 0 && labels[0] < sizeof(devices)/sizeof(devices[0]) &&
                labels[1] >= 0 && labels[1] < sizeof(meanings)/sizeof(meanings[0])) {
                std::cout << "Predicted Device: " << devices[labels[0]] << std::endl;
                std::cout << "Predicted Meaning: " << meanings[labels[1]] << std::endl;
            } else {
                std::cout << "Invalid prediction.\n";
            }
        } catch (const std::exception& e) {
            std::cout << "Error: " << e.what() << std::endl;
        }
    }
    std::cout << "Exiting program.\n";
    return 0;
}