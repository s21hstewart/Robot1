#pragma config(Sensor, S1,     Button,         sensorEV3_Touch)
#pragma config(Motor,  motorB,          Left,          tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          Right,         tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int mode= 0;

	while(true)
	{
		mode= mode +1;

		if(SensorValue(Button) == 0)
		{
			motor[Left]=0;
			motor[Right]=0;
		}

		else (mode < 4);
		{
			motor[Left]=100;
			motor[Right]=100;
			wait10Msec(100);
			SensorValue[ = 1]





		}
	}
}