//Laboratory Activity #1: Working with Digital Signals

int ledPins[] = {8, 9, 10, 11, 12};

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 4; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(1000);
  }
  
  for (int i = 4; i >= 0; i--) {
    digitalWrite(ledPins[i], LOW);
    delay(1000);
  }
}
