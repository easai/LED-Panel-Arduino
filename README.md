# LED Matrix Display

<img src="https://raw.githubusercontent.com/easai/LED-Panel-Arduino/main/led-panel.png" alt="LED Matrix Display" width="300">

This project displays the message "Error!!!" on a 4‑module MAX7219-based LED matrix display controled by an Arduino Uno using MD_Parola and MD_MAX72XX libraries.  

---

## Project Setup

### PlatformIO Environment
- Platform: atmelavr  
- Board: Arduino Uno  
- Framework: Arduino  
- Dependencies:  
  - MD_MAX72XX (v3.3.0 or later)  
  - MD_Parola (v3.4.0 or later)  

---

## Hardware Requirements

- Arduino Uno (ATmega328P)  
- MAX7219/FC16 LED matrix modules (4 chained modules)  
- Wiring connections:  
  - Chip Select (CS) → Arduino pin 3  
  - Data In (DIN) → Arduino pin 11 (MOSI)  
  - Clock (CLK) → Arduino pin 13 (SCK)  
  - VCC → 5V  
  - GND → GND  

---

## Behavior

- Initializes the LED matrix with 4 devices  
- Sets brightness to level 10 (range 0–15)  
- Clears the display before showing text  
- Displays the message "Error!!!" every 2 seconds  

---

## Getting Started

1. Clone this repository  
2. Open the project in PlatformIO (VS Code)  
3. Connect your Arduino Uno and LED matrix hardware  
4. Upload the project to your board  
5. The LED matrix will begin displaying "Error!!!"  

---

## Customization

- Change the message: Replace "Error!!!" with any text you want  
- Adjust brightness: Use values between 0 (dim) and 15 (bright)  
- Expand modules: Update the number of devices if you chain more displays  

---

## Libraries Used

- MD_MAX72XX – Low-level driver for MAX7219/MAX7221 LED matrix controllers  
- MD_Parola – High-level text animation and control library for LED matrices  

---

## License

This project is released under the MIT License.  
You are free to use, modify, and distribute with attribution.  
