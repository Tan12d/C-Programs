#include <stdio.h>



double celsius(double);

void fahrenheit(double);



void main()

{

	double depth,cel;



	printf("Enter the depth in kilometers:");

	scanf("%lf",&depth);



	cel=celsius(depth);



	printf("Celsius= %lf\n",cel);



	fahrenheit(cel);

}



double celsius(double d)

{

	return 10*d+20;

}



void fahrenheit(double c)

{

	double fahr= 1.8*c+32;



	printf("Fahrenheit= %lf\n",fahr);

}



