#include <stdio.h>
#include <math.h>

double principal(double,double);
void payment(double, double, int);

void main()
{
	double purchase_price,down_pay,i,P;
	int n;

	printf("Enter the purchase price:");
	scanf("%lf",&purchase_price);

	printf("Enter the down payment:");
	scanf("%lf",&down_pay);

	printf("Enter the annual rate:");
	scanf("%lf",&i);

	printf("Enter no. of payment:");
	scanf("%d",&n);

	i= i/1200;

	P=principal(purchase_price,down_pay);

	payment(P,i,n);
}

double principal(double pp,double d_p)
{
	return pp-d_p;
}

void payment(double P,double i,int n)
{
	double q;

	q=(i*P)/(1-(pow((1+i),-1*n)));

	printf("Amount borrowed: $%.2f\n",P);
	printf("Monthly payment: $%.2f\n",q);
}