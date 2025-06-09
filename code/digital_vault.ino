#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET     -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int buttons[9] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
char digits[9] = {'1','2','3','4','5','6','7','8','9'};
bool buttonState[9];

String input = "";
String password = "";

bool passwordSet = false;
int attempts = 0;
bool lockedOut = false;
unsigned long lockoutStart = 0;
const unsigned long lockoutTime = 600000; // 10 min

enum State {
  SET_PASSWORD,
  SHOW_LOCKED,
  ENTER_PASSWORD,
  CHECKING,
  OPENED,
  LOCKED_OUT
};

State currentState = SET_PASSWORD;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 9; i++) {
    pinMode(buttons[i], INPUT_PULLUP);
    buttonState[i] = false;
  }

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED failed");
    for (;;);
  }

  displayMessage("Set", "Password");
}

void loop() {
  if (lockedOut && (millis() - lockoutStart >= lockoutTime)) {
    lockedOut = false;
    attempts = 0;
    displayMessage("Access", "Restored");
    delay(2000);
    displayMessage("Enter", "Password");
    currentState = ENTER_PASSWORD;
  }

  if (lockedOut) {
    return;
  }

  for (int i = 0; i < 9; i++) {
    int reading = digitalRead(buttons[i]);

    if (reading == LOW && !buttonState[i]) {
      buttonState[i] = true;
      input += digits[i];
      Serial.println("Pressed: " + String(digits[i]));

      if (currentState == SET_PASSWORD) {
        displayMessage("Set Pass", input);
      } else if (currentState == ENTER_PASSWORD) {
        displayMessage("Enter", input);
      }

      if (input.length() == 4) {
        if (currentState == SET_PASSWORD) {
          password = input;
          input = "";
          passwordSet = true;
          currentState = SHOW_LOCKED;
          displayMessage("Vault", "Locked");
          delay(2000);
          display.clearDisplay();
          display.display();
          delay(500);
          displayMessage("Enter", "Password");
          currentState = ENTER_PASSWORD;
        }

        else if (currentState == ENTER_PASSWORD) {
          if (input == password) {
            displayMessage("Vault", "Opened");
            delay(3000);
            displayMessage("Vault", "Locked");
            delay(1500);
            display.clearDisplay();
            display.display();
            delay(500);
            displayMessage("Enter", "Password");
            attempts = 0;
          } else {
            attempts++;
            if (attempts >= 3) {
              displayMessage("Vault", "Locked");
              delay(500);
              displayMessage("Try again", "after 10m");
              lockedOut = true;
              lockoutStart = millis();
            } else {
              String msg = String(attempts) + " of 3    attempts";
              displayMessage("Wrong Pass", msg);
              delay(2000);
              displayMessage("Enter", "Password");
            }
          }
          input = "";
        }
      }
    }

    if (reading == HIGH) {
      buttonState[i] = false;
    }
  }

  delay(50);
}

void displayMessage(String line1, String line2) {
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println(line1);
  display.setCursor(0, 30);
  display.println(line2);
  display.display();
}
