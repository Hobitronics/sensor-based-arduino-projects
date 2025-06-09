#include <LiquidCrystal.h>

const int flowSensorPin = 2;
const int buzzerPin = 9;

// LCD pins: RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(7, 6, 5, 4, 3, 8);

volatile int pulseCount;
unsigned long lastTime;
float flowRate;
float totalLitres;

void pulseCounter() {
  pulseCount++;
}

void setup() {
  pinMode(flowSensorPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(flowSensorPin), pulseCounter, RISING);

  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);

  lcd.begin(16, 2);
  lcd.print("Flow Monitor");

  pulseCount = 0;
  flowRate = 0.0;
  totalLitres = 0.0;
  lastTime = millis();
}

void loop() {
  unsigned long currentTime = millis();
  unsigned long elapsed = currentTime - lastTime;

  if (elapsed >= 1000) {  // Update every 1 second
    detachInterrupt(digitalPinToInterrupt(flowSensorPin));

    // Calculate flow rate in L/min (YF-S201: 7.5 pulses per liter per minute)
    flowRate = ((1000.0 / elapsed) * pulseCount) / 7.5;
    float litres = (flowRate / 60.0); // Litres per second
    totalLitres += litres;

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Rate: ");
    lcd.print(flowRate, 2);
    lcd.print(" L/min");

    lcd.setCursor(0, 1);
    lcd.print("Used: ");
    lcd.print(totalLitres, 2);
    lcd.print(" L");

    if (flowRate > 10.0) {  // Threshold for buzzer
      digitalWrite(buzzerPin, HIGH);
    } else {
      digitalWrite(buzzerPin, LOW);
    }

    pulseCount = 0;
    lastTime = currentTime;
    attachInterrupt(digitalPinToInterrupt(flowSensorPin), pulseCounter, RISING);
  }
}
