
#include <ESP8266WiFi.h>
#include "DHT.h"

// API Key from ThingSpeak
String apiKey = "P1C9FDWNYZUU2BXV";
const char *ssid = "PRP108";      // Wi-Fi SSID
const char *pass = "iotlab108";   // Wi-Fi Password
const char *server = "api.thingspeak.com";

// DHT Sensor Settings
DHT dht(D5, DHT11);  // D5 is GPIO 14, DHT11 sensor type

// Initialize WiFi Client
WiFiClient client;

void setup() {
  Serial.begin(9600);
  delay(1000);
  dht.begin();
  
  // Connect to Wi-Fi
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  if (client.connect(server, 80)) {
    String postStr = apiKey;
    postStr += "&field1=";
    postStr += String(t);
    postStr += "&field2=";
    postStr += String(h);
    postStr += "\r\n\r\n";

    client.print("POST /update HTTP/1.1\n");
    client.print("Host: api.thingspeak.com\n");
    client.print("Connection: close\n");
    client.print("X-THINGSPEAKAPIKEY: " + apiKey + "\n");
    client.print("Content-Type: application/x-www-form-urlencoded\n");
    client.print("Content-Length: ");
    client.print(postStr.length());
    client.print("\n\n");
    client.print(postStr);

    Serial.print("Temperature: ");
    Serial.print(t);
    Serial.print("\tHumidity: ");
    Serial.println(h);
  }

  client.stop();
  delay(1000); // Send data every 1 second
}
