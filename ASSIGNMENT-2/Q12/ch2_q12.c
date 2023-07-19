#include <stdio.h>

#include <math.h>



double speed_of_air(double);



void main()

{

	double T,a;



	printf("Enter the temperature:");

	scanf("%lf",&T);



	a=speed_of_air(T);



	printf("Speed of air(a)= %lf ft/sec\n",a);

}



double speed_of_air(double T)

{

	double a,b,c;



	a=5*T+297;

	b=a/247.0;

	c=sqrt(b);



	return c*1086.0;

}