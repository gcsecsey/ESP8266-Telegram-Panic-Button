/*******************************************************************
*  An example of bot that echos back any messages received         *
*                                                                  *
*  written by Giacarlo Bacchio (Gianbacchio on Github)             *
*  adapted by Brian Lough                                          *
*******************************************************************/
#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>
#include <DNSServer.h>            //Local DNS Server used for redirecting all requests to the configuration portal
#include <ESP8266WebServer.h>     //Local WebServer used to serve the configuration portal
#include <WiFiManager.h>          //https://github.com/tzapu/WiFiManager WiFi Configuration Magic

WiFiManager wifiManager;

// Initialize Telegram BOT
#define BOTtoken ""  // your Bot Token (Get from Botfather)
#define chat_id ""

const int buttonPin = 5;
int buttonState = 0;

WiFiClientSecure client;
UniversalTelegramBot bot(BOTtoken, client);

int Bot_mtbs = 2000; //mean time between scan messages
long Bot_lasttime;   //last time messages' scan has been done

void setup() {
//  Serial.begin(115200);
//
//  // Set WiFi to station mode and disconnect from an AP if it was Previously
//  // connected
//  WiFi.mode(WIFI_STA);
//  WiFi.disconnect();
//  delay(100);
//
//  // Attempt to connect to Wifi network:
//  Serial.print("Connecting Wifi: ");
//  Serial.println(ssid);
//  WiFi.begin(ssid, password);
//
//  while (WiFi.status() != WL_CONNECTED) {
//    Serial.print(".");
//    delay(500);
//  }
//
//  Serial.println("");
//  Serial.println("WiFi connected");
//  Serial.print("IP address: ");
//  Serial.println(WiFi.localIP());

  //first parameter is name of access point, second is the password
  wifiManager.autoConnect("NodeMCU autoconnect");
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH && millis() > Bot_lasttime + Bot_mtbs)  {
//    int numNewMessages = bot.getUpdates(bot.last_message_received + 1);
//
//    while(numNewMessages) {
//      Serial.println("got response");
//      for (int i=0; i<numNewMessages; i++) {
//        bot.sendMessage(bot.messages[i].chat_id, bot.messages[i].text, "");
//      }
//      numNewMessages = bot.getUpdates(bot.last_message_received + 1);
//    }
    
    bot.sendMessage(chat_id, "**PANIC BUTTON HAS BEEN PRESSED!!!**", "Markdown");
    
    Bot_lasttime = millis();
  } else {
    Serial.println("no read");
  }
  delay(100);
}
