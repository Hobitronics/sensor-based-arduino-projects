int xPin = A0;
int yPin = A1;

int greenLED = 4;
int redLED = 5;
int blueLED = 6;
int whiteLED = 7;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(whiteLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int xValue = analogRead(xPin);
  int yValue = analogRead(yPin);

  // Debugging
  Serial.print("X: "); Serial.print(xValue);
  Serial.print(" | Y: "); Serial.println(yValue);

  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(whiteLED, LOW);

  // Up
  if (yValue < 400) {
    digitalWrite(greenLED, HIGH);
  }
  // Down
  else if (yValue > 600) {
    digitalWrite(redLED, HIGH);
  }
  // Left
  else if (xValue < 400) {
    digitalWrite(blueLED, HIGH);
  }
  // Right
  else if (xValue > 600) {
    digitalWrite(whiteLED, HIGH);
  }

  delay(100);
}
[9:52 pm, 01/06/2025] Sameeksha: Rotary encoder:

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
