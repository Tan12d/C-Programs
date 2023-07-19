#include <stdio.h>

#include <math.h>



double next_approx(double,double,double);

double function_fx(double,double,double);

double derivative(double,double);



void main()

{

	double c,n,x0,x1;



	printf("Enter the constant:");

	scanf("%lf",&c);



	printf("Enter the nth root:");

	scanf("%lf",&n);



	x0=c/2;



	x1=x0-(function_fx(x0,n,c)/derivative(x0,n));



	for(double i=0;i<100;i++)

	{

		printf("%.0lfth root of number %lf\n",i,x1);



		x1=next_approx(x1,n,c);

	}

}



double next_approx(double x0,double n,double c)

{

	double x1=x0-(function_fx(x0,n,c)/derivative(x0,n));



	return x1;

}



double function_fx(double x0,double n,double c)

{

	return (pow(x0,n)-c);

}



double derivative(double x0,double n)

{

	return (n*pow(x0,n-1));

}
