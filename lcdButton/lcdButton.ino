#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; 
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int on =8;
int off = 7;
int led =9;


void setup() {


lcd.begin(16, 2);
pinMode(start, INPUT_PULLUP);
pinMode(off, INPUT_PULLUP);
pinMode(led, OUTPUT);




}



void loop() {
  
if(digitalRead(start) == LOW){
// digitalWrite(led, HIGH);
// lcd.setCursor(0,0);
// lcd.noAutoscroll();
// lcd.print("ON ");

for(int i = 1; i<4; i++ ){




lcd.setCursor(5,0);
lcd.print("LOADING");
   lcd.setCursor(0,1);
 for(int i = 1; i<10; i-- ){
  delay(100);
  lcd.print(i);

  
 }
 lcd.clear();
lcd.setCursor(0,0);










}else if(digitalRead(off) == LOW){
  digitalWrite(led, LOW);
lcd.setCursor(0,0);
lcd.noAutoscroll();
lcd.print("OFF");
 
}


}
