const int buttonPin = 2;
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

int colorIndex = 0;
bool lastButtonState = HIGH;

const int NUM_COLORS = 30;

const int colors[NUM_COLORS][3] = {
  {255, 0, 0},     // Red
  {0, 255, 0},     // Green
  {0, 0, 255},     // Blue
  {255, 255, 0},   // Yellow
  {0, 255, 255},   // Cyan
  {255, 0, 255},   // Magenta
  {255, 255, 255}, // White
  {255, 128, 0},   // Orange
  {128, 0, 255},   // Purple
  {0, 128, 255},   // Sky Blue
  {255, 0, 128},   // Rose
  {128, 255, 0},   // Lime
  {0, 255, 128},   // Aqua
  {128, 128, 128}, // Gray
  {255, 102, 102}, // Light Red
  {102, 255, 178}, // Mint
  {178, 102, 255}, // Lavender
  {255, 255, 153}, // Light Yellow
  {255, 153, 204}, // Pink
  {153, 255, 255}, // Baby Blue
  {204, 255, 153}, // Light Green
  {153, 204, 255}, // Light Sky
  {255, 204, 153}, // Peach
  {204, 153, 255}, // Soft Violet
  {255, 153, 153}, // Coral
  {153, 255, 204}, // Seafoam
  {255, 255, 204}, // Cream
  {204, 255, 255}, // Pale Blue
  {255, 204, 204}, // Blush
  {192, 192, 192}  // Silver
};

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  showColor(colorIndex);
}

void loop() {
  bool currentButtonState = digitalRead(buttonPin);

  // Detect button press (rising edge)
  if (lastButtonState == HIGH && currentButtonState == LOW) {
    colorIndex = (colorIndex + 1) % NUM_COLORS;
    showColor(colorIndex);
    delay(200); // debounce
  }

  lastButtonState = currentButtonState;
}

void showColor(int index) {
  setColor(colors[index][0], colors[index][1], colors[index][2]);
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
