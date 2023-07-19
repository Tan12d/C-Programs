#include <stdio.h>



void main()

{

	int date,month,year,days=0;



	printf("Enter the date:");

	scanf("%d",&date);

	printf("Enter the month:");

	scanf("%d",&month);

	printf("Enter the year:");

	scanf("%d",&year);



	printf("%d/%d/%d\n",date,month,year);



	if(month>1)

	{

		days=days+31;

	}



	if(month>2)

	{

		if((year%4==0 && year%100!=0)||(year%400==0))

		{

			days=days+29;

		}



		else

		{

			days=days+28;

		}

	}



	if(month>3)

        {

                days=days+31;

        }



	if(month>4)

        {

                days=days+30;

        }

	

	if(month>5)

        {

                days=days+31;

        }

	

	if(month>6)

        {

                days=days+30;

        }



	if(month>7)

        {

                days=days+31;

        }



	if(month>8)

        {

                days=days+31;

        }



	if(month>9)

        {

                days=days+30;

        }



	if(month>10)

        {

                days=days+31;

        }



	if(month>11)

        {

                days=days+30;

        }



	if(month>12)

        {

                days=days+31;

        }



	date=date+days;



	printf("Day= %dth day",date);



}
