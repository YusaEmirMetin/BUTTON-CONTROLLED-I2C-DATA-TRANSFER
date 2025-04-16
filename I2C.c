#include <Wire.h>
#include <rgb_lcd.h>

rgb_lcd lcd;
const int buttonPin = A3; 

bool lastButtonState = LOW;

void setup() {
  
  pinMode(buttonPin, INPUT);

  // Initialize the LCD
  lcd.begin(16, 2);

  
  lcd.setRGB(255, 0, 0);
  lcd.print("CMPE453-2024F");
  delay(3000);
  lcd.clear();
}

void loop() {
  
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH && lastButtonState == LOW) {
    
    lcd.clear();
    lcd.print("Welcome to Class");
    lcd.setCursor(0, 1);
    lcd.print("Button is ON");
  } else if (buttonState == LOW && lastButtonState == HIGH) {
    // Button is released
    lcd.clear();
    lcd.print("GoodBye to Class");
    lcd.setCursor(0, 1);
    lcd.print("Button is OFF");
  }

  
  lastButtonState = buttonState;

  delay(100); 
}
