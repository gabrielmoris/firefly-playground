
# Idea

Create tiny artificial fireflies, which should look inspring and ideally behave at least somewhat like reality.

# ESP32 DevKit V1

For the first few test a development kit named **ESP32 DevKit V1** was used by everyone participating this project. It can be used with the Arduino IDE (< 2.0 and > 2.0).

## Documentation

- https://docs.espressif.com/projects/arduino-esp32/en/latest/

## PinOut

- https://mischianti.org/doit-esp32-dev-kit-v1-high-resolution-pinout-and-specs/

## Buy

- https://mikroshop.ch/Home.html?gruppe=10&artikel=1490
- https://de.aliexpress.com/item/1005005564949759.html

## Installation

- https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html

## Installation Arduino IDE > 2.0

To check if compilation and uploading works as expected the Blink example should be used first. There is no need to modify the Blink example (this was tested several times with several people). If the compilation already fails with the Blink example, the installation is not correct.

- Install Arduino IDE > 2.0
- Open Arduino IDE
- Tools / Board / Boards Manager ...
  - esp32 by Espressif Systems
  - Install (downloads several 100 MBytes)
- Tools / Board / ESP32 Arduino / DOIT ESP32 DEVKIT V1
- Tools / Port / **PORT**
- File / Examples / 01.Basics / Blink
- Sketch / Upload

# Directories

## h_ble_tempplotter_server (ESP32 DevKit V1)

Based on the https://RandomNerdTutorials.com/esp32-ble-server-client/ which has a BME280 which this board not have does advertise Temp and Humidity. Exchanged this with the esp32-internal-temperature.

1. install Arduino IDE >=2.x (https://www.arduino.cc/en/software)
2. Open Arduino IDE
3. File \ Preferences \ Additional boards manager URL: https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
4. Tools \ Board \ BoardManager: add <esp32 by Espressif Systems>
5. Tools \ Board \ esp32 \ DOIT ESP32 DEVKIT V1
6. Tools \ Port: select COM port
7. File \ Open: .ino file
8. Install <nRF Connect> on the mobile phone
9. start the nRF Connect and scan for the SERVICE_UUID ending with *f59 named <TempPlotterServer>

## BLE_notify (ESP32 DevKit V1)

?

## BLEAdvertising (ESP32 DevKit V1)

Continuously send out advertising packets. Advertising packets are broadcasted on a fixed frequency and are therefore visible by everyone.

## BLEScan (ESP32 DevKit V1)

Continuously listens for advertising packets. Works together with BLEAdvertising. On the Arduino Serial Monitor, every BLE devices which advertises something, is printed out.

## SimulationHtmlCanvas (Webbrowser)

Is a simulation environment for fireflies. Only a webbrowser is necessary.

## RandomBasedSimulation

Is an simulation (inspired by the previous one) where the the interaction is modelled as an increased probability to switch on the light
