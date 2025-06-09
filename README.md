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

## 💡 More From Hobitronics

📘 Read our daily electronics blogs: [https://hobitronics.blog](https://hobitronics.blog)  
🎥 Follow us on Instagram for memes and tips: [@hobitronics](https://instagram.com/hobitronics)  
📩 Reach out for collaboration or feedback!

---

## 📜 License

License - Use and Modify freely, but please credit Hobitronics if you share!

---

