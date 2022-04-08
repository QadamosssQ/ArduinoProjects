#include <LiquidCrystal_I2C.h>

int button =2;

LiquidCrystal_I2C lcd(0x27,20,4);

void setup() {
  
pinMode(button, OUTPUT);

lcd.init();  
lcd.backlight();
 lcd.setCursor(3,0);
lcd.print("hello world");

  
}
void loop() {

digitalWrite(button, HIGH);
 

}
