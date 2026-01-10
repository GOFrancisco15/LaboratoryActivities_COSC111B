# Laboratory Activity #4 – Arduino Serial Connection

## 📌 Description
This laboratory activity demonstrates the use of **Arduino Serial communication** to monitor sensor data and control hardware behavior through user input. It integrates a **photoresistor sensor** with Serial-based interaction to showcase how real-time data and commands can influence system states.

The activity builds on previous sensor-based implementations by introducing persistent behavior control using Serial input.

---

## 🎯 Objectives
- Understand and implement Arduino Serial communication
- Utilize basic Serial functions for monitoring and control
- Develop a sensor-based circuit controlled through Serial commands

---

## 🧠 Concepts Applied
- Serial communication using `Serial.begin()`, `Serial.print()`, and `Serial.readStringUntil()`
- Analog sensor data acquisition using `analogRead()`
- Signal mapping using `map()`
- Threshold-based logic
- State management using boolean flags
- Case-insensitive string processing
- Digital output control for LED blinking

---

## 💡 System Overview
The system uses a **photoresistor connected to analog pin A2** to measure light intensity. Sensor readings are mapped to a scaled brightness value and continuously transmitted through the Serial interface for monitoring.

An LED connected to **digital pin 8** acts as an alert indicator. When the brightness value exceeds a predefined threshold, the LED enters a blinking state. This blinking behavior is maintained even if the sensor reading later falls below the threshold, demonstrating persistent state control.

The blinking state can only be stopped by sending a specific command through the Serial interface, highlighting the role of Serial input in overriding sensor-driven behavior.

---

## 🗂 Files Included
| File Name | Description |
|----------|-------------|
| `lab4_activity.ino` | Arduino sketch implementing photoresistor sensing, Serial communication, and persistent LED control |
| `lab4_breadboard_diagram.png` | Breadboard diagram illustrating the connections between the Arduino, photoresistor, LED, and resistors |

---

## 📝 Notes
This activity emphasizes the importance of Serial communication for interaction, debugging, and control in embedded systems. The use of persistent states and command-based overrides is a key concept for more advanced Arduino and IoT applications.
