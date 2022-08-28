#include "DS3231.h" // Download this library from the link given below
DS3231  rtc(A4, A5); //Define SDA and SCL pin here
void setup()
{
  Serial.begin(115200); // Set baud rate for communication
  rtc.begin(); // Initiate RTC module
  
 //Uncomment the bellow code for setting day, date and time
  //rtc.setDay(MONDAY);    
  //rtc.setTime(13,2,2);     
  //rtc.setDate(2,5,2019);
}
void loop() { 
 
 Serial.print("Time:  ");
 Serial.print(rtc.getTimeStr()); // Use getTimeStr to get time from the RTC
 Serial.print("Date: ");
 Serial.print(rtc.getDateStr()); // Use getDatwStr to get date from the sensor
 delay(1000); 
}
