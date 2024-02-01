# Documentation 
## Links

https://docs.espressif.com/projects/arduino-esp32/en/latest/boards/boards.html#espressif

https://mikroshop.ch/Home.html?gruppe=10&artikel=1490

https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/

## Folder structure
FIREFLY-PLAYGROUND
├───BLE_notify
├───h_ble_tempplotter_server
└───SimulationHtmlCanvas

### h_ble_tempplotter_server
Based on the https://RandomNerdTutorials.com/esp32-ble-server-client/ which has a BME280 which this board not have does advertise Temp and Humidity. Exchanged this with the esp32-internal-temperature.

## Run the code first time on Arduino IDE (h_ble_tempplotter_server)
1. install Arduino IDE >=2.x (https://www.arduino.cc/en/software)
2. Open Arduino IDE
3. File \ Preferences \ Additional boards manager URL: https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
4. Tools \ Board \ BoardManager: add <esp32 by Espressif Systems>
5. Tools \ Board \ esp32 \ DOIT ESP32 DEVKIT V1
6. Tools \ Port: select COM port
7. File \ Open: .ino file
8. Install <nRF Connect> on the mobile phone
9. start the nRF Connect and scan for the SERVICE_UUID ending with *f59 named <TempPlotterServer>