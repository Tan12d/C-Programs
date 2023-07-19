#include <stdio.h>

#define Initial_year 1990



double population(int);



void main()

{

	double p;

	int Final_year,f;



	printf("Enter a year after %d ",Initial_year);

	scanf("%d",&Final_year);



	f=Final_year;



	Final_year-=Initial_year;



	p=population(Final_year);



	printf("Predicted Gotham City Population for %d(in thousands): %lf\n",f,p);

}



double population(int f)

{

	return 52.966+(2.184*f);

}