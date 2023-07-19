#include <stdio.h>

#include <limits.h>



void root(double *LG,double *NG,double *N);



void main()

{

	double LG=1.0,NG=INT_MAX,t;



	double N;



	printf("Enter the number whose square root you want to find:");

	scanf("%lf",&N);

	

	do

	{

	        t=NG;

		root(&NG,&LG,&N);

	

	}while((t-NG)>0.005);

	

	printf("root= %lf",NG);

}



void root(double *NG,double *LG,double *N)

{

	

	*NG= 0.5 * (*LG + *N / *LG);

	*LG=*NG;

}
