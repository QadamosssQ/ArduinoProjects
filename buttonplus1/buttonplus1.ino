int buttonPin = 8;
int ledPin = 7;
int ledState = LOW;
boolean buttonState = LOW;

 int pressed=0;



void setup() {
 pinMode(ledPin, OUTPUT);
 pinMode(buttonPin, INPUT);
}

void loop() {
 if (digitalRead(buttonPin)==HIGH && buttonState ==LOW)
 {
  pressed++;
  buttonState = HIGH;
 }
 else if(digitalRead(buttonPin) == LOW && buttonState == HIGH)
 {
  buttonState = LOW;
 }
 if(pressed ==10)
 {
 digitalWrite(ledPin,HIGH);
 }
 
 }
