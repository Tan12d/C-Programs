#include <stdio.h>



int main()

{

	int number;

	double emm;

	int odo;



	printf("(1) Carbon monoxide ");

	printf("(2) Hydrocarbons ");

	printf("(3) Nitrogen oxides ");

	printf("(4) Nonmethane hydrocarbons ");

	

	printf("\nEnter the number from the table:");

	scanf("%d",&number);



	switch(number)

	{

		case 1:

			printf("Enter the number of grams emitted per mile:");

			scanf("%lf",&emm);

			printf("Enter the odometer reading:");

			scanf("%d",&odo);



			if(odo<=50000)

			{

				if(emm>3.4)

				{

					printf("Emissions exceed permitted level of 3.4 grams/mile.\n");

				}



				else

				{

					printf("Emissions doesn't exceed permitted level of 3.4 grams/mile.\n");

				}

			}



			else

			{

				if(emm>4.2)

                                {

                                        printf("Emissions exceed permitted level of 4.2 grams/mile.\n");

                                }



                                else

                                {

                                        printf("Emissions doesn't exceed permitted level of 4.2 grams/mile.\n");

                                }

			}



		break;



		case 2:

			printf("Enter the number of grams emitted per mile:");

                        scanf("%lf",&emm);

                        printf("Enter the odometer reading:");

                        scanf("%d",&odo);



                        if(odo<=50000)

                        {

                                if(emm>0.31)

                                {

                                        printf("Emissions exceed permitted level of 0.31 grams/mile.\n");

                                }



                                else

                                {

                                        printf("Emissions doesn't exceed permitted level of 0.31 grams/mile.\n");

                                }

                        }



                        else

                        {

                                if(emm>0.39)

                                {

                                        printf("Emissions exceed permitted level of 0.39 grams/mile.\n");

                                }



                                else

                                {

                                        printf("Emissions doesn't exceed permitted level of 0.39 grams/mile.\n");

                                }

                        }



                break;



		case 3:

			printf("Enter the number of grams emitted per mile:");

                        scanf("%lf",&emm);

                        printf("Enter the odometer reading:");

                        scanf("%d",&odo);



                        if(odo<=50000)

                        {

                                if(emm>0.4)

                                {

                                        printf("Emissions exceed permitted level of 0.4 grams/mile.\n");

                                }



                                else

                                {

                                        printf("Emissions doesn't exceed permitted level of 0.4 grams/mile.\n");

                                }

                        }



                        else

                        {

                                if(emm>0.5)

                                {

                                        printf("Emissions exceed permitted level of 0.5 grams/mile.\n");

                                }



                                else

                                {

                                        printf("Emissions doesn't exceed permitted level of 0.5 grams/mile.\n");

                                }

                        }



                break;



		case 4:

			printf("Enter the number of grams emitted per mile:");

                        scanf("%lf",&emm);

                        printf("Enter the odometer reading:");

                        scanf("%d",&odo);



                        if(odo<=50000)

                        {

                                if(emm>0.25)

                                {

                                        printf("Emissions exceed permitted level of 0.25 grams/mile.\n");

                                }



                                else

                                {

                                        printf("Emissions doesn't exceed permitted level of 0.25 grams/mile.\n");

                                }

                        }



                        else

                        {

                                if(emm>0.31)

                                {

                                        printf("Emissions exceed permitted level of 0.31 grams/mile.\n");

                                }



                                else

                                {

                                        printf("Emissions doesn't exceed permitted level of 0.31 grams/mile.\n");

                                }

                        }



                break;



		default:

			printf("Unknown");



	}



	return 0;

}
