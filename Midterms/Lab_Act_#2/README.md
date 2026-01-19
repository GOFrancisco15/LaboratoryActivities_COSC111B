# Laboratory Activity #2 – Working with Analog Signals

## 📌 Description
This laboratory activity introduces the concept of **analog signals** and their application in an Arduino-based circuit. It builds upon the digital running light logic from Laboratory Activity #1 by incorporating **analog output control** to vary LED brightness.

The activity demonstrates how analog values are used to represent varying signal levels and how these values can be applied to control hardware components.

---

## 🎯 Objectives
- Discuss analog signals and their implementation in an Arduino circuit  
- Understand analog-to-digital signal conversion and scaling concepts  

---

## 🧠 Concepts Applied
- Analog signal representation
- Pulse Width Modulation (PWM) using `analogWrite()`
- Use of arrays for pin management
- Iterative control using `while()` loops
- Sequential logic execution
- Timing control using delays

---

## 💡 System Overview
The system consists of five LEDs connected to Arduino digital pins **8 to 12**. An array is used to store the LED pin numbers, allowing for structured and scalable control of multiple outputs.

The program sequentially activates the LEDs from **pin 12 down to pin 8** by setting their brightness to the maximum analog value. After all LEDs are turned on, the program sequentially reduces their brightness to zero in the same order.

This behavior visually demonstrates how analog output values can be used to control LED intensity and how looping structures and arrays simplify hardware control logic.
