# 1 "C:\\Users\\J\\repository\\arduino-circus-pi\\playground\\playground.ino"
/*

 * MotorKnob

 *

 * A stepper motor follows the turns of a potentiometer

 * (or other sensor) on analog input 0.

 *

 * http://www.arduino.cc/en/Reference/Stepper

 * This example code is in the public domain.

 */
# 11 "C:\\Users\\J\\repository\\arduino-circus-pi\\playground\\playground.ino"
# 12 "C:\\Users\\J\\repository\\arduino-circus-pi\\playground\\playground.ino" 2

// change this to the number of steps on your motor


// create an instance of the stepper class, specifying
// the number of steps of the motor and the pins it's
// attached to
Stepper stepper(100, 8, 9, 10, 11);

// the previous reading from the analog input
int previous = 0;

void setup() {
  // set the speed of the motor to 30 RPMs
  stepper.setSpeed(30);
}

void loop() {
  // get the sensor value
  int val = analogRead(0);

  // move a number of steps equal to the change in the
  // sensor reading
  stepper.step(val - previous);

  // remember the previous value of the sensor
  previous = val;
}
