#pragma config(Motor,  port2,           leftMotor,     tmotorVex393, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
  Project Title:
  Team Members: Patrick Kubiak
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
		startMotor(leftMotor, -127);			//Move motor left for 0.5 sec
		wait(0.5);
		startMotor(leftMotor, 127);				//Move motor right for 0.5 sec
		wait(0.5);
	}
}
