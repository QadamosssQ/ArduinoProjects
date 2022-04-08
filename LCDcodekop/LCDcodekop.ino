#include <LiquidCrystal.h> //dołączam bibliotekę
int x = 0;
int y= 1;
int przycisk1 = 8;
int led = 7;


const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; //stałe -nimery pinów
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); //tworzę obiekt klasy LC o nazwie lcd
void setup() {
  
pinMode(przycisk1, INPUT_PULLUP);
pinMode(led, OUTPUT);


  
  lcd.begin(16, 2);






for(int i = 1; i<4; i++ ){




lcd.setCursor(5,0);
lcd.print("LOADING");
   lcd.setCursor(0,1);
 for(int i = 1; i<18; i++ ){
  delay(100);
  lcd.print("=");

  
 }
 lcd.clear();
lcd.setCursor(0,1);

}


lcd.setCursor(0,0);
lcd.print("Wplac pieniadze");
lcd.setCursor(0,1);
lcd.print("Masz: ");
lcd.setCursor(6,1);
  lcd.print(0);

lcd.print(" zl");




}








void loop() {

//if(przycisk1 == HIGH){
//  x++;
//  }
//  
//  lcd.setCursor(6,1);
//  lcd.print(x);





 if(digitalRead(przycisk1) == LOW){
  digitalWrite(led, HIGH);
  lcd.setCursor(6,1);
  lcd.print(x+y);

  }else{
    
    }

    
  
  


 

}

int miganie(){
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
    

  
}
