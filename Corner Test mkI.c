#pragma config(Sensor, S1,     Lbat,           sensorEV3_Ultrasonic)
#pragma config(Sensor, S3,     Fbat,           sensorEV3_Ultrasonic)
#pragma config(Motor,  motorB,          Left,          tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          Right,         tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

	while(true)

	{
		if(SensorValue(Fbat) <= 7)
		{
			motor[Left]=-65;
			motor[Right]=-45;
			wait10Msec(100);
		}

			else(SensorValue(Fbat) >7)
			{
				motor[Left]= 0;
				motor[Right]= 0;

			}
		}
	}
