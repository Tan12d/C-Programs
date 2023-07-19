#include <stdio.h>



void main()

{

	double x,y;



	printf("Enter the x-coordinate:");

	scanf("%lf",&x);

	printf("Enter the y-coordinate:");

	scanf("%lf",&y);



	if(x>0 && y>0)

	{

		printf("%lf,%lf is in I quadrant\n",x,y);

	}



	else if(x<0 && y>0)

        {

                printf("(%lf,%lf) is in II quadrant\n",x,y);

        }



	else if(x<0 && y<0)

	{

                printf("(%lf,%lf) is in III quadrant\n",x,y);

	}



	else if(x>0.0 && y<0.0)

	{

		printf("(%lf,%lf) is in IV quadrant\n",x,y);

	}



	else if(x==0 && y==0)

	{

		printf("(%lf,%lf) is at origin\n",x,y);

	}



	else if(x!=0 && y==0)

	{

		printf("(%lf,%lf) is in x-axis\n",x,y);

	}



	else if(x==0 && y!=0)

	{

		printf("(%lf,%lf) is in y-axis\n",x,y);

	}



}
