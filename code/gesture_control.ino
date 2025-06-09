const int irSensor = 2;
const int ledPin = 3;

bool ledState = false;
bool prevState = LOW;

void setup() {
  pinMode(irSensor, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.begin(9600);
  Serial.println("System Ready...");
}

void loop() {
  bool currentState = digitalRead(irSensor);

  Serial.print("IR: ");
  Serial.print(currentState);
  Serial.print(" | LED: ");
  Serial.println(ledState);

  if (currentState == HIGH && prevState == LOW) {
    ledState = !ledState;
    digitalWrite(ledPin, ledState ? HIGH : LOW);
    delay(300); // debounce delay
  }

  prevState = currentState;
}
