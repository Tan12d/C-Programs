#include <stdio.h>

#include <math.h>



void main()

{

	double P,balance,monthly_payment,principal,annual_interest_rate,monthly_interest_rate,each_interest_rate,monthly_principal;

	int n;



	printf("Enter the term:");

	scanf("%d",&n);



	printf("Enter the Principal:");

	scanf("%lf",&P);



	printf("Enter the annual interest rate:");

	scanf("%lf",&annual_interest_rate);



	monthly_interest_rate= annual_interest_rate/1200.0;

	

	monthly_payment=(monthly_interest_rate*P)/(1-(pow((1+monthly_interest_rate),-1*n)));

	

	balance= P;



	printf("Payment $%.2lf\n",monthly_payment);



	printf("Payment \t Interest \t\t Principal \t\t Principal Balance\n");



	for(int i=1;i<=n;i++)

	{

		each_interest_rate=monthly_interest_rate*balance;



		monthly_principal= monthly_payment-each_interest_rate;



		balance= balance-monthly_principal;



		printf("%d%22.2lf%25.2lf%29.2lf\n",i,each_interest_rate,monthly_principal,balance);

	}



	printf("Final Payment $%.2lf\n",monthly_payment);



}
