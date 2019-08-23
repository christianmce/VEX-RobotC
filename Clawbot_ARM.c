#pragma config(Motor,  port1,           WheelL,        tmotorVex269, openLoop)
#pragma config(Motor,  port2,           WheelR,        tmotorVex269, openLoop, reversed)
#pragma config(Motor,  port3,           ClampArm,      tmotorVex269, openLoop)
#pragma config(Motor,  port4,           ClampMotor,    tmotorVex269, openLoop)

task main()
{
while(true)

  motor[port1] = vexRT[Ch2];
  motor[port2] = vexRT[Ch3];

  if(vexRT[Btn5U] == 1) //Fowards
  {
  motor[WheelL] = -127;
  motor[WheelR] = -127;
  }
  else if(vexRT[Btn5D] == 1) //Backwards
  {
  motor[WheelL] = 127;
  motor[WheelR] = 127;
  }
  else //Every WheelL and WheelR number is reversed due to going from motor directly to a cog, that cog meshes with another and that is directly connected to the wheel
  {
  motor[WheelL] = 0;
  motor[WheelR] = 0;
  }

  //Split between Fowards/Backwards and Left/Right

  if(vexRT[Btn6U] == 1) //Left
  {
  motor[WheelL] = 127;
  motor[WheelR] = -127;
  }
  else if(vexRT[Btn6D] == 1) //Right
  {
  motor[WheelL] = -127;
  motor[WheelR] = 127;
  }
  else
  {
  motor[WheelL] = 0;
  motor[WheelR] = 0;
  }

  //Split between Wheels/Arm

  motor[port3] = vexRT[Ch4];

  if(vexRT[Btn7U] == 1) //Up
  {
  motor[ClampArm] = -127;
  }
  else if(vexRT[Btn7D] == 1) //Down
  {
  motor[ClampArm] = 127;
  }
  else
  {
  motor[ClampArm] = 0;
  }

  //Split between Arm/Clamp

  motor[port4] = vexRT[Ch5];

  if(vexRT[Btn8U] == 1) //Clamp
  {
  motor[ClampMotor] = 127;
  }
  else if(vexRT[Btn8D] == 1) //Unclamp
  {
  motor[ClampMotor] = -127;
  }
  else
  {
  motor[ClampMotor] = 0;
  }
}
