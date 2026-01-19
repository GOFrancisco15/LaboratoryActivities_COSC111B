# Laboratory Activity #6 – Bidirectional Control Using Arduino and Python

## 📌 Description
This laboratory activity demonstrates **bidirectional serial communication** between an **Arduino microcontroller** and a **Python application**. It highlights how hardware inputs can be transmitted from Arduino to Python and how Python can respond by sending control commands back to Arduino in real time.

The activity showcases a complete two-way interaction loop between embedded hardware and software, which is a foundational concept in IoT and computer–hardware integration.

---

## 🎯 Objectives
- Understand and implement Arduino Serial communication
- Utilize Python as a tool for serial data handling
- Implement bidirectional communication between Arduino and Python

---

## 🧠 Concepts Applied
- Serial communication using `Serial.begin()`, `Serial.println()`, and `Serial.readStringUntil()`
- Digital input handling using push buttons
- Edge detection for button presses
- State-based LED control
- Bidirectional data exchange between Arduino and Python
- Python serial communication using the `pyserial` library
- Low-latency response handling

---

## 💡 System Overview
The system consists of an Arduino connected to **three push buttons** and **three LEDs** (red, green, and blue). Each button press is detected using edge detection to ensure that signals are sent only once per press.

### Outbound Communication (Arduino → Python)
When a button is pressed:
- Button 1 sends the character **`R`**
- Button 2 sends the character **`G`**
- Button 3 sends the character **`B`**

No LED action occurs during outbound transmission; the Arduino only sends the corresponding signal to Python.

### Inbound Communication (Python → Arduino)
A Python script continuously listens for incoming signals from the Arduino. Upon receiving:
- `R`, Python sends back **`1`**
- `G`, Python sends back **`2`**
- `B`, Python sends back **`3`**

The Arduino receives these values and toggles the corresponding LED:
- `1` toggles the red LED
- `2` toggles the green LED
- `3` toggles the blue LED

This exchange demonstrates real-time, bidirectional communication with a response time of less than one second.
