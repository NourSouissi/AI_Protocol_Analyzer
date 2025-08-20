#include <iostream>
#include "model.h"  // Include the updated model header

int main() {
    // Create an instance of the RandomForest model
    Eloquent::ML::Port::RandomForest rf;

    // Array to hold the input feature(s)
    float x[1];  // Single feature input

    // Prompt user for input
    std::cout << "Enter a value for x (hex, e.g., 0x1A): ";
    std::string input;
    std::cin >> input;
    x[0] = static_cast<float>(std::stoul(input, nullptr, 16));

    // Get the prediction
    int prediction = rf.predict(x);

    // Map the predicted index to a command (136 commands)
    const char* commands[] = {
        "PAGE", "OPERATION", "ON_OFF_CONFIG", "CLEAR_FAULTS", "PHASE",
        "PAGE_PLUS_WRITE", "PAGE_PLUS_READ", "ZONE_ACTIVE", "ZONE_CONFIG",
        "Reserved", "Reserved", "Reserved", "Reserved", "Reserved",
        "Reserved", "Reserved", "WRITE_PROTECT", "STORE_DEFAULT_ALL",
        "RESTORE_DEFAULT_ALL", "STORE_DEFAULT_CODE", "RESTORE_DEFAULT_CODE",
        "STORE_USER_ALL", "RESTORE_USER_ALL", "STORE_USER_CODE",
        "RESTORE_USER_CODE", "CAPABILITY", "SMBALERT_MASK", "VOUT_MIN",
        "VOUT_CAL_GAIN", "VOUT_CAL_OFFSET", "VOUT_MAX", "VOUT_MARGIN_HIGH",
        "VOUT_MARGIN_LOW", "VOUT_TRANSITION_RATE", "VOUT_DROOP", "VOUT_SCALE_LOOP",
        "VOUT_SCALE_MONITOR", "VOUT_UV_FAULT_LIMIT", "VOUT_UV_FAULT_RESPONSE",
        "VOUT_OV_FAULT_LIMIT", "VOUT_OV_FAULT_RESPONSE", "VOUT_UV_WARN_LIMIT",
        "VOUT_OV_WARN_LIMIT", "IOUT_CAL_GAIN", "IOUT_CAL_OFFSET", "IOUT_OC_FAULT_LIMIT",
        "IOUT_OC_FAULT_RESPONSE", "IOUT_OC_LV_FAULT_LIMIT", "IOUT_OC_LV_FAULT_RESPONSE",
        "IOUT_OC_WARN_LIMIT", "IOUT_UC_FAULT_LIMIT", "IOUT_UC_FAULT_RESPONSE",
        "OT_FAULT_LIMIT", "OT_FAULT_RESPONSE", "OT_WARN_LIMIT", "UT_WARN_LIMIT",
        "UT_FAULT_LIMIT", "UT_FAULT_RESPONSE", "VIN_ON", "VIN_OFF", "IIN_OC_FAULT_LIMIT",
        "IIN_OC_FAULT_RESPONSE", "IIN_OC_WARN_LIMIT", "POWER_GOOD_ON", "POWER_GOOD_OFF",
        "TON_DELAY", "TON_RISE", "TON_MAX_FAULT_LIMIT", "TON_MAX_FAULT_RESPONSE",
        "TOFF_DELAY", "TOFF_FALL", "TOFF_MAX_WARN_LIMIT", "POUT_OP_FAULT_LIMIT",
        "POUT_OP_FAULT_RESPONSE", "POUT_OP_WARN_LIMIT", "PIN_OP_WARN_LIMIT", "STATUS_BYTE",
        "STATUS_WORD", "STATUS_VOUT", "STATUS_IOUT", "STATUS_INPUT",
        "STATUS_TEMPERATURE", "STATUS_CML", "STATUS_OTHER", "STATUS_MFR_SPECIFIC",
        "STATUS_FANS_1_2", "STATUS_FANS_3_4", "READ_VIN", "READ_IIN", "READ_VCAP",
        "READ_VOUT", "READ_IOUT", "READ_TEMPERATURE_1", "READ_TEMPERATURE_2",
        "READ_TEMPERATURE_3", "READ_FAN_SPEED_1", "READ_FAN_SPEED_2", "READ_FAN_SPEED_3",
        "READ_FAN_SPEED_4", "READ_POUT", "READ_PIN", "PMBUS_REVISION", "MFR_ID",
        "MFR_MODEL", "MFR_REVISION", "MFR_LOCATION", "MFR_DATE", "MFR_SERIAL",
        "MFR_VIN_MIN", "MFR_VIN_MAX", "MFR_IIN_MAX", "MFR_PIN_MAX", "MFR_VOUT_MIN",
        "MFR_VOUT_MAX", "MFR_IOUT_MAX", "MFR_POUT_MAX", "MFR_TAMBIENT_MAX",
        "MFR_TAMBIENT_MIN", "MFR_EFFICIENCY_LL", "MFR_EFFICIENCY_HL", "MFR_PIN_ACCURACY",
        "IC_DEVICE_ID", "IC_DEVICE_REV", "USER_DATA_00", "USER_DATA_01", "USER_DATA_02",
        "USER_DATA_03", "USER_DATA_04", "USER_DATA_05", "USER_DATA_06", "USER_DATA_07",
        "USER_DATA_08", "USER_DATA_09", "USER_DATA_10", "USER_DATA_11", "USER_DATA_12",
        "USER_DATA_13", "USER_DATA_14", "USER_DATA_15", "MFR_MAX_TEMP_1",
        "MFR_MAX_TEMP_2", "MFR_MAX_TEMP_3"
    };

    // Print the result to the console
    std::cout << "Prediction Index: " << prediction << std::endl;
    std::cout << "Command: " << commands[prediction] << std::endl;

    return 0;
}