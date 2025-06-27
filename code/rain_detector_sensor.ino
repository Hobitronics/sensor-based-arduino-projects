const int rainSensorPin = 2;  // Digital output from sensor
const int buzzerPin = 3;      // Buzzer pin
const int redLEDPin = 4;      // Red LED pin

void setup() {
  pinMode(rainSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Rain Sensor Initialized");
}

void loop() {
  int rainStatus = digitalRead(rainSensorPin);

  if (rainStatus == LOW) {
    // Rain detected
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(redLEDPin, HIGH);
    Serial.println("Rain Detected!");
  } else {
    // No rain
    digitalWrite(buzzerPin, LOW);
    digitalWrite(redLEDPin, LOW);
    Serial.println("No Rain.");
  }

  delay(500);
}
