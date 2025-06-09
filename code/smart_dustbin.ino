#include <Servo.h>

const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 3;

Servo lidServo;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lidServo.attach(servoPin);
  lidServo.write(0); // Initial closed position
  Serial.begin(9600);
}

void loop() {
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo time
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance > 0 && distance < 20) { // If hand is within 20 cm
    lidServo.write(180); // Open lid
    delay(2000);         // Wait 2 seconds
    lidServo.write(0);  // Close lid
  }

  delay(100);
}
