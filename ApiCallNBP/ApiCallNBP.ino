#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

const char* ssid = "AdamossWIFI";
const char* password = "00951221202611";
const char* nbpApiURL = "http://api.nbp.pl/api/exchangerates/rates/a/usd";

void setup() {
  Serial.begin(115200);

  lcd.init();
  lcd.backlight();

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("Connected to WiFi!");
  lcd.setCursor(0,0);
  lcd.print("Kurs euro do pln: ");
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Kurs euro do pln: ");

  WiFiClient wifi;
  HTTPClient http;

  http.begin(wifi, nbpApiURL);

  int httpResponseCode = http.GET();
  if (httpResponseCode == 200) {
    String response = http.getString();

    DynamicJsonDocument jsonDoc(1024);
    deserializeJson(jsonDoc, response);

    float exchangeRate = jsonDoc["rates"][0]["mid"];

    lcd.setCursor(4,1);
    lcd.print(exchangeRate);

  } else {
    Serial.print("HTTP Error: ");
    Serial.println(httpResponseCode);
  }

  http.end();
  delay(5000); 
  lcd.clear();
}
