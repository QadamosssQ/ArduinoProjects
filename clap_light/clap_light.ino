#include <stdio.h>
#include <stdlib.h>

const int button = 2;              
int light =4;             
int ledflag=0;                   

void setup() {
  pinMode(button,INPUT);         
  pinMode(light,OUTPUT);          
         
}

void loop() {
  if (digitalRead(button)==HIGH){ 
    if (ledflag==0) {             
      ledflag=1;                  
          
      digitalWrite(light,HIGH); 
      }                           
    else {                        
      ledflag=0;                  
     
      digitalWrite(light,LOW);     
    }
                     
  }                               
} 
