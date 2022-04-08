int button =2;
int red =10;
int green =9;
int blue =8;



void setup() {
  
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(button, INPUT_PULLUP);

}

void loop() {
  

//digitalWrite(red, HIGH);
//delay(1000);
//digitalWrite(red, LOW);
//digitalWrite(green, HIGH);
//delay(1000);
//digitalWrite(green, LOW);
//digitalWrite(blue, HIGH);
//delay(1000);
//digitalWrite(blue, LOW);

if(digitalRead(button) == LOW){
digitalWrite(blue, HIGH);
delay(1000);
digitalWrite(blue, LOW);
}

}


int buttonCol =2;
int buttonRed =3;
int buttonGreen =4;
int buttonBlue =5;

int red =10;
int green =9;
int blue =8;



void setup() {
  
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(buttonCol, INPUT_PULLUP);
pinMode(buttonRed, INPUT_PULLUP);
pinMode(buttonGreen, INPUT_PULLUP);
pinMode(buttonBlue, INPUT_PULLUP);

}


void loop() {
  



if(digitalRead(buttonCol) == LOW){
  
digitalWrite(red, HIGH);
delay(1000);
digitalWrite(red, LOW);
digitalWrite(green, HIGH);
delay(1000);
digitalWrite(green, LOW);
digitalWrite(blue, HIGH);
delay(1000);
digitalWrite(blue, LOW);

}

if(digitalRead(buttonRed) == LOW){
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
}
if(digitalRead(buttonGreen) == LOW){
  digitalWrite(green, HIGH);
  delay(1000);
  digitalWrite(green, LOW);
}
if(digitalRead(buttonBlue) == LOW){
  digitalWrite(blue, HIGH);
  delay(1000);
  digitalWrite(blue, LOW);
}




















//migotanie
//digitalWrite(red, HIGH);
//delay(1000);
//digitalWrite(red, LOW);
//digitalWrite(green, HIGH);
//delay(1000);
//digitalWrite(green, LOW);
//digitalWrite(blue, HIGH);
//delay(1000);
//digitalWrite(blue, LOW);


}
