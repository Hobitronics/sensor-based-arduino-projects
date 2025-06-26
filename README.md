# Sensor based Arduino Projects🚀

Welcome to the Hobitronics mini-project series! This repository contains three exciting Arduino-based projects designed for beginners and intermediate learners to explore touch and light sensors. Each project includes full code, explanations, and YouTube Shorts demos.

---

## 📱 RGB LED Touch Color Selector

**Description**:  
This project uses a **metal touch sensor** to cycle through 8 beautiful colors on an RGB LED every time you touch it.

### 🔧 Components:
- Arduino UNO
- RGB LED (Common Cathode or Anode)
- Metal Touch Sensor Module
- Resistors (220Ω for RGB LED)
- Jumper Wires & Breadboard

### 🔍 Features:
- Cycles through 8 preset colors with each touch
- Uses PWM to control LED color mixing
- Debounced for stable interaction

### 📺 Demo  
👉 [Watch on YouTube Shorts](https://www.youtube.com/shorts/Mut5cESZYx8)  
👉 [Find Code on GitHub](https://github.com/Hobitronics/sensor-based-arduino-projects/blob/main/code/touch_sensor_rgb_module.ino)

---
## 🌟 Touch LED Brightness Controller

**Description**:  
Control the brightness of a single LED using a touch sensor! Each touch cycles through 5 brightness levels from dim to full brightness.

### 🔧 Components:
- Arduino UNO
- LED
- Metal Touch Sensor
- 220Ω Resistor
- Jumper Wires & Breadboard

### 🔍 Features:
- 5 levels of brightness (0 to 255)
- PWM used to control LED intensity
- Simple and intuitive interface

### 📺 Demo:  
👉 [Watch on YouTube Shorts](https://www.youtube.com/shorts/b532Vb7Kuwo)  
👉 [Find Code on GitHub](https://github.com/Hobitronics/sensor-based-arduino-projects/blob/main/code/touch_sensor_brightness.ino)

---
## 🌞 LDR-Based Light Detection

**Description**:  
Use an LDR (Light Dependent Resistor) module to detect ambient light and automatically turn an LED ON or OFF.

### 🔧 Components:
- Arduino UNO
- LDR Sensor Module (with digital output)
- LED (or use built-in LED on pin 13)
- Jumper Wires

### 🔍 Features:
- Detects light vs. dark environments
- Digital input means no analog processing needed
- Can be extended for street light automation

### 📺 Demo:  
👉 [Watch on YouTube Shorts](https://www.youtube.com/shorts/J1jQQLz1Tbc)

👉 [Find Code on GitHub](https://github.com/Hobitronics/sensor-based-arduino-projects/blob/main/code/ldr_led.ino)

---
## 🔥 Fire Detection System using Flame Sensor

**Description**:  
This simple yet powerful project uses a **flame sensor** to detect fire and automatically turns on an LED as an alert. It’s a great beginner-friendly safety project!

### 🔧 Components:
- Arduino UNO
- Flame Sensor (Digital Out – D0)
- LED
- Resistor (220Ω for LED)
- Jumper Wires & Breadboard

### 🔍 Features:
- Detects flame using a digital flame sensor
- Turns on an LED when fire is detected
- Real-time flame detection output on Serial Monitor

### 📺 Demo  
👉 [Watch on YouTube Shorts](https://www.youtube.com/shorts/6YyKSoz93YA)  
👉 [Find Code on GitHub](https://github.com/Hobitronics/sensor-based-arduino-projects/blob/main/code/fire_detector.ino)

---
## 🕹️ Joystick-Controlled Multi-LED Direction Indicator

**Description**:  
This project reads the analog X and Y axis values of a **joystick module** and lights up different LEDs based on direction (up, down, left, right). A fun and interactive way to learn about analog input and conditional logic!

### 🔧 Components:
- Arduino UNO
- Joystick Module (2-axis)
- 4 LEDs (Green, Red, Blue, White)
- 220Ω Resistors (one per LED)
- Jumper Wires & Breadboard

### 🔍 Features:
- Detects direction based on joystick tilt
- Lights up a corresponding LED
- Real-time analog value monitoring via Serial Monitor

### 📺 Demo  
👉 [Watch on YouTube Shorts](https://www.youtube.com/shorts/LLuFA0pNud4)  
👉 [Find Code on GitHub](https://github.com/Hobitronics/sensor-based-arduino-projects/blob/main/code/joystick_led_direction.ino)

---
## 🧠 Arduino Simon Says Memory Game

**Description**:  
A fun and challenging **memory game** built using LEDs, push buttons, and a buzzer! The player must repeat an ever-growing sequence of LED flashes. If you press the wrong button — game over!

### 🔧 Components:
- Arduino UNO
- 4 Push Buttons
- 4 LEDs (any colors)
- 4 × 220Ω Resistors (for LEDs)
- 4 × 10kΩ Resistors (for buttons, optional if using `INPUT_PULLUP`)
- Buzzer
- Jumper Wires & Breadboard

### 🔍 Features:
- Random sequence generation up to 100 steps
- LED + buzzer feedback for each step
- Detects wrong input and restarts the game
- Perfect for practicing arrays, logic, and interaction

### 📺 Demo  
👉 [Watch on YouTube Shorts](https://www.youtube.com/shorts/1zHUwx757jE)  
👉 [Find Code on GitHub](https://github.com/Hobitronics/sensor-based-arduino-projects/blob/main/code/memory_game.ino)

---
## 🎹 Mini Synth Buzzer

**Description**:  
A simple mini synthesizer using four push buttons to play different musical notes through a buzzer. Press any button to play a tone!

### 🔧 Components:
- Arduino UNO
- 4 Push Buttons
- Buzzer
- Jumper Wires & Breadboard

### 🔍 Features:
- Plays 4 distinct notes (C, D, E, G)
- Uses internal pull-up resistors for buttons
- Immediate audio feedback with buzzer

### 📺 Demo  
👉 [Watch on YouTube Shorts](https://www.youtube.com/shorts/TlRXU3seVjU)  
👉 [Find Code on GitHub](https://github.com/Hobitronics/sensor-based-arduino-projects/blob/main/code/mini_synth.ino)

---
## 🔄 Rotary Encoder Speed Counter with LCD

**Description**:  
This project uses a rotary encoder to count rotations and display the count on a 16x2 LCD screen. Press the encoder button to reset the count.

### 🔧 Components:
- Arduino UNO
- Rotary Encoder (with CLK, DT, SW pins)
- 16x2 LCD Display (with LiquidCrystal interface)
- Jumper Wires & Breadboard

### 🔍 Features:
- Counts rotary encoder steps (increments/decrements)
- Displays count live on LCD
- Reset count via encoder button
- Uses LiquidCrystal library for easy LCD control

### 📺 Demo  
👉 [Watch on YouTube Shorts](https://www.youtube.com/shorts/0sYFLn7KKi8)  
👉 [Find Code on GitHub](https://github.com/Hobitronics/sensor-based-arduino-projects/blob/main/code/rotary_encoder_lcd.ino)

---
## 🗑️ Smart Dustbin with Ultrasonic Sensor and Servo

**Description:**  
This project uses an ultrasonic sensor to detect when a hand is near the dustbin lid, which then automatically opens using a servo motor and closes after a short delay.

### 🔧 Components:
- Arduino UNO
- Ultrasonic Sensor (HC-SR04)
- Servo Motor
- Jumper Wires & Breadboard

### 🔍 Features:
- Detects hand within 20 cm using ultrasonic sensor
- Opens lid automatically with servo motor
- Closes lid after 2 seconds delay
- Serial monitor outputs distance readings

### 📺 Demo  
👉 [Watch on YouTube Shorts](https://www.youtube.com/shorts/_VfbWdnyTq4)  
👉 [Find Code on GitHub](https://github.com/Hobitronics/sensor-based-arduino-projects/blob/main/code/smart_dustbin.ino)

---
## 🎨 RGB LED Color Changer with 30 Stunning Shades

**Description:**  
This Arduino project cycles through **30 vibrant RGB colors** using a single push button. Each press switches to a new shade by controlling the PWM of red, green, and blue pins.

### 🔧 Components:
- Arduino UNO
- RGB LED (Common Cathode)
- Push Button
- Resistors
- Jumper Wires & Breadboard

### 🔍 Features:
- 30 distinct colors defined in a 2D array
- Smooth color transition with button press
- Internal pull-up for button debounce
- PWM control for accurate color mixing

### 📺 Demo  
👉 [Watch on YouTube Shorts](https://www.youtube.com/shorts/LKjMsei9AKY)  
👉 [Find Code on GitHub](https://github.com/Hobitronics/sensor-based-arduino-projects/blob/main/code/smb_rgb_simulation.ino)

---
## 🌡️ Temperature & Humidity Monitor with LCD

**Description:**  
This project uses a DHT22 sensor to measure the temperature and humidity, and displays the values on a 16x2 LCD in real-time.

### 🔧 Components:
- Arduino UNO
- DHT22 Temperature & Humidity Sensor
- 16x2 LCD Display
- 10KΩ Potentiometer (for LCD contrast)
- Jumper Wires & Breadboard

### 🔍 Features:
- Real-time temperature and humidity monitoring
- LCD display output with clear formatting
- Serial monitor output for debugging
- Handles sensor read failures gracefully

### 📺 Demo  
👉 [Watch on YouTube Shorts](https://www.youtube.com/shorts/eQEAwBdGXmo)  
👉 [Find Code on GitHub](https://github.com/Hobitronics/sensor-based-arduino-projects/blob/main/code/temperature_humidity_monitor.ino)

---
## 🚨 PIR Motion Sensor Alarm
**Description**:  
This beginner-friendly project uses a PIR motion sensor to detect movement and immediately activate a buzzer and LED. It’s perfect for creating a basic security alert system or a motion-triggered notification setup.
---

### 🔧 Components:
Arduino UNO

PIR Motion Sensor

Passive Buzzer

LED

Resistor (220Ω for LED)

Jumper Wires & Breadboard
---

### 🔍 Features:
Detects motion using infrared radiation

Activates both LED and buzzer on movement

Serial Monitor displays "Motion Detected!" in real-time

---

### 📺 Demo
👉 [Watch on YouTube Shorts](https://www.youtube.com/shorts/WMv_iixxWio)
👉 [Find Code on GitHub](https://github.com/Hobitronics/sensor-based-arduino-projects/blob/main/code/pir_sensor.ino)
---

## 💡 More From Hobitronics

📘 Read our daily electronics blogs: [https://hobitronics.blog](https://hobitronics.blog)  
🎥 Follow us on Instagram for memes and tips: [@hobitronics](https://instagram.com/hobitronics)  
📩 Reach out for collaboration or feedback!

---

## 📜 License

License - Use and Modify freely, but please credit Hobitronics if you share!

---

