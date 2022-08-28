#include "DHT.h"
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define DHTPIN 8  
#define DHTTYPE DHT11 
#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 

DHT dht(DHTPIN, DHTTYPE);


Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);



void setup() {
   dht.begin();
  Serial.begin(115200);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }

}





void loop() {
  int analogValue = analogRead(A0);
  
float h = dht.readHumidity();
float t = dht.readTemperature();
if (isnan(t) || isnan(h)) {
  Serial.println("Failed to read from DHT");
  }
else {

  
 
  Serial.println("Temp=");
  Serial.println(t);
  Serial.println("Humidity=");
  Serial.println(h);
  Serial.println(" ");
  
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 10);
  display.print("Temp= ");
  display.println(t);
  display.print("Hum = ");
  display.println(h);
  
  
  
 if (analogValue < 10) {
    display.println("Light: Dark");
  } else if (analogValue < 500) {
    display.print("Light: Light");
  }

  display.display(); 
  delay(1000);
 }

  


 


}
