# Laboratory Activity #4 – Arduino Serial Connection

## 📌 Description
This laboratory activity focuses on the implementation of **serial communication** between an Arduino board and a computer. It demonstrates how sensor data can be monitored through the Serial interface and how user input from the Serial Monitor can be used to control system behavior.

The activity extends the concepts introduced in Laboratory Activity #3 by integrating a sensor-based condition with Serial commands to dynamically control an LED.

---

## 🎯 Objectives
- Understand and implement Arduino Serial communication  
- Utilize basic Serial functions for data input and output  
- Develop a simple circuit that can be controlled through Serial connection  

---

## 🧠 Concepts Applied
- Serial communication using `Serial.begin()`, `Serial.print()`, and `Serial.read()`
- Sensor data acquisition
- Threshold-based decision logic
- State control using boolean flags
- Case-insensitive string handling
- Digital output control using `digitalWrite()`

---

## 💡 System Overview
The system uses an Arduino Uno connected to a single sensor (thermistor or photoresistor) and an LED connected to **digital pin 8**. Sensor readings are continuously monitored and transmitted through the Serial interface.

When the sensor value reaches a predefined threshold, the LED enters a blinking state. This blinking behavior persists independently of subsequent sensor readings and can only be terminated by sending a specific command through the Serial Monitor.

This setup demonstrates how Serial communication can be used not only for monitoring sensor data but also for interactive control of hardware components.

---

## 🗂 Files Included
| File Name | Description |
|----------|-------------|
| `lab4_activity.ino` | Arduino sketch implementing sensor monitoring, Serial communication, and LED control logic |
| `lab4_breadboard_diagram.png` | Breadboard diagram showing the sensor, LED, and Arduino connections used in the activity |

---

## 📝 Notes
This activity highlights the role of Serial communication in embedded systems, particularly for debugging, monitoring, and remote control. The concepts applied here are essential for developing interactive and sensor-driven IoT applications.
