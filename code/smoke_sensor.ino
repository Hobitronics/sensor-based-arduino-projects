const int smokePin = 8;     // Digital pin connected to MQ2 D0
const int buzzerPin = 9;    // Buzzer pin

void setup() {
  pinMode(smokePin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);

  delay(30000); // wait 30 seconds to stabilize the sensor
}

void loop() {
  int smokeDetected = digitalRead(smokePin);

  if (smokeDetected == LOW) {  // MQ2 gives LOW when smoke is detected
    Serial.println("Smoke detected!");
    digitalWrite(9, HIGH);
  } else {
    Serial.println("No smoke");
    digitalWrite(buzzerPin, LOW);
  }

  delay(500);
}
