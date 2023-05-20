

void setup(){

  Serial.begin(9600);
  delay(3000);
  Serial.write(0000);
  Serial.write(0000);
  delay(5000);
}

void loop(){



    for( int val=0; val<=9999; val++){

      Serial.write(val);
      delay(10);
   
    }




}
