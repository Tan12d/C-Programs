#include <stdio.h>

#include <math.h>

#define e 2.71828



void exponent(double *f,int *x);



void main()

{

	int x=0;

	double f=1.0;



	exponent(&f,&x);



	printf("f= %lf\n",f);

	printf("x= %d",x);

}



void exponent(double *f,int *x)

{

	int i=1;

	double h=0;



	do

	{

		*f=pow(((2 * *x + 1)/(2 * *x - 1)),*x);

		h=*f;

		*x=i;

		

	}while(e-h>=0.000001);



}
