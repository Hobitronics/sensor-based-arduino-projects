const int flameSensor = 2; // D0 of flame sensor
const int led = 8;         // LED pin

void setup() {
  pinMode(flameSensor, INPUT);
  pinMode(led, OUTPUT);

  digitalWrite(led, LOW);  // LED OFF by default
  Serial.begin(9600);
}

void loop() {
  int flame = digitalRead(flameSensor);

  if (flame == HIGH) { // LOW = Flame detected
    Serial.println("Flame Detected! LED ON");
    digitalWrite(led, HIGH); // LED ON
  } else {
    Serial.println("No Flame. LED OFF");
    digitalWrite(led, LOW);  // LED OFF
  }

  delay(100); // Prevent serial flooding
}
