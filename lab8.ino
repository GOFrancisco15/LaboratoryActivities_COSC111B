// ----- Pins -----
const int RED_LED = 7;
const int GREEN_LED = 6;
const int BLUE_LED = 5;

const int BTN1 = 12;
const int BTN2 = 11;
const int BTN3 = 10;

// LED states
bool redState = false;
bool greenState = false;
bool blueState = false;

// Button previous state for edge detection
bool lastBtn1 = HIGH;
bool lastBtn2 = HIGH;
bool lastBtn3 = HIGH;

void setup() {
  Serial.begin(9600);

  // LEDs
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

  // Buttons
  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);
  pinMode(BTN3, INPUT_PULLUP);

  // Initialize LED OFF
  digitalWrite(RED_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(BLUE_LED, LOW);

  // Initialize button state
  lastBtn1 = digitalRead(BTN1);
  lastBtn2 = digitalRead(BTN2);
  lastBtn3 = digitalRead(BTN3);

  // Startup delay to avoid flashing
  delay(2000);
  while (Serial.available() > 0) Serial.read();  // clear buffer
}

void loop() {
  // ----- Button handling -----
  bool btn1 = digitalRead(BTN1);
  bool btn2 = digitalRead(BTN2);
  bool btn3 = digitalRead(BTN3);

  if (lastBtn1 == HIGH && btn1 == LOW) {
    redState = !redState;
    updateLEDs();
  }
  if (lastBtn2 == HIGH && btn2 == LOW) {
    greenState = !greenState;
    updateLEDs();
  }
  if (lastBtn3 == HIGH && btn3 == LOW) {
    blueState = !blueState;
    updateLEDs();
  }

  lastBtn1 = btn1;
  lastBtn2 = btn2;
  lastBtn3 = btn3;

  // ----- Serial input handling (Inbound signal) -----
  if (Serial.available()) {
      String input = Serial.readStringUntil('\n');
      input.trim();
      input.toLowerCase();  // make everything lowercase for easy comparison

      if (input.length() == 1) {
          // Toggle single LEDs
          char cmd = input.charAt(0);
          if (cmd == '1') {
              redState = !redState;
              updateLEDs();
          } else if (cmd == '2') {
              greenState = !greenState;
              updateLEDs();
          } else if (cmd == '3') {
              blueState = !blueState;
              updateLEDs();
          }
      }
  }
}

void updateLEDs() {
  digitalWrite(RED_LED, redState ? HIGH : LOW);
  digitalWrite(GREEN_LED, greenState ? HIGH : LOW);
  digitalWrite(BLUE_LED, blueState ? HIGH : LOW);
}
