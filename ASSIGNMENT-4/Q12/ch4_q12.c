#include <stdio.h>

#include <stdlib.h>

#define base_year 2005



double fast_food_billions(int t);



void main()

{

	int year;

	double f;



	printf("Enter the year:");

	scanf("%d",&year);



	printf("\n\nYear \t\t Population(billions)\n\n");

	

	if(year<2005)

	{

		exit(0);

	}



	else

	{

		for(int i=base_year+1;i<=year;i++)

		{

			f=fast_food_billions(i-base_year);

			printf("%2d%25.1lfbillions\n",i,f);

		}

	}

}



double fast_food_billions(int i)

{

	return 33.2+ (16.8*i);

}
