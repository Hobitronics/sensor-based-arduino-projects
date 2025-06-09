#include <LiquidCrystal.h>

// Initialize LCD pins: RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

int counter = 0;
int lastCLK = HIGH;

void setup() {
  pinMode(8, INPUT); // CLK
  pinMode(9, INPUT); // DT
  pinMode(10, INPUT_PULLUP); // SW button (optional)

  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Speed Counter:");
  lcd.setCursor(0, 1);
  lcd.print("Count: ");
  lcd.print(counter);
}

void loop() {
  int currentCLK = digitalRead(8);
  if (currentCLK != lastCLK && currentCLK == LOW) {
    if (digitalRead(9) != currentCLK) {
      counter++;
    } else {
      counter--;
    }

    lcd.setCursor(0, 1);
    lcd.print("Count:       ");  // Clear line
    lcd.setCursor(7, 1);
    lcd.print(counter);
  }
  lastCLK = currentCLK;

  if (digitalRead(10) == LOW) {
    counter = 0;
    lcd.setCursor(0, 1);
    lcd.print("Count:       ");
    lcd.setCursor(7, 1);
    lcd.print(counter);
    delay(300); // debounce
  }
}
