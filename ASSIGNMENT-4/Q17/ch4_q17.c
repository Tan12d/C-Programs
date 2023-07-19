#include <stdio.h>

#include <math.h>



void trap(double,double,int,double func(double));

double func1(double);

double func2(double);



void main()

{

	int n;



	printf("For function: x^2sin(x):\n\n");

	for(n=2;n<=128;n*=2)

	{

		printf("n= %d\n",n);

		trap(0,3.14159,n,func1);

	}



	printf("\n");



	printf("For function: sqrt(4-x^2):\n\n");

	for(n=2;n<=128;n*=2)

	{

		printf("n= %d\n",n);

		trap(-2,2,n,func2);			

	}

}



void trap(double a,double b,int n,double func(double))

{

	double h=0,temp=a,f=0,T=0;



	h=(b-a)/n;



	for(int i=1;i<n;i++)

	{

		temp+=h;

		f+=func(temp);

	}



	T= (h/2.0)*(func(a)+func(b)+(2*f));



	printf("T= %lf\n",T);

}



double func1(double v)

{

	return (pow(v,2)*sin(v));

}



double func2(double v)

{

	return (sqrt(4-pow(v,2)));

}
