
int digit1 = 6; //PWM Display most left display
int digit2 = 9; //PWM Display second left
int digit3 = 10; //PWM Display second right display
int digit4 = 11; //PWM Display most right display

#define DIGIT_ON  LOW
#define DIGIT_OFF  HIGH
#define DISPLAY_BRIGHTNESS  500

boolean duiz = false;
boolean hon = false;



int segA = 2; 
int segB = 3; 
int segC = 4; 
int segD = 5; 
int segE = A0; //pin 6 is used bij display 1 for its pwm function
int segF = 7; 
int segG = 8; 
//int segPD = ; 
void setup() {                
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);

 pinMode(digit1, OUTPUT);
 pinMode(digit2, OUTPUT);
 pinMode(digit3, OUTPUT);
 pinMode(digit4, OUTPUT);
 Serial.begin(9600);
  

}
void loop(){
  int number;
  Serial.println(number);

  
  for( int i = 0; i<=9999; i++){// for loop to pick a number from.
    duiz = false;
    hon = false;
       for(int k = 0; k<50; k++){ // for loop to slow it down.
   
int figur = i;
 for(int digit = 1 ; digit < 5 ; digit++) { //for loop to place the number in the right digit

    //Turn on a digit for a short amount of time
    switch(digit) {
    case 1:
     if(figur > 999){                               
      digitalWrite(digit1, DIGIT_ON);
      lightNumber(figur / 1000);            // for example 2511 / 1000 = 2
      figur %= 1000;                        // new value of figur = 511         figur = figur %1000
      
      delayMicroseconds(DISPLAY_BRIGHTNESS); 
        if (figur < 100){
      duiz = true;
         if (figur <10){
          hon = true;
           
         }
     
      }else duiz = false; 
     }
     
      break;
   case 2:
   if(duiz == true){
    digitalWrite(digit2, DIGIT_ON);
    lightNumber(0);
     delayMicroseconds(DISPLAY_BRIGHTNESS);
     
   }if(hon == true){
    break;
   }
   
   if(figur > 99 && figur < 1000){
      digitalWrite(digit2, DIGIT_ON);
      lightNumber(figur / 100);
      figur %= 100;
      delayMicroseconds(DISPLAY_BRIGHTNESS); 
      if (figur < 10){
      hon = true;
      
      }else hon = false;
   }
    
      break;
    case 3:
    if(hon == true){
    digitalWrite(digit3, DIGIT_ON);
    lightNumber(0);
     delayMicroseconds(DISPLAY_BRIGHTNESS);
      break;
     }
   
     if(figur > 9 && figur < 100){
      digitalWrite(digit3, DIGIT_ON);
      lightNumber(figur / 10); 
      figur %= 10;
      delayMicroseconds(DISPLAY_BRIGHTNESS); 
     }
     
      break;
    case 4:
    
    
    
    
     if(figur < 10){
      digitalWrite(digit4, DIGIT_ON);
      lightNumber(figur); 
      delayMicroseconds(DISPLAY_BRIGHTNESS); 
      
      break;
     }
  
     
    }
     //Turn off all segments
    lightNumber(10); 

    //Turn off all digits
    digitalWrite(digit1, DIGIT_OFF);
    digitalWrite(digit2, DIGIT_OFF);
    digitalWrite(digit3, DIGIT_OFF);
    digitalWrite(digit4, DIGIT_OFF);
   
}
}}}




void lightNumber(int numberToDisplay) {

#define SEGMENT_ON  HIGH
#define SEGMENT_OFF LOW

  switch (numberToDisplay){

  case 0:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_OFF);
    break;

  case 1:
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_OFF);
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_OFF);
    break;

  case 2:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_OFF);
    digitalWrite(segD, SEGMENT_ON);
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_ON);
    break;

  case 3:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_ON);
    break;

  case 4:
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_OFF);
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

  case 5:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

  case 6:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

  case 7:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_OFF);
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_OFF);
    break;

  case 8:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);
    digitalWrite(segE, SEGMENT_ON);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

  case 9:
    digitalWrite(segA, SEGMENT_ON);
    digitalWrite(segB, SEGMENT_ON);
    digitalWrite(segC, SEGMENT_ON);
    digitalWrite(segD, SEGMENT_ON);
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_ON);
    digitalWrite(segG, SEGMENT_ON);
    break;

  case 10:
    digitalWrite(segA, SEGMENT_OFF);
    digitalWrite(segB, SEGMENT_OFF);
    digitalWrite(segC, SEGMENT_OFF);
    digitalWrite(segD, SEGMENT_OFF);
    digitalWrite(segE, SEGMENT_OFF);
    digitalWrite(segF, SEGMENT_OFF);
    digitalWrite(segG, SEGMENT_OFF);
    break;
  }
 
}
