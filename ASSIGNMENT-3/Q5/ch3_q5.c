#include <stdio.h>



void main()

{

	double n;



	printf("Enter the magnitude of Earthquake:");

	scanf("%lf",&n);



	if(n<5.0)

	{

		printf("Little or no damage\n");

	}

	

	else if(5.0>=n && n<5.5)

	{

		printf("Some damage\n");

	}



	else if(5.5>=n && n<6.5)

	{

		printf("Serious damage: walls may crack or fall\n");

	}



	else if(6.5>=n && n<7.5)

	{

		printf("Disaster: house and buildings may collapse\n");

	}



	else if(n<=7.5)

	{

		printf("Catastrophe: most buildings destroyed\n");

	}

}
