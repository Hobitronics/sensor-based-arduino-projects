int touchPin = 2;
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

int count = 0;
bool lastState = LOW;

void setup() {
  pinMode(touchPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  bool currentState = digitalRead(touchPin);

  if (currentState == HIGH && lastState == LOW) {
    count++;

    if (count >= 9) count = 1;

    showColor(count);
    delay(300); // debounce
  }

  lastState = currentState;
}

void showColor(int n) {
  switch(n) {
    case 1: setColor(255, 0, 0); Serial.println("Red"); break;
    case 2: setColor(0, 255, 0); Serial.println("Green"); break;
    case 3: setColor(0, 0, 255); Serial.println("Blue"); break;
    case 4: setColor(255, 255, 0); Serial.println("Yellow"); break;
    case 5: setColor(0, 255, 255); Serial.println("Cyan"); break;
    case 6: setColor(255, 0, 255); Serial.println("Magenta"); break;
    case 7: setColor(255, 255, 255); Serial.println("White"); break;
    case 8: setColor(0, 0, 0); Serial.println("OFF"); break;
  }
}

void setColor(int r, int g, int b) {
  analogWrite(redPin, r);
  analogWrite(greenPin, g);
  analogWrite(bluePin, b);
}
