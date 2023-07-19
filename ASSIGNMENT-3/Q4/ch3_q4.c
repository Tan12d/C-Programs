#include <stdio.h>



int main()

{

	char color;



	printf("Enter the color:");

	scanf(" %c",&color);



	switch(color)

	{

		case 'O':

		case 'o':

			printf("ammonia");

		break;



		case 'B':

		case 'b':

			printf("carbon monoxide");

		break;



		case 'Y':

		case 'y':

			printf("hydrogen");

		break;

	

		case 'G':

		case 'g':

			printf("oxygen");

		break;



		default:

			printf("unknown");

		break;

	}



	return 0;

}
