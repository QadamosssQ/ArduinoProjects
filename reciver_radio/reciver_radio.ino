
#include <RH_ASK.h>
#include <SPI.h>
 
// Arduino                     Receiver
//  GND--------------------------GND
//  D11--------------------------Data
//  5V---------------------------VCC
 
RH_ASK driver(2000, 11, 12);
 
void setup() {
  Serial.begin(9600);
  if (!driver.init()) Serial.println("init failed");
}
 
void loop() {
  uint8_t buf[RH_ASK_MAX_MESSAGE_LEN];
  uint8_t buflen = sizeof(buf);
 
  if (driver.recv(buf, &buflen)) {
    driver.printBuffer("Received:", buf, buflen);

    String rcv;

    for ( int i =0;i<buflen; i++){
        rcv+=(char)buf[i];  
    }


  }
}

