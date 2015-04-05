#pragma config(Sensor, dgtl1,  limit,          sensorTouch)
#pragma config(Sensor, dgtl10, limit2,         sensorTouch)
#pragma config(Motor,  port2,           leftMotor,     tmotorVex393, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
  Project Title:
  Team Members: Patka
  Date:
  Section:


  Task Description:


  Pseudocode:

*/

task main()
{                                     //Program begins, insert code within curly braces
	for (int i = 0; i < 20; i++)				//For Loop that loops 20 times
	{
		//EACH ITERATION: move motor left then right every 0.5 sec
		startMotor(leftMotor, -127);			//Move motor right until limit switch detected
		untilBump(limit);
		startMotor(leftMotor, 127);		//Move motor left for 0.5 sec
		untilBump(limit2);

	}
}