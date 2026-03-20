#include <TinyGPS++.h>
#include <HardwareSerial.h>

TinyGPSPlus gps;
HardwareSerial gpsSerial(1);

void setup() {
  Serial.begin(115200);
  gpsSerial.begin(9600, SERIAL_8N1, 16, 17);
}

void loop() {
  while (gpsSerial.available()) {
    gps.encode(gpsSerial.read());

    if (gps.location.isUpdated()) {
      float lat = gps.location.lat();
      float lng = gps.location.lng();

      Serial.print("Latitude: ");
      Serial.println(lat, 6);

      Serial.print("Longitude: ");
      Serial.println(lng, 6);

      // TODO: Send via ESP-NOW
    }
  }
}