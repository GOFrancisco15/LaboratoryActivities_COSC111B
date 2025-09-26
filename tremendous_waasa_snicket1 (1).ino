int ledPins[] = {8, 9, 10, 11, 12};
int numLeds = 5;

void setup() {
  int i = 0;
  while (i < numLeds) {
    pinMode(ledPins[i], OUTPUT);
    i++;
  }
}

void loop() {
  int i = numLeds - 1;

  while (i >= 0) {
    analogWrite(ledPins[i], 255);
    delay(1000);
    i--;
  }

  i = numLeds - 1;

  while (i >= 0) {
    analogWrite(ledPins[i], 0);
    delay(1000);
    i--;
  }
}

