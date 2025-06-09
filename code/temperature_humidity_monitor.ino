#include <DHT.h>            // Include the DHT library
#include <LiquidCrystal.h>   // Include the LCD library

// Pin definitions for DHT22 and LCD
#define DHTPIN 7            // Pin where the DHT22 is connected
#define DHTTYPE DHT22       // Define the type of DHT sensor (DHT22)

DHT dht(DHTPIN, DHTTYPE);   // Create a DHT object

// Initialize the LCD with the corresponding pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Start the serial communication
  Serial.begin(9600);
  
  // Initialize the DHT sensor
  dht.begin();
  
  // Set up the LCD display
  lcd.begin(16, 2);           // Set LCD dimensions to 16x2
  lcd.print("Humidity & Temp"); // Print initial message
  delay(2000);                 // Wait for 2 seconds before displaying data
}

void loop() {
  // Read the humidity and temperature values from the DHT22 sensor
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Check if the readings are valid
  if (isnan(humidity) || isnan(temperature)) {
    lcd.clear();
    lcd.print("Failed to read sensor");
    return;
  }

  // Clear the LCD and display the new readings
  lcd.clear();
  lcd.print("Humidity: ");
  lcd.print(humidity);
  lcd.print("%");
  
  lcd.setCursor(0, 1);         // Move to the second line of the LCD
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print("C");

  // Wait for 2 seconds before updating the display
  delay(2000);
}
