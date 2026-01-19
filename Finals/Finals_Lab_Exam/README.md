# Final Laboratory Exam – Arduino-to-Python Client System

## 📌 Description
This project demonstrates an **Arduino-to-Python client system** that enables a push button on an Arduino to remotely trigger actions on a separate LED system via a Python-based API client. The Arduino does **not** communicate with the API directly; instead, it sends signals through the serial port to a Python program running on a computer, which then calls the predefined API endpoint.

The system ensures **debounced button presses**, validates inputs, and displays feedback on the Python terminal.

---

## 🎯 Objectives
- Implement serial communication between Arduino and Python  
- Use a **push button** as an input device with proper software debouncing  
- Send a signal representing the **group number** from Arduino to Python  
- Trigger HTTP requests from Python to a remote API endpoint based on Arduino input  
- Provide clear feedback on API calls in the Python terminal  

---

## 🧠 Concepts Applied
- Digital input reading using Arduino (`digitalRead()`)  
- Software debouncing for reliable button presses  
- Serial communication between Arduino and Python  
- Python `serial` module for continuous listening on the COM port  
- HTTP requests in Python using the `requests` library  
- Case-insensitive input handling and normalization  
- Error handling and validation for both Arduino and Python sides  

---

## 💡 System Overview
The system consists of:
- **Arduino Board** with a push button connected as the input device  
- **Python Client** running on a computer, listening to the serial port  
- **Remote LED API** endpoint that toggles LEDs based on the received group number  

**Workflow:**
1. User presses the button on the Arduino  
2. Arduino sends the assigned **group number** via the Serial Monitor  
3. Python client reads the serial input, validates it, and sends an HTTP request to the API: /led/group/<number>/toggle
4. Python client displays feedback:  
- Group number received  
- Endpoint called  
- API response (success/error)  

**Rules:**
- One button press = one API request  
- Long button presses must **not** generate repeated API calls  
- All serial input must be validated and errors displayed if necessary
