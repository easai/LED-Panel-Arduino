#include <Arduino.h>
#include <unity.h>
#include <MD_MAX72xx.h>

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4
#define CS_PIN 3

MD_MAX72XX ledMatrix(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void test_initialization() {
    TEST_ASSERT_TRUE(ledMatrix.begin());  // begin() returns void in some versions, but Unity accepts TRUE as pass
}

void test_set_column() {
    ledMatrix.clear();

    // Set column 0 to all ON
    ledMatrix.setColumn(0, 0xFF);

    // Read back the column
    uint8_t colData = ledMatrix.getColumn(0);

    TEST_ASSERT_EQUAL_UINT8(0xFF, colData);
}

void test_all_pixels_on() { 
    ledMatrix.clear(); 
    
    // Turn on every pixel: write 0xFF to every column 
    for (uint8_t col = 0; col < MAX_DEVICES * 8; col++) { 
        ledMatrix.setColumn(col, 0xFF); 
    } 
    
    // Verify every column is 0xFF 
    for (uint8_t col = 0; col < MAX_DEVICES * 8; col++) { 
        uint8_t colData = ledMatrix.getColumn(col); 
        TEST_ASSERT_EQUAL_UINT8(0xFF, colData); 
    } 
}

void setup() {
    delay(2000); // Let serial settle
    UNITY_BEGIN();

    RUN_TEST(test_initialization);
    RUN_TEST(test_set_column);
    RUN_TEST(test_all_pixels_on);

    UNITY_END();
}

void loop() {
    // Not used in test mode
}
