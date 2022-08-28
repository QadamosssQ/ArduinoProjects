



int czujka =2;
int led =13;
int lastState = LOW;
int counter = 0;


void setup() {
  pinMode(czujka, INPUT_PULLUP);
  pinMode(led, OUTPUT);
 
  Serial.begin(9600);
}

void loop() {
  int state = digitalRead(czujka);
  if(state == HIGH){
    digitalWrite(led, HIGH);
    if (lastState != state) {
      counter++;
     delay(10);
      Serial.println(String(counter));
      lastState = HIGH;
    }
  }
  if (state == LOW) {
    digitalWrite(led, LOW);
    if (lastState != state) {
      lastState = LOW;
    }
  }
}
