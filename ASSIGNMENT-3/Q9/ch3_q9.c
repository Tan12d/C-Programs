#include <stdio.h>

#define add_weekday_minutes_cost 0.40

#define flat_rate 39.99

#define taxes 5.25



void main()

{

	int weekday_minutes,night_minutes,weekend_minutes,extra_mins;



	double average_minute_cost,monthly_bill,pretax_bill,bill;



	printf("Enter the weekdayday minutes:");

	scanf("%d",&weekday_minutes);



	printf("Enter the night minutes:");

	scanf("%d",&night_minutes);



	printf("Enter the weekend minutes:");

	scanf("%d",&weekend_minutes);



	extra_mins=weekday_minutes-600;



	bill=flat_rate+(extra_mins*0.40);

	

	pretax_bill=(4*bill*taxes);



	monthly_bill=pretax_bill/100.0;



	average_minute_cost=monthly_bill/3.0;



	printf("Pretax bill= %lf\n",pretax_bill);



	printf("Average minute cost= %lf\n",average_minute_cost);



	printf("Taxes= %lf\n",taxes);



	printf("Total bill= %lf\n",monthly_bill);



}
