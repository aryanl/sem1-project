#include <Stepper.h>
int i=1;
const int stepsPerRevolution = 200;
Stepper myStepper1(stepsPerRevolution, 2, 3, 4, 5);
Stepper myStepper2(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  myStepper1.setSpeed(60);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  for(i;i<=5;i++)
  {
    myStepper1.step(stepsPerRevolution);
  }
  for(i;i<=5;i++)
  {
    myStepper2.step(-stepsPerRevolution);
  }
  for(i;i<=5;i++)
  {
    myStepper1.step(-stepsPerRevolution);
  }
  for(i;i<=5;i++)
  {
    myStepper2.step(stepsPerRevolution);
  }
}
