int recived= 0;

void setup(){

  Serial.begin(9600);
}

void loop(){
  
  recived=Serial.read();
  Serial.println(recived);
  delay(10);
}
