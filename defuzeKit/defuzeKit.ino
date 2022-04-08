#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; 
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int start =8;
int off = 7;
int kill =9;
const int buzzer = 10;

void setup() {
pinMode(buzzer, OUTPUT);

lcd.begin(16, 2);
pinMode(start, INPUT_PULLUP);
pinMode(off, INPUT_PULLUP);
pinMode(kill, OUTPUT);

lcd.print("Press right ");
lcd.setCursor(0,1);
lcd.print("button to defuse ");


}



void loop() {

 if(digitalRead(start) == LOW){
for(int i = 0; i<3; i++ ){
  delay(100);
  tone(buzzer, 1000);
  delay(100);
  noTone(buzzer);
}

  
 
  
lcd.clear();
lcd.setCursor(4,0);
lcd.print("Defusing");
   lcd.setCursor(0,1);
 
 for(int i = 16; i>0; i-- ){
  delay(300);
  
  lcd.print("=");

  
 }
 lcd.clear();
 lcd.setCursor(0,0);
 digitalWrite(kill, HIGH);
 delay(100);
 lcd.print("  DEFUZING HAS ");
 lcd.setCursor(0,1);
 lcd.print(" BEEN COMPLETED");
 digitalWrite(kill, HIGH);
 tone(buzzer, 1000);
  delay(100);
  noTone(buzzer);
  delay(100);
  tone(buzzer, 1000);
  delay(100);
  noTone(buzzer);
 delay(10000);
 lcd.print("END");



}}
