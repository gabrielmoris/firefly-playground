#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>

BLEAdvertising* pAdvertising = nullptr;

void setup() {
  BLEDevice::init("ESP32-FireFly-Advertising");
  BLEServer* pServer = BLEDevice::createServer();
  pAdvertising = pServer->getAdvertising();

  BLEAdvertisementData advertisementData;
  advertisementData.setName("ESP32-FireFly-Advertising");
  pAdvertising->setAdvertisementData(advertisementData);
}

int counter = 0;

void loop() {
  BLEAdvertisementData scanResponseData;
  // 2 bytes manufaturer ID (0x02e5 = Espressif), the rest custom
  char scanResponse[4] = { 0xe5, 0x02, (counter % 2) == 0 ? 0x01 : 0x02, 0x00 };
  scanResponseData.setManufacturerData(scanResponse);

  pAdvertising->stop();
  pAdvertising->setScanResponseData(scanResponseData);
  pAdvertising->start();

  counter += 1;

  delay(5000);
}
