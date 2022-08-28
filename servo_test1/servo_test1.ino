#include <Stepper.h>




Stepper myStepper = Stepper(2038, 8, 10, 9, 11);

void setup() {
  
   myStepper.setSpeed(15);
  myStepper.step(1000);
  delay(1000);
}

void loop() {
 
}
