#pragma config(Sensor, S3,     Fbat,           sensorEV3_Ultrasonic)
#pragma config(Sensor, S4,     Rbat,           sensorEV3_Ultrasonic)
#pragma config(Motor,  motorB,          left,          tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          right,         tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true)
	{
		if(SensorValue(Rbat) <= 6)
		{
			motor[left]=47;
			motor[right]=50;
			wait1Msec(1000);
			{
				(SensorValue(Rbat) >= 7);
				{
					motor[left]=50;
					motor[right]=47;
					wait10Msec(.2);
				}
			}
		}
	}
}
