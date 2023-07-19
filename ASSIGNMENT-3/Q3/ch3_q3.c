#include <stdio.h>



void main()

{

	double heading;



	printf("Enter the heading:");

	scanf("%lf",&heading);



	if(heading>=0.0 && heading<=90.0)

	{

		printf("Compass bearing:North %lfdeg East\n",heading);

	}



	else if(heading<180.0)

	{

		printf("Compass bearing:South %lfdeg East\n",180.0-heading);

	}



	else if(heading<=270.0)

	{

		printf("Compass bearing:South %lfdeg West\n",heading-180.0);

	}



	else if(heading<360.0)

	{

		printf("Compass bearing:North %lfdeg West\n",360.0-heading);

	}



	else if(heading==360.0)

	{

		printf("Compass bearing:North %lfdeg East\n",360.0-heading);

	}



	else

	{

		printf("Wrong Input");

	}

}
