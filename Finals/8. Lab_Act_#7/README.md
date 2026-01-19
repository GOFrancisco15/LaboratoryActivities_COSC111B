# Laboratory Activity #7 – Controlling Arduino Using FastAPI

## 📌 Description
This laboratory activity demonstrates **real-time, bidirectional control of an Arduino board** using a **FastAPI web server**. The system allows hardware inputs (push buttons) and web-based HTTP requests to toggle LED states on the Arduino, showcasing an advanced IoT-style control architecture.

The activity combines **physical interaction** through push buttons with **remote software control** through HTTP endpoints, providing a full-stack view of device management.

---

## 🎯 Objectives
- Implement Arduino Serial communication for hardware control
- Utilize Python and FastAPI to create HTTP endpoints for hardware interaction
- Develop a bidirectional control system integrating physical buttons and web-based commands

---

## 🧠 Concepts Applied
- Serial communication between Arduino and Python
- Digital input handling with push buttons
- Edge detection and state toggling
- Digital output control for LEDs
- HTTP server development with FastAPI
- Mapping web requests to serial commands
- Maintaining synchronized LED states between hardware and software

---

## 💡 System Overview
The system consists of:
- **Three LEDs** (Red, Green, Blue) connected to digital pins 5, 6, and 7
- **Three push buttons** connected to digital pins 10, 11, and 12
- An Arduino sketch that handles:
  - Push button input detection and LED state toggling
  - Serial command parsing to toggle LEDs based on incoming Python commands
- A **FastAPI Python application** that exposes RESTful endpoints to control the LEDs remotely:
  - `/led/red`, `/led/green`, `/led/blue` — toggles individual LEDs
  - `/led/on` — turns all LEDs ON
  - `/led/off` — turns all LEDs OFF

The Python application communicates with the Arduino through a serial connection, sending single-character commands that correspond to each LED.

---

## 🗂 Files Included
| File Name | Description |
|----------|-------------|
| `lab7_activity.ino` | Arduino sketch managing LED states, push button inputs, and serial command handling |
| `lab7_api.py` | FastAPI Python application converting HTTP requests into serial commands for Arduino control |
| `lab7_breadboard_diagram.png` | Breadboard diagram showing LED and push button connections to the Arduino |

---

## 📝 Notes
This activity demonstrates a full-stack IoT approach, integrating hardware inputs, serial communication, and web-based APIs. It highlights real-world design principles for remotely controlling and synchronizing physical devices using modern web technologies.
