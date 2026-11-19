# Soil Moisture Sensor with NodeMCU ESP8266 and KiwisIoT

## Project Overview
This project monitors soil moisture using a NodeMCU ESP8266 and an analog soil moisture sensor. The ESP8266 reads the sensor value and sends it through Wi-Fi to the KiwisIoT platform for remote monitoring through an online dashboard.

## Hardware Components
- NodeMCU ESP8266
- Analog Soil Moisture Sensor
- Jumper Wires
- USB Cable
- Computer or Laptop

## Software Requirements
- Arduino IDE
- ESP8266 Board Package
- KiwisIoT Arduino Library
- Wi-Fi Connection

## Circuit Connections

| Soil Moisture Sensor | NodeMCU ESP8266 |
|---|---|
| VCC | 3.3V |
| GND | GND |
| AO | A0 |

## Working Principle
The soil moisture sensor detects changes in moisture around its probes and produces an analog output.

The ESP8266 reads the sensor value using `analogRead(A0)` and sends the reading to KiwisIoT every second.

Users can monitor changes in soil moisture readings remotely through the KiwisIoT dashboard.

## KiwisIoT Dashboard

| Channel | Data |
|---|---|
| Channel 1 | Soil Moisture Sensor Reading |

**Note:** The analog reading is a raw sensor value, not a calibrated moisture percentage. Calibration depends on the sensor and soil conditions.

## Configuration
Update your Wi-Fi credentials and KiwisIoT Topic ID in the Arduino code:

```cpp
const char* ssid  = "YOUR_WIFI_NAME";
const char* pass  = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";
```

Upload the code to the NodeMCU ESP8266 and monitor soil moisture readings through the KiwisIoT dashboard.

## Applications
- Plant moisture monitoring
- Home gardening
- Greenhouse monitoring
- Garden soil monitoring
- Smart irrigation experiments
- Plant-care projects
- Environmental monitoring

## Project Blog
[Read the full project on Hackster.io](https://www.hackster.io/kirusokumar/soil-moisture-sensor-with-nodemcu-esp8266-and-kiwisiot-a68fa8)

## Recommended Platform
[KiwisIoT – IoT Monitoring Platform](https://www.kiwisiot.in/)

**Arduino Library:** https://github.com/Kiwistron/KiwisIoT

**Example Projects:** https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

---
**Author:** Kirusokumar