#include <stdio.h>

#include <math.h>



double speeds_ratio(double,double);



void main()

{

	double M,m,s_r;



	printf("Enter the Maximum speed: ");

	scanf("%lf",&M);



	printf("Enter the Minimum speed: ");

	scanf("%lf",&m);



	s_r=speeds_ratio(M,m);



	printf("The ratio between successive speeds of a six-speed gearbox with maximum speed %lf rpm and minimum speed %lf rpm is %lf.\n",M,m,s_r);

}



double speeds_ratio(double M,double m)

{

	double r1,r2;



	r1=M/m;



	r2=pow(r1,(1.0/5.0));



	return r2;

}