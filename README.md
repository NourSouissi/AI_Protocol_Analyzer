# AI_Protocol_Analyzer

## Overview
AI-driven protocol analyzer for CAN, I2C, SPI, and UART.  
This project includes Python scripts, predictive AI models, generated databases, and STM32CubeIDE FreeRTOS firmware for testing and analysis.

## Folder Structure
/C++_Scripts/ - C++ source code
/C++_Scripts/Executables/ - Precompiled executables (ignored in Git)
/C_Scripts/ - C source code
/C_Scripts/FreeRTOS_Based_Firmware/ - STM32 FreeRTOS firmware
/Python_scripts/ - Python scripts for AI models
/Python_scripts/Databases/ - Generated databases (ignored in Git)
/README.md
/.gitignore

## Getting Started
1. **Python Environment**  
   Install required packages: `numpy`, `pandas`, `scikit-learn`, `joblib`.  

2. **C/C++ Source**  
   Compile C++ scripts using your preferred compiler. Executables are ignored to avoid large files.  

3. **STM32 Firmware**  
   Open `FreeRTOS_Based_Firmware/Firmware.c` in STM32CubeIDE, build and flash to your device.
## Utilities & Technologies
- **Python**: Scripts for AI model training, prediction, and database handling  
- **Scikit-learn / Joblib**: Machine learning and model serialization  
- **STM32CubeIDE**: FreeRTOS firmware development for STM32 microcontrollers  
- **C / C++**: Protocol analysis scripts and predictor implementations  
- **CAN, I2C, SPI, UART**: Communication protocols analyzed  
- **Databases**: CSV-based datasets for protocol testing and model training  
- **Executables**: Compiled predictors for quick testing (ignored in Git)  
I used custom Databases for the applicative layer of these communication protocols, ModBus for UART, PMBus for I2C and SAE j1939 for CAN which you can find freely on the internet, SAE j1939's full commands however are available for purchase, you can use the free ones you can acquire on the internet for testing purposes.

## Notes
- Large AI model files, executables, and generated databases are **not included** in this repository due to GitHub size limits.  
- You can regenerate models and databases using the Python scripts in `/Python_scripts/`.  

## License
MIT License (or your preferred license)
