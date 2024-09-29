#include <Stepper.h>

//Set how many steps it takes to make a full revolution
//Divide the degrees per step by 360 to get the steps
const int stepsPerRevolution = 2048;

//Use pin 8-11 to IN1-IN4

Stepper stepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {

  //Set the RPM of the stepper motor
  stepper.setSpeed(5);

}

void loop() {

  stepper.step(stepsPerRevolution);
  delay(500);

  stepper.step(-stepsPerRevolution);
  delay(500);

}
