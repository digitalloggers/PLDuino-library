#include <PLDuino.h>
#define FLASH_ESP_BAUD 115200

void setup() {
  PLDuino::init();
  PLDuino::enableESP();
  Serial2.begin(FLASH_ESP_BAUD);
  Serial.begin(FLASH_ESP_BAUD);
}

void loop() {
  if (Serial2.available())
    Serial.write(Serial2.read());
  if (Serial.available())
    Serial2.write(Serial.read());
}
