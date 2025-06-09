#include <LiquidCrystal.h>

const int soilPin = A0;

// LCD pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Soil Moisture:");
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(soilPin);
  int percent = map(value, 1023, 0, 0, 100);  // Dry = 1023, Wet = 0

  lcd.setCursor(0, 1);
  lcd.print(percent);
  lcd.print("% moisture   ");  // Extra spaces to clear old data

  Serial.println(percent);
  delay(1000);
}
