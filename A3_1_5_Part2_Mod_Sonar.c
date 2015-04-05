#pragma config(Sensor, in1,    lightsensor,    sensorReflection)
#pragma config(Sensor, in3,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl6,  sonar,          sensorSONAR_cm)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port3,           rightMotor,    tmotorVex393, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
  Project Title:
  Team Members: Patka
  Date:
  Section:


  Task Description:


  Pseudocode:

*/

int g_closest = 999;		//default integer declaration is 0, so we must declare the closest variable with an out of bounds number
task main()
{                                     //Program begins, insert code within curly braces
	while (true)
	{
		if (SensorValue(sonar) < g_closest && SensorValue(sonar) > -1)		//disable errors
		{
			g_closest = SensorValue(sonar);
		}

		if (SensorValue(bumpSwitch) == 1)
		{
			//reset sonar to out of bounds
			g_closest = 999;
		}
	}
}