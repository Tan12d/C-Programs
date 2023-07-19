#include <stdio.h>

#define teachers_discount 12

#define sales_tax 5

#define teachers 10



void main()

{

	char customer;

	double total_purchase,t_d,discounted_total,s_t,total;



	printf("Enter the customer type:");

	scanf(" %c",&customer);



	printf("Enter the total purchase:");

	scanf("%lf",&total_purchase);



	switch(customer)

	{

		case 'T':

		case 't':



			if(total_purchase>=100)

			{

				t_d=(teachers_discount/100.0)*total_purchase;

				discounted_total= total_purchase-t_d;

				s_t=(sales_tax/100.0)*discounted_total;

				total= s_t+discounted_total;



				printf("Total purchases $%lf\n",total_purchase);

				printf("Teacher's discount(%d%%) %lf\n",teachers_discount,t_d);

				printf("Discounted Total %lf\n",discounted_total);

				printf("Sales Tax(%d%%) %lf%%\n",sales_tax,s_t);

				printf("Total $%lf\n",total);		

			}

			

			else

			{

				t_d=(teachers/100.0)*total_purchase;

                                discounted_total= total_purchase-t_d;

                                s_t=(sales_tax/100.0)*discounted_total;

                                total= s_t+discounted_total;



                                printf("Total purchases $%lf\n",total_purchase);

                                printf("Teacher's discount(%d%%) %lf\n",teachers,t_d);

                                printf("Discounted Total %lf\n",discounted_total);

                                printf("Sales Tax(%d%%) %lf%%\n",sales_tax,s_t);

                                printf("Total $%lf\n",total);

			}



			break;



		case 'N':

		case 'n':

			

				s_t=(sales_tax/100.0)*total_purchase;

                                total= s_t+total_purchase;



                                printf("Total purchases $%lf\n",total_purchase);

                                printf("Sales Tax(%d%%) %lf%%\n",sales_tax,s_t);

                                printf("Total $%lf\n",total);



				break;



		default:

				

				printf("Envalid Input\n");



				break;

	}

}
