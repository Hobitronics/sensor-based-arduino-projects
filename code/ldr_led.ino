const int ldrPin = 2;   // DO pin of LDR module
const int ledPin = 13;  // Built-in LED (or use any digital pin)

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int ldrState = digitalRead(ldrPin);

  if (ldrState == LOW) {
    // Light detected → LED ON
    digitalWrite(ledPin, HIGH);
  } else {
    // No light → LED OFF
    digitalWrite(ledPin, LOW);
  }
}
