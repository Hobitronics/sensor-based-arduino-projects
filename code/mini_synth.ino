#define buzzerPin 9

void setup() {
  for (int i = 2; i <= 5; i++) {
    pinMode(i, INPUT_PULLUP); // Use internal pull-ups
  }
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  if (digitalRead(2) == LOW) tone(buzzerPin, 262); // C
  else if (digitalRead(3) == LOW) tone(buzzerPin, 294); // D
  else if (digitalRead(4) == LOW) tone(buzzerPin, 330); // E
  else if (digitalRead(5) == LOW) tone(buzzerPin, 392); // G
  else noTone(buzzerPin);
}
