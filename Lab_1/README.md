# Laboratory Activity #1 – Working with Digital Signals

## 📌 Description
This laboratory activity demonstrates the use of **Arduino** as a foundational device for **IoT systems implementation**, with emphasis on understanding and applying **digital signals**. The activity showcases how digital output pins can be used to control external components in a structured and sequential manner.

A running light circuit is implemented using multiple LEDs to visualize digital signal behavior in an Arduino-controlled environment.

---

## 🎯 Objectives
- Review Arduino as a device for IoT systems implementation
- Discuss the concept of digital signals and their use in Arduino circuits

---

## 🧠 Concepts Applied
- Digital signal representation (HIGH and LOW)
- Digital output pin configuration
- Sequential execution of digital outputs
- Timing control using delay functions
- Use of the `digitalWrite()` function for LED control

---

## 💡 System Behavior
The program controls five LEDs connected to Arduino digital pins **8 to 12**.  
The LEDs are activated sequentially from **pin 12 to pin 8**, followed by a sequential deactivation in the same order. A fixed delay is applied between each state change to clearly demonstrate the flow of digital signals.

This continuous sequence provides a visual representation of how digital outputs are controlled programmatically in an Arduino-based system.

---

## 🗂 Files Included
| File Name | Description |
|----------|-------------|
| `lab1_activity.ino` | Arduino sketch containing the logic for configuring digital pins and controlling the LED sequence |
| `lab1_breadboard_diagram.png` | Breadboard diagram illustrating the hardware connections between the Arduino, LEDs, and resistors |
