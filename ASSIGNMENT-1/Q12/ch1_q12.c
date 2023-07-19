#include <stdio.h>



void main()

{

	double speed,distance,time,acc,new_speed;

	

	printf("Enter the speed in km/hr:");

	scanf("%lf",&speed);



	printf("Enter the distance in meters:");

	scanf("%lf",&distance);



	new_speed= (speed *5)/18;



       acc=(new_speed*new_speed)/(2*distance);



       time= new_speed/acc;

      

	printf("Time= %f",time);	



	printf("\nAcceleration= %f\n",acc);



}