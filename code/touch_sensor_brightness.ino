int touchPin = 2;      // Digital pin from metal touch sensor
int ledPin = 9;        // PWM pin to control LED brightness

int brightnessLevels[] = {0, 64, 128, 192, 255}; // 5 levels
int level = 0;
bool lastTouchState = LOW;

void setup() {
  pinMode(touchPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  bool currentTouch = digitalRead(touchPin);

  // Detect rising edge: LOW -> HIGH
  if (currentTouch == HIGH && lastTouchState == LOW) {
    level = (level + 1) % 5;  // Cycle brightness level
    analogWrite(ledPin, brightnessLevels[level]);
    Serial.print("Brightness Level: ");
    Serial.println(brightnessLevels[level]);
    delay(300); // Debounce delay
  }

  lastTouchState = currentTouch;
}
