#pragma once
#include "main.h"
/*This file is where I declare all of the functions I make in subsystemHeaders.
*/

//HELPER FUNCTION
void setRoller(int power);

//DRIVER CONTROL FUNCTION
void  setRollerMotors();
void resetRollerEncoders();
void rollerAuton(int units, int voltage);