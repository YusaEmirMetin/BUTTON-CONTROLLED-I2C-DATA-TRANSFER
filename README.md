# Button-Controlled I2C Data Transfer with Grove LCD

This project demonstrates how to control a Grove LCD screen using a button connected to an Arduino Uno via I2C communication. It displays different messages based on button press and release events.

## 🛠️ Contributors
- CMPE 453 - Section 4  
- Lab 4 - Fall 2024

## 🎯 Project Objective

Use a Grove Button to control an I2C-connected Grove LCD RGB Backlight display. Depending on whether the button is pressed or released, different messages are shown on the LCD with a corresponding backlight color.

## 🧰 Components Required

- Arduino Uno  
- Arduino Base Shield  
- Grove Button (Digital Port)  
- Grove LCD RGB Backlight (I2C Port)  
- Grove Cables  
- Arduino IDE

## 🖥️ System Behavior

| State | LCD Display | Backlight Color |
|-------|-------------|-----------------|
| Start | Line 1: `CMPE453-2024F` | Red |
|       | (Displays for 3 seconds) | |
| Button Pressed | Line 1: `Welcome to Class` | Default |
|                | Line 2: `Button is ON` | |
| Button Released | Line 1: `GoodBye to Class` | Default |
|                 | Line 2: `Button is OFF` | |

## ⚙️ How It Works

1. **Startup**: On power-up, the LCD shows `CMPE453-2024F` with a red background for 3 seconds.
2. **Button Pressed**: The LCD updates to display:
   - `Welcome to Class` (line 1)
   - `Button is ON` (line 2)
3. **Button Released**: The LCD changes to:
   - `GoodBye to Class` (line 1)
   - `Button is OFF` (line 2)

The messages are updated once per state change and remain stable regardless of how long the button is pressed or released.

## 📂 Useful Resources

- [Grove LCD RGB Backlight Wiki](https://wiki.seeedstudio.com/Grove-LCD_RGB_Backlight/)
- [Grove Button Wiki](https://wiki.seeedstudio.com/Grove-Button/)

## 💡 Notes

- Ensure the Grove Button is connected to a **digital port** on the base shield.
- The Grove LCD must be connected via the **I2C port**.
- You may need to install the necessary libraries via the Arduino Library Manager (e.g., `rgb_lcd.h`).

## 👨‍💻 Programming Language

- C (Arduino-compatible code via Arduino IDE)

## 🚀 Getting Started

1. Connect components as described.
2. Open Arduino IDE and load the code.
3. Upload to Arduino Uno.
4. Open Serial Monitor (optional) to debug if necessary.
5. Interact with the button and observe the LCD screen.

