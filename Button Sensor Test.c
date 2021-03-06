#pragma config(Sensor, S1,     lbat,           sensorEV3_Ultrasonic)
#pragma config(Sensor, S3,     fbat,           sensorEV3_Ultrasonic)
#pragma config(Sensor, S4,     rbat,           sensorEV3_Ultrasonic)
#pragma config(Motor,  motorB,          left,          tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          right,         tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
while(true)
	if(SensorValue(fbat) < 8)
	{
		motor[right]=-99;
		motor[left]=-99;
		wait10Msec(10);
		motor[right]=100;
		motor[left]=10;
		wait1Msec(500);
	}
else
	motor[right]=50;
	motor[left]=50;
	wait1Msec(100);


}
