const int ledPins[] = {6, 7, 8, 9};
const int buttonPins[] = {2, 3, 4, 5};
const int buzzerPin = 10;

int sequence[100];
int level = 1;
bool gameOver = false;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
  generateSequence();
}

void loop() {
  if (!gameOver) {
    showSequence();
    if (!getPlayerInput()) {
      failTone();
      gameOver = true;
    } else {
      level++;
      delay(1000);
    }
  } else {
    blinkAll();
    delay(2000);
    level = 1;
    gameOver = false;
    generateSequence();
  }
}

void generateSequence() {
  for (int i = 0; i < 100; i++) {
    sequence[i] = random(0, 4); // values: 0 to 3
  }
}

void showSequence() {
  for (int i = 0; i < level; i++) {
    int led = sequence[i];
    digitalWrite(ledPins[led], HIGH);
    tone(buzzerPin, 200 + led * 100, 200);
    delay(400);
    digitalWrite(ledPins[led], LOW);
    delay(250);
  }
}

bool getPlayerInput() {
  for (int i = 0; i < level; i++) {
    bool inputReceived = false;
    while (!inputReceived) {
      for (int j = 0; j < 4; j++) {
        if (digitalRead(buttonPins[j]) == LOW) {
          tone(buzzerPin, 200 + j * 100, 100);
          digitalWrite(ledPins[j], HIGH);
          delay(150);
          digitalWrite(ledPins[j], LOW);
          while (digitalRead(buttonPins[j]) == LOW); // wait until button is released
          delay(50); // debounce
          
          if (j != sequence[i]) {
            return false;
          }
          inputReceived = true;
        }
      }
    }
  }
  return true;
}

void failTone() {
  for (int i = 0; i < 3; i++) {
    tone(buzzerPin, 100, 200);
    delay(300);
  }
  noTone(buzzerPin);
}

void blinkAll() {
  for (int i = 0; i < 4; i++) digitalWrite(ledPins[i], HIGH);
  delay(500);
  for (int i = 0; i < 4; i++) digitalWrite(ledPins[i], LOW);
}
