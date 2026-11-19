#include <KiwisIoT.h>

const char* ssid  = "YOUR_WIFI_NAME";
const char* pass  = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

#define SOIL_PIN A0

void setup() {
  Serial.begin(9600);
  kiwisiot.begin();
}

void loop() {
  kiwisiot.run();

  int soilValue = analogRead(SOIL_PIN);

  kiwisiot.send("1", soilValue);

  Serial.print("Soil Moisture Value = ");
  Serial.println(soilValue);

  delay(1000);
}