# Laboratory Activity #4 – Arduino Serial Connection

## 📌 Description
This laboratory activity demonstrates the use of **Arduino Serial communication** to monitor sensor data and control hardware behavior through user input. It integrates a **photoresistor sensor** with Serial-based interaction to showcase how real-time data and commands can influence system states.

The activity extends the concepts introduced in Laboratory Activity #3 by integrating a sensor-based condition with Serial commands to dynamically control an LED.

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
