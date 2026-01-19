# Laboratory Activity #3 – Working with Sensors

## 📌 Description
This laboratory activity introduces the use of **sensor components** commonly applied in IoT systems and demonstrates how multiple sensors can be integrated into a single Arduino-based circuit. The activity implements a simple **fire detection system** using a thermistor and a photoresistor.

By combining temperature and light intensity readings, the system illustrates how environmental data can be processed to trigger hardware-based alerts.

---

## 🎯 Objectives
- Familiarize students with basic sensor components used in IoT
- Integrate multiple sensors into an Arduino circuit
- Implement a simple fire detection mechanism using sensor data

---

## 🧠 Concepts Applied
- Analog sensor data acquisition
- Thermistor temperature calculation using the Beta parameter equation
- Light intensity sensing using a photoresistor
- Threshold-based decision logic
- Function modularization for sensor readings
- Use of `#define` for pin configuration
- Use of `const` for fixed threshold values
- Digital output control for alert signaling

---

## 💡 System Overview
The system uses two sensors:
- A **thermistor connected to analog pin A0** to measure temperature in Celsius
- A **photoresistor connected to analog pin A2** to measure light intensity

Sensor readings are processed through separate functions for clarity and modularity. When **both** the temperature and brightness exceed their defined threshold values, an alert mechanism is triggered.

An LED connected to **digital pin 12** rapidly blinks to indicate a potential fire condition. This visual alert demonstrates how multiple sensor inputs can be combined to determine system responses.
