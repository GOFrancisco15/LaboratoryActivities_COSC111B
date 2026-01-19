# Midterms Laboratory Exam – Smart Lighting System Using Arduino

## 📌 Description
This laboratory activity demonstrates how to build a **smart lighting system** using Arduino. The system uses a **photoresistor** to measure ambient light intensity and **three LEDs** to indicate the light level. It includes **manual** and **automatic** modes, allowing the system to simulate environmental changes such as cloudy or sunny conditions.

Students will learn to process sensor data, implement threshold-based logic, and interact with the Arduino via the **Serial Monitor**.

---

## 🎯 Objectives
- Learn to read analog sensor data using a **photoresistor**  
- Implement **LED indicators** for low, medium, and high light levels  
- Switch between **manual** and **automatic** operation modes  
- Adjust thresholds dynamically or manually based on user input  
- Display system status on the **Serial Monitor**  

---

## 🧠 Concepts Applied
- Analog input using `analogRead()`  
- Mapping sensor values to percentages (`map()` function)  
- Threshold-based decision logic for LED activation  
- Serial communication for **user commands** and feedback  
- String parsing with `startsWith()` and `substring()` to process commands  
- Automatic mode with dynamic thresholds simulating environmental conditions  
- Modular functions for cleaner, maintainable code  

---

## 💡 System Overview
The system components:
- **Photoresistor** connected to **analog pin A0** for measuring light intensity  
- **Green LED** → lights up at **LOW** light levels  
- **Yellow LED** → lights up at **MEDIUM** light levels  
- **Red LED** → lights up at **HIGH** light levels  

**Modes of operation:**
- **Manual Mode:** Users can set low/high thresholds via Serial commands.  
- **Automatic Mode:** Thresholds are dynamically adjusted based on light intensity:  
  - Cloudy → LOW = 0%, HIGH = 40%  
  - Normal → LOW = 41%, HIGH = 70%  
  - Bright Sunlight → LOW = 71%, HIGH = 100%  

**Serial Monitor Commands:**
| Command | Description |
|---------|-------------|
| `MODE AUTO` | Switch to automatic mode |
| `MODE MANUAL` | Switch to manual mode |
| `SET LOW xx` | Set low threshold (manual mode only) |
| `SET HIGH xx` | Set high threshold (manual mode only) |

Invalid commands return: `Error: Wrong command`.

The system displays the following every second:
- Light Intensity (%)  
- Current Mode (Manual/Automatic)  
- Active LED (Green/Yellow/Red)  
- Environment condition (Cloudy/Clear in automatic mode)

---

## 👥 Team Members
- **Team Leader:** Gerard Obey S. Francisco
- **Members:**
  - Merell Joy B. Barrion
  - Jose Angelo B. Bitanga
  - Maureen T. Roldan
  - John Mark L. Serrona
