//#define blue 2
//#define green 3
//#define red 4
//#define guzj 8 
//#define guzd 9
//#define guzt 10
//
//void setup() {
//
//  
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(8, INPUT_PULLUP);
pinMode(9,INPUT_PULLUP);
pinMode(10, INPUT_PULLUP);
// };
//
//void loop() {
//
//    if (digitalRead(guzj) == LOW) { 
//    digitalWrite(red, HIGH);
//    }
//      if (digitalRead(guzd) == LOW) { 
//    digitalWrite(green, HIGH);
//    }
//      if (digitalRead(guzt) == LOW) { 
//    digitalWrite(blue, HIGH);
//    }
//    
//
//};







void setup() {
  pinMode(2, OUTPUT); //Dioda jako wyjście
  pinMode(8, INPUT_PULLUP); //Przycisk jako wejście
  digitalWrite(2, LOW); //Wyłączenie diody
}

void loop()
{
//  if (digitalRead(8) == LOW) { //Jeśli przycisk wciśnięty
//    digitalWrite(2, HIGH); //Włącz diodę
//  } else { //Jeśli warunek nie został spełniony (przycisk nie jest wciśnięty)
//    digitalWrite(2, LOW); //Wyłącz diodę
//  }
  
  if(digitalRead(8)== LOW){
  digitalWrite(2, HIGH);
  }
}
