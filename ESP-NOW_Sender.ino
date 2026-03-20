#include <esp_now.h>
#include <WiFi.h>

typedef struct struct_message {
  float latitude;
  float longitude;
} struct_message;

struct_message data;

uint8_t receiverAddress[] = {0x24, 0x6F, 0x28, 0xAA, 0xBB, 0xCC}; // CHANGE THIS

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);

  if (esp_now_init() != ESP_OK) {
    Serial.println("ESP-NOW init failed");
    return;
  }

  esp_now_peer_info_t peerInfo;
  memcpy(peerInfo.peer_addr, receiverAddress, 6);
  peerInfo.channel = 0;
  peerInfo.encrypt = false;

  esp_now_add_peer(&peerInfo);
}

void loop() {
  data.latitude = 21.1458;  // replace with GPS
  data.longitude = 79.0882;

  esp_now_send(receiverAddress, (uint8_t *)&data, sizeof(data));

  delay(2000);
}