//Laboratory Activity #3: Working with Sensors

#define THERMISTOR_PIN A0
#define PHOTORESISTOR_PIN A2
#define ALERT_PIN 12

const float TEMP_THRESHOLD = 50.0;
const int LIGHT_THRESHOLD = 220;

const float BETA_COEFFICIENT = 3950;
const float REF_RESISTANCE = 10000;
const float REF_TEMPERATURE_K = 298.15;

float readTemperature() {
  int analogValue = analogRead(THERMISTOR_PIN);
  float resistance = (1023.0 / analogValue - 1.0) * REF_RESISTANCE;
  float temperatureK = 1.0 / (log(resistance / REF_RESISTANCE) / BETA_COEFFICIENT + 1.0 / REF_TEMPERATURE_K);
  float temperatureC = temperatureK - 273.15;
  return temperatureC;
}

int readBrightness() {
  return analogRead(PHOTORESISTOR_PIN);
}


void setup() {
  Serial.begin(9600);
  pinMode(ALERT_PIN, OUTPUT);
}

void loop() {
  float temperature = readTemperature();
  int brightness = readBrightness();

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C | Brightness: ");
  Serial.println(brightness);

  if (temperature >= TEMP_THRESHOLD && brightness >= LIGHT_THRESHOLD) {
    digitalWrite(ALERT_PIN, HIGH);
    delay(100);
    digitalWrite(ALERT_PIN, LOW);
    delay(100);
  } else {
    digitalWrite(ALERT_PIN, LOW);
  }
}
