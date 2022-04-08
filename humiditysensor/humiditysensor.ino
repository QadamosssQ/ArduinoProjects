
#include "DHT.h"
#define DHT11_PIN 2
DHT dht;
 
void setup()
{
  Serial.begin(9600);
  dht.setup(DHT11_PIN);
}
 
void loop()
{
  //Pobranie informacji o wilgotnosci
  int wilgotnosc = dht.getHumidity();
  Serial.print(wilgotnosc);
  Serial.print("%RH | ");
  
  //Pobranie informacji o temperaturze
  int temperatura = dht.getTemperature();
  Serial.print(temperatura);
  Serial.println("*C");
 
  delay(1000); //Odczekanie wymaganego czasu
}
