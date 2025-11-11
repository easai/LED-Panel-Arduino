#include <MD_Parola.h>
#include <MD_MAX72xx.h>

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4
#define CS_PIN 3  // Chip Select

MD_Parola ledMatrix = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setup() {
  ledMatrix.begin();
  ledMatrix.setIntensity(10);  // Brightness: 0–15
  ledMatrix.displayClear();
}

void loop() {
  ledMatrix.print("Error!!!");
  delay(2000);
}
