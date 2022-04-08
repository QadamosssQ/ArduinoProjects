#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; 
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int on =8;
int off = 7;
int led =9;


void setup() {


lcd.begin(16, 2);
pinMode(on, INPUT_PULLUP);
pinMode(off, INPUT_PULLUP);
pinMode(led, OUTPUT);


for(int i = 1; i<4; i++ ){




lcd.setCursor(4,0);
lcd.print("DEFUSING");
   lcd.setCursor(0,1);
 for(int i = 1; i<18; i++ ){
  delay(100);
  lcd.print("=");

  
 }
 lcd.clear();
lcd.setCursor(0,0);

}


}
void loop() {
  
if(digitalRead(on) == LOW){
digitalWrite(led, HIGH);
lcd.setCursor(0,0);
lcd.noAutoscroll();
lcd.print("ON ");

}else if(digitalRead(off) == LOW){
  digitalWrite(led, LOW);
lcd.setCursor(0,0);
lcd.noAutoscroll();
lcd.print("OFF");
 
}


}
