# Laboratory Activity #5 – Receiving Serial Connection Using Arduino from Python

## 📌 Description
This laboratory activity demonstrates **serial communication from a Python application to an Arduino microcontroller**. It highlights how software commands sent from Python can control hardware outputs (LEDs) on the Arduino in real time.  

The activity showcases a simple interactive system where users can toggle individual LEDs, turn all LEDs on or off, and receive feedback from the Arduino, emphasizing Python–hardware integration and serial communication fundamentals.

---

## 🎯 Objectives
- Understand and implement Arduino Serial communication  
- Utilize Python as a tool for sending commands to Arduino  
- Create an interactive system to control LEDs via serial commands  

---

## 🧠 Concepts Applied
- Serial communication using `Serial.begin()`, `Serial.available()`, and `Serial.read()`  
- Case-insensitive input handling  
- LED control using digital output pins  
- Python serial communication using the `pyserial` library  
- Menu-driven, non-terminating Python script  
- Error handling for unknown commands  
- Modular Arduino code using a header file for reusable LED functions  

---

## 💡 System Overview
The system consists of an Arduino connected to **three LEDs** (red, green, and blue). Each LED is controlled via Python commands sent over the serial connection. The Arduino responds with status messages to indicate the action taken.  

### Communication (Python → Arduino)
- `R` / `r` → Toggle **Red LED** ON/OFF  
- `G` / `g` → Toggle **Green LED** ON/OFF  
- `B` / `b` → Toggle **Blue LED** ON/OFF  
- `A` / `a` → Turn **All LEDs ON**  
- `O` / `o` → Turn **All LEDs OFF**  
- `X` / `x` → Exit Python application  
- Any other input → Returns **error message**  

All inputs are **case-insensitive**, and Arduino provides feedback like `RED ON`, `ALL OFF`, or `ERR: UNKNOWN COMMAND`.

This setup demonstrates real-time control of LEDs with immediate feedback from the Arduino.

---

## 🗂 Files Included
| File Name | Description |
|-----------|-------------|
| `lab5_activity.ino` | Arduino sketch handling serial input and controlling LEDs based on commands |
| `lab5_activity.py` | Python script providing a menu interface to send commands to Arduino via serial |
| `activity_functions.h` | Header file containing reusable functions for LED initialization and control (`toggleRed`, `toggleGreen`, `toggleBlue`, `allOn`, `allOff`) |
| `lab5_breadboard_diagram.png` | Breadboard diagram illustrating LED connections to Arduino pins 8, 9, and 10 |
