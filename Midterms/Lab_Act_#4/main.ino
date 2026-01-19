//Laboratory Activity #4: Arduino Serial Connection

#define PHOTORESISTOR_PIN A2
#define ALERT_PIN 8

const int LIGHT_THRESHOLD = 220;
bool isBlinking = false;

float readBrightness() {
  int brightness = analogRead(PHOTORESISTOR_PIN); 
  int outputValue = map(brightness, 0, 1023, 0, 255);
  return (float)outputValue;
}

void blink() {
  digitalWrite(ALERT_PIN, HIGH);
  delay(100);
  digitalWrite(ALERT_PIN, LOW);
  delay(100);
}

void setup() {
  Serial.begin(9600);
  pinMode(ALERT_PIN, OUTPUT);
}

void loop() {
  float brightness = readBrightness();
  
  Serial.print("Brightness: ");
  Serial.println(brightness);

  if (brightness > LIGHT_THRESHOLD) {
    isBlinking = true;
  }

  if (Serial.available()) {
    String input = Serial.readStringUntil('\n'); 
    input.toLowerCase(); 
    input.trim(); 
    if (input.equals("stop")) {
      isBlinking = false;
      digitalWrite(ALERT_PIN, LOW);
    }
  }

  if (isBlinking) {
    blink(); 
  }
}
