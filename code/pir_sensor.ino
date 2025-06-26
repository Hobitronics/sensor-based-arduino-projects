*PIR motion*

const int pirPin = 2;       // PIR sensor output
const int buzzerPin = 3;    // Passive buzzer
const int ledPin = 4;       // LED

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("System Ready...");
}

void loop() {
  int motion = digitalRead(pirPin);

  if (motion == HIGH) {
    Serial.println("Motion Detected!");
    digitalWrite(ledPin, HIGH);       // LED ON
    tone(buzzerPin, 1000);            // Continuous tone
  } else {
    digitalWrite(ledPin, LOW);        // LED OFF
    noTone(buzzerPin);                // Stop tone
  }

  //delay(100); // Slight delay to prevent jitter
}
