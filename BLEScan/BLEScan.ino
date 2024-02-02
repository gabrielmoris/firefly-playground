#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEScan.h>
#include <BLEAdvertisedDevice.h>

BLEScan* pBLEScan = nullptr;

class MyAdvertisedDeviceCallbacks : public BLEAdvertisedDeviceCallbacks {
  void onResult(BLEAdvertisedDevice advertisedDevice) {
    Serial.print("Advertised Device - Address:");
    Serial.print(advertisedDevice.getAddress().toString().c_str());
    Serial.print(" RSSI:");
    Serial.print(advertisedDevice.getRSSI());
    Serial.print(" ManufacturerData:");
    std::string data = advertisedDevice.getManufacturerData();
    for (int i = 0; i < data.length(); i += 1) {
      Serial.printf("%02x", data[i]);
    }
    Serial.print(" Name:");
    Serial.print(advertisedDevice.getName().c_str());
    Serial.println();
  }
};

void setup() {
  Serial.begin(115200);

  BLEDevice::init("ESP32-FireFly-Scan");
  pBLEScan = BLEDevice::getScan();
  pBLEScan->setAdvertisedDeviceCallbacks(new MyAdvertisedDeviceCallbacks());
  pBLEScan->setActiveScan(true);
  pBLEScan->setInterval(100);  // intervalMSecs
  pBLEScan->setWindow(99);     // windowMSecs
}

void loop() {
  Serial.println("Scan Started");
  BLEScanResults foundDevices = pBLEScan->start(5, false);  // duration [seconds], is_continue
  Serial.print("Devices Found: ");
  Serial.println(foundDevices.getCount());
  pBLEScan->clearResults();
  Serial.println("Scan Stopped");
  delay(2000);
}
