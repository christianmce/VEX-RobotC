#pragma config(Motor,  port1,           frontRight,    tmotorVex393, openLoop)
#pragma config(Motor,  port2,           frontLeft,     tmotorVex393, openLoop)
#pragma config(Motor,  port3,           backRight,     tmotorVex393, openLoop)
#pragma config(Motor,  port4,           backLeft,      tmotorVex393, openLoop)
#pragma config(Motor,  port5,           liftRight,    tmotorVex269, openLoop)
#pragma config(Motor,  port6,           liftLeft,     tmotorVex269, openLoop)

#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(15)
#pragma userControlDuration(105)

#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!

/////////////////////////////////////////////////////////////////////////////////////////
//
//                          Pre-Autonomous Functions
//
// You may want to perform some actions before the competition starts. Do them in the
// following function.
//
/////////////////////////////////////////////////////////////////////////////////////////

void pre_auton()
{
  // Set bStopTasksBetweenModes to false if you want to keep user created tasks running between
  // Autonomous and Tele-Op modes. You will need to manage all user created tasks if set to false.
  bStopTasksBetweenModes = true;

	// All activities that occur before the competition starts
	// Example: clearing encoders, setting servo positions, ...
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 Autonomous Task
//
// This task is used to control your robot during the autonomous phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task autonomous()
{
  // .....................................................................................
  // Insert user code here.
  // .....................................................................................

	AutonomousCodePlaceholderForTesting();  // Remove this function call once you have "real" code.
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 User Control Task
//
// This task is used to control your robot during the user control phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task usercontrol()
{

	while(1 == 1) {

/* Drivetrain */

//Right side of the robot is controlled by the right joystick, Y-axis
motor[frontRight]	= vexRT[Ch2];
motor[backRight] 	= vexRT[Ch2];

//Left side of the robot is controlled by the left joystick, Y-axis
motor[frontLeft]   = vexRT[Ch3];
motor[backLeft]    = vexRT[Ch3];

    }
}
