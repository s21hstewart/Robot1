#pragma config(Motor,  motorB,          left,          tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          right,         tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//


task main()
{
	int speed = 60;
	int speed2 = 100;
	while(speed <= 800)
	{
		motor[left] = speed;
		motor[right] = speed2;
		wait10Msec(10000);

		speed = speed + 5;
		speed2 = speed2;

}

}
