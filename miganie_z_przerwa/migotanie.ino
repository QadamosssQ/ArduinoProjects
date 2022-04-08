int red =10;
int green =9;
int blue =8;

void setup(){
 pinMode(red, OUTPUT);
 pinMode(green, OUTPUT);
 pinMode(blue, OUTPUT);

}


void loop() {

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
