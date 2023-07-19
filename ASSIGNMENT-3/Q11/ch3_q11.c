#include <stdio.h>



int within_x_percent(double,double,double);



void main()

{

	double data,ref;

	double x=5;



	printf("Substance => Normal BP(C)\n");

	printf("Water => 100\n");

	printf("Mercury => 357\n");

	printf("Copper => 1187\n");

	printf("Silver => 2193\n");

	printf("Gold => 2660\n");



	printf("Enter the reference:");

	scanf("%lf",&ref);



	printf("Enter the data:");

	scanf("%lf",&data);



	if(ref>=(100-0.05) && ref<=(100+0.05))

	{

		printf("Water\n");



		if((within_x_percent(ref,data,x))==1)

		{

			printf("True\n");

		}



		else

		{

			printf("False\n");

		}

	}



	else if(ref>=(357-0.05) && ref<=(357+0.05))

        {

                printf("Mercury\n");



                if((within_x_percent(ref,data,x))==1)

                {

                        printf("True\n");

                }



                else

                {

                        printf("False\n");

                }

        }



	else if(ref>=(1187-0.05) && ref<=(1187+0.05))

        {

                printf("Copper\n");



                if((within_x_percent(ref,data,x))==1)

                {

                        printf("True\n");

                }



                else

                {

                        printf("False\n");

                }

        }



	else if(ref>=(2193-0.05) && ref<=(2193+0.05))

        {

                printf("Silver\n");



                if((within_x_percent(ref,data,x))==1)

                {

                        printf("True\n");

                }



                else

                {

                        printf("False\n");

                }

        }



	if(ref>=(2660-0.05) && ref<=(2660+0.05))

        {

                printf("Gold\n");



                if((within_x_percent(ref,data,x))==1)

                {

                        printf("True\n");

                }



                else

                {

                        printf("False\n");

                }

        }

}



int within_x_percent(double ref,double data,double x1)

{

	if(data>= (ref-((x1/100.0)*ref)) && data<=(ref+((x1/100.0)*ref)))

	{

		return 1;

	}



	return 0;

}
