
#include <Keypad.h> //biblioteka od klawiatury
 
const byte ROWS = 4; // ile wierszy
const byte COLS = 4; //ile kolumn
 
byte rowPins[ROWS] = {2, 3, 4, 5}; //piny wierszy
byte colPins[COLS] = {7, 8, 9, 10}; //piny kolum
 
char keys[ROWS][COLS] = { //mapowanie klawiatury
 {'A','3','2','1'},
  {'B','6','5','4'},
  {'C','9','8','7'},
  {'D','#','0','*'},










  
};
 
Keypad klawiatura = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS ); //inicjalizacja klawiatury
 
void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char klawisz = klawiatura.getKey();
  
  if (klawisz){
    Serial.println(klawisz);
  }
}
