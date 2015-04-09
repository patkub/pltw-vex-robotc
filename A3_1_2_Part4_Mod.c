#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
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
	setServo(servoMotor, -127);					//Set servo to -127
	wait(2);														//Wait 2 sec
	setServo(servoMotor, -63);
	wait(3);
	setServo(servoMotor, 0);
	wait(2);
	setServo(servoMotor, 63);
	wait(3);
	setServo(servoMotor, 127);
	wait(2);														//Wait at position 127 for 2 sec before returning by default to 0.
}
