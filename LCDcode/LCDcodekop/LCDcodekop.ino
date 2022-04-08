#include <LiquidCrystal.h> //dołączam bibliotekę
int button =2;



const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; //stałe -nimery pinów
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); //tworzę obiekt klasy LC o nazwie lcd
void setup() {
  
pinMode(button, INPUT_PULLUP);


  
  lcd.begin(16, 2); //inicjalizacja wyświetlacza ile kolumn i wierszy (16, 2)




  
//  lcd.home(); //kursor na 0,0
//  lcd.print("Siema tu SI"); //wywołanie
//  lcd.blink(); //kursor - kwadrat
//  lcd.cursor(); //kursor mała kreska
// lcd.autoscroll(); //przewijanie automatyczne tekstu
//no dopisujemy gdy nie np. noscroll; noblink
// lcd.clear(); czyści


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
lcd.print("Masz: 0zl");




}

//------------------------------------






void loop() {




 
//lcd.clear();
//lcd.print("Hello World");


 

}
