#pragma config(Sensor, dgtl7,  touch,               sensorTouch)
#pragma config(Sensor, dgtl8,  sonar,               sensorSONAR_cm)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
 
task main()
{
 while(true)
 {
 clearLCDLine(0);
 clearLCDLine(1);
 
 displayLCDPos(0, 0);
 displayNextLCDString("Sonar: ");
 displayLCDPos(0, 7);
 displayNextLCDNumber(SensorValue[sonar], 4);
 displayLCDPos(0, 12);
 displayNextLCDString("cm");
 
 displayLCDPos(1, 0);
 if(SensorValue[touch] == 1)
 {
 displayNextLCDString("Bumper: Pressed");
 }
 else
 {
 displayNextLCDString("Bumper: Released");
 }
 
 wait1Msec(200);
 
 }
}


/+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++/
//Sample Basic LCD Display

task main()
{
 displayLCDCenteredString(0, "Hello World!");
 wait1Msec(10000);
}
