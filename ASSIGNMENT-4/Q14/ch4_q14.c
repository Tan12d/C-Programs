#include <stdio.h>

#include <math.h>

#define C 0.5000738

#define H 5.272



void main()

{

	double r,amount,y;



	printf("Enter the amount of Cobalt isotope:");

	scanf("%lf",&amount);



	printf("Years             Amount Left\n");



	for(int i=1;i<=5;i++)

	{

		r=amount*(pow(C,(i/H)));

		printf("%3d%25lf\n",i,r);

	}		



}
