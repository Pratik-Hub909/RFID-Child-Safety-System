#include <esp_now.h>
#include <WiFi.h>

typedef struct struct_message {
  float latitude;
  float longitude;
} struct_message;

struct_message incomingData;

void onReceive(const uint8_t *mac, const uint8_t *incomingDataRaw, int len) {
  memcpy(&incomingData, incomingDataRaw, sizeof(incomingData));

  Serial.print("Lat: ");
  Serial.println(incomingData.latitude);

  Serial.print("Lng: ");
  Serial.println(incomingData.longitude);

  // TODO: Send to Firebase
}

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);

  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  esp_now_register_recv_cb(onReceive);
}

void loop() {}