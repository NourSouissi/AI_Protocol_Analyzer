import pandas as pd
from sklearn.ensemble import RandomForestClassifier
from sklearn.preprocessing import LabelEncoder
from micromlgen import port

# Create DataFrame from the provided database
data = pd.DataFrame({
    'Category': ['Memory']*25 + ['Camera']*12 + ['PLC']*23 + ['Imaging']*18,
    'Device': ['SPI Flash']*25 + ['Arducam Mini']*12 + ['MCP23S17']*23 + ['FLIR Lepton']*18,
    'Command Hex': [
        '0x03', '0x0B', '0x3B', '0x6B', '0xEB', '0x02', '0x32', '0x20', '0x52', '0xD8', '0xC7',
        '0x05', '0x35', '0x15', '0x01', '0x31', '0x11', '0x06', '0x04', '0x9F', '0x90', '0xAB', '0xB9',
        '0xB7', '0xE9', '0x40', '0x41', '0x42', '0x04', '0x20 0x00', '0x20 0x01', '0x20 0x02',
        '0x21 0x00', '0x21 0x01', '0x21 0x02', '0x80 0xFF', '0x00 0xFF 0x01', '0x40 0x00', '0x40 0x01',
        '0x40 0x02', '0x40 0x03', '0x40 0x04', '0x40 0x05', '0x40 0x06', '0x40 0x07', '0x40 0x08',
        '0x40 0x09', '0x40 0x0A', '0x40 0x0B', '0x40 0x0C', '0x40 0x0D', '0x40 0x0E', '0x40 0x0F',
        '0x40 0x10', '0x40 0x12', '0x40 0x13', '0x41 0x00 0xFF', '0x41 0x01 0x00', '0x41 0x12 0xAA',
        '0x41 0x13 0x55', '0x02 0x00', '0x02 0x02', '0x02 0x04', '0x02 0x06', '0x02 0x08', '0x02 0x0A',
        '0x02 0x0C', '0x02 0x0E', '0x02 0x10', '0x02 0x12', '0x02 0x14', '0x02 0x16', '0x02 0x18',
        '0x02 0x1A', '0x02 0x1C', '0x02 0x1E', '0x02 0x20', '0x02 0x22'
    ],
    'Meaning': [
        'Read Data', 'Fast Read', 'Dual Output Fast Read', 'Quad Output Fast Read', 'Quad I/O Fast Read',
        'Page Program', 'Quad Page Program', 'Sector Erase (4KB)', 'Block Erase (32KB)', 'Block Erase (64KB)',
        'Chip Erase', 'Read Status Register-1', 'Read Status Register-2', 'Read Status Register-3',
        'Write Status Register-1', 'Write Status Register-2', 'Write Status Register-3', 'Write Enable',
        'Write Disable', 'Read JEDEC ID', 'Read Manufacturer/Device ID', 'Release Power-down / ID',
        'Power-down', 'Enter 4-Byte Address Mode', 'Exit 4-Byte Address Mode', 'Start image capture',
        'Get FIFO length', 'Read FIFO', 'Flush FIFO', 'Set resolution to QQVGA', 'Set resolution to QVGA',
        'Set resolution to VGA', 'Set format to JPEG', 'Set format to RGB565', 'Set format to YUV422',
        'Read register 0xFF', 'Write 0x01 to register 0xFF', 'Read IODIRA (Direction Register A)',
        'Read IODIRB (Direction Register B)', 'Read IPOLA (Input Polarity A)', 'Read IPOLB (Input Polarity B)',
        'Read GPINTENA (Interrupt Enable A)', 'Read GPINTENB (Interrupt Enable B)', 'Read DEFVALA (Default Value A)',
        'Read DEFVALB (Default Value B)', 'Read INTCONA (Interrupt Control A)', 'Read INTCONB (Interrupt Control B)',
        'Read IOCON (Configuration Register)', 'Read GPPUA (Pull-up Resistor A)', 'Read GPPUB (Pull-up Resistor B)',
        'Read INTFA (Interrupt Flag A)', 'Read INTFB (Interrupt Flag B)', 'Read INTCAPA (Captured Value A)',
        'Read INTCAPB (Captured Value B)', 'Read GPIOA (Port A Value)', 'Read GPIOB (Port B Value)',
        'Set IODIRA to 0xFF (all inputs)', 'Set IODIRB to 0x00 (all outputs)', 'Set GPIOA to 0xAA',
        'Set GPIOB to 0x55', 'Get Sys Ping', 'Get Camera Status', 'Run FFC (Flat Field Correction)',
        'Get FFC Status', 'Set Operation Mode', 'Get Operation Mode', 'Set GPIO Mode', 'Get GPIO Mode',
        'Set AGC Enable State', 'Get AGC Enable State', 'Set AGC Policy', 'Get AGC Policy', 'Set AGC ROI',
        'Get AGC ROI', 'Set AGC Histogram Statistics', 'Get AGC Histogram Statistics', 'Set AGC Damping Factor',
        'Get AGC Damping Factor'
    ]
})

# Encode categorical inputs and outputs
le_category = LabelEncoder()
data['Category_encoded'] = le_category.fit_transform(data['Category'])

# Convert Command Hex to integer (taking only the first hex value for simplicity)
data['Command_Hex_int'] = data['Command Hex'].apply(lambda x: int(x.split()[0], 16))

le_device = LabelEncoder()
data['Device_encoded'] = le_device.fit_transform(data['Device'])

le_meaning = LabelEncoder()
data['Meaning_encoded'] = le_meaning.fit_transform(data['Meaning'])

# Prepare features and targets
X = data[['Category_encoded', 'Command_Hex_int']].values
y = data[['Device_encoded', 'Meaning_encoded']].values

# Train the RandomForestClassifier with multi-output support
clf = RandomForestClassifier(n_estimators=100, random_state=42)
clf.fit(X, y)

# Generate C++ code for the multi-output model
cpp_code = port(clf)
with open("rf_multi_model.h", "w") as f:
    f.write(cpp_code)

# Generate headers for mappings
with open("category_mapping.h", "w") as f:
    f.write("const char* categories[] = {\n")
    for category in le_category.classes_:
        f.write(f'    "{category}",\n')
    f.write("};\n")

with open("device_mapping.h", "w") as f:
    f.write("const char* devices[] = {\n")
    for device in le_device.classes_:
        f.write(f'    "{device}",\n')
    f.write("};\n")

with open("meaning_mapping.h", "w") as f:
    f.write("const char* meanings[] = {\n")
    for meaning in le_meaning.classes_:
        f.write(f'    "{meaning}",\n')
    f.write("};\n")

print("Multi-output model and mappings generated successfully.")