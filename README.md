# ESP8266-IoT-button
👇💬 An Arduino ESP8266/nodeMCU based Telegram bot for sending messages with a push of a (real life panic-)button!

## How to use
### Step 1
Create a new telegram bot ([💬 the Botfather](https://telegram.me/BotFather))

### Step 2
Provide the bot token and the conversation ID ([💬 the ID Bot](https://t.me/myidbot)) in the code and load it onto a [nodeMCU](https://www.aliexpress.com/item/V2-4M-4FLASH-NodeMcu-Lua-WIFI-Networking-development-board-Based-ESP8266/32647690484.html) or any ESP8266/Wifi 101 compatible board

### Step 3
Install said nodeMCU into an [emergency stop button](https://www.aliexpress.com/item/1-NO-1-NC-10A-660V-Emergency-Stop-Push-Button-Red-Mushroom-Switch-Station-EDF88/32976080135.html) from which the safety mechanism has been removed that'd keep it pressed

### Step 4
Connect the button to a power source through USB
![step4](https://github.com/gcsecsey/ESP8266-IoT-button/blob/master/images/step1.jpg)

### Step 5
Configure WiFi
![step5](https://github.com/gcsecsey/ESP8266-IoT-button/blob/master/images/step2.png)

### Step 6
Press the Button!

### Step 7
PROFIT
![step7](https://github.com/gcsecsey/ESP8266-IoT-button/blob/master/images/step3.png)

## Dependencies
 - [Universal-Arduino-Telegram-Bot](https://github.com/witnessmenow/Universal-Arduino-Telegram-Bot)
 - [ESP8266WebServer](https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266WebServer)
 - [WiFiManager](https://github.com/tzapu/WiFiManager)
