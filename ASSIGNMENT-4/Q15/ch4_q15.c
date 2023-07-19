#include <stdio.h>

#include <math.h>



void main()

{

	double sum=0;



	double k=1.0;

	

	for(int i=0;i<50;i++)

	{

		sum+=(pow(-1,i)*(1/k));

	        k+=2.0;	

	}



	sum= sum*4.0;



	printf("Pi= %lf\n",sum);

}

