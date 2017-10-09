#pragma config(Sensor, S1,     Button,         sensorEV3_Touch)
#pragma config(Motor,  motorB,          Left,          tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          Right,         tmotorEV3_Large, PIDControl, encoder)

task main()
{
	int speed = 1;
	while(true)
	{
		if(SensorValue(Button) == 1)
		{
			motor[Left]= speed;
			motor[Right]= speed;
			speed= speed + 1;
			wait1Msec(50);

			if(speed >= 100)
			{
				speed= 100;


			}
		}
	}
}
