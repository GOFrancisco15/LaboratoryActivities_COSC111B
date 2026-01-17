from fastapi import FastAPI
import serial
import time

app = FastAPI()

# Serial setup
arduino = serial.Serial('COM8', 9600, timeout=1)
time.sleep(2)  # Allow Arduino to initialize

# Python-side LED states
led_states = {
    "red": False,
    "green": False,
    "blue": False
}

# Map colors to Arduino commands
led_cmds = {
    "red": b'1\n',
    "green": b'2\n',
    "blue": b'3\n'
}

def send_command(color):
    """Send toggle command to Arduino and update Python state."""
    arduino.write(led_cmds[color])
    led_states[color] = not led_states[color]  # Toggle Python state

@app.get("/led/on")
def led_all_on():
    for color, state in led_states.items():
        if not state:  # If LED is OFF, toggle it
            send_command(color)
    return {"status": "All LEDs ON"}

@app.get("/led/off")
def led_all_off():
    for color, state in led_states.items():
        if state:  # If LED is ON, toggle it
            send_command(color)
    return {"status": "All LEDs OFF"}

@app.get("/led/{color}")
def led_toggle(color: str):
    color = color.lower()
    if color not in led_cmds:
        return {"status": "Invalid color. Use red, green, or blue."}
    send_command(color)
    return {"status": f"{color} LED toggled"}
