#include "vex.h"

void tankDrive(){
  leftStack.setVelocity(Controller1.Axis2.position(), percent);
  leftMotor.setVelocity(Controller1.Axis2.position(), percent);
  rightStack.setVelocity(Controller1.Axis3.position(), percent);
  rightMotor.setVelocity(Controller1.Axis3.position(), percent);
  leftStack.spin(forward);
  leftMotor.spin(forward);
  rightStack.spin(reverse);
  rightMotor.spin(reverse);
}