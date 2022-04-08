 #include <LiquidCrystal_I2C.h>
#include <Keypad.h> 
int buzzer =6;
 
LiquidCrystal_I2C lcd(0x27,20,4);
const byte ROWS = 4; 
const byte COLS = 4; 
 
byte rowPins[ROWS] = {2, 3, 4, 5}; 
byte colPins[COLS] = {7, 8, 9, 10}; 


char keys[ROWS][COLS] = { 
 {'*','3','2','1'},
  {'B','6','5','4'},
  {'=','9','8','7'},
  {'-','#','0','A'},


  
};

byte helo[] = {
  B00000,
  B01000,
  B10101,
  B01010,
  B01100,
  B01000,
  B10100,
  B10100
};

byte heloo[] = {
  B00000,
  B01000,
  B10100,
  B01000,
  B01100,
  B01010,
  B10101,
  B10100
};

int hello(){
  lcd.print("H");
  delay(300);
  lcd.print("E");
  delay(300);
  lcd.print("L");
  delay(300);
  lcd.print("L");
  delay(300);
  lcd.print("O");
  delay(300);
  lcd.print(",");
  delay(300);
  lcd.print(" ");
  delay(300);
  lcd.print("W");
  delay(300);
  lcd.print("O");
  delay(300);
  lcd.print("R");
  delay(300);
  lcd.print("L");
  delay(300);
  lcd.print("D");
  delay(300);
  lcd.print("!");
  delay(300);
}




 
Keypad klawiatura = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS ); 
 
void setup(){
  pinMode(buzzer, OUTPUT);
  
  
  lcd.init();  
lcd.backlight();
}
  
void loop(){
 char klawisz = klawiatura.getKey();
  
  if (klawisz){
    lcd.print(klawisz);
  }

  if(klawisz=='*'){
    lcd.clear();
    delay(100);
  }

if(klawisz=='-'){
  lcd.setCursor(0,16);
  lcd.print("-");
  lcd.setCursor(0,1);
    
  }
  if(klawisz=='='){
  lcd.setCursor(0,0);
    
  }
  if(klawisz=='A'){
  lcd.clear();
  lcd.setCursor(0,0);
  hello();
  lcd.createChar(0, helo);
  lcd.createChar(1, heloo);
  lcd.home();
  lcd.setCursor(15,0);

  for(int i=0; i>10;i++){
    lcd.setCursor(15,0);
    lcd.write(0);
    delay(100);
    lcd.setCursor(15,0);
    lcd.write(1);
    }



  
  
  }
  
 
  }
  
