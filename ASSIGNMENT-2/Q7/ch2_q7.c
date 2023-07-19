#include <stdio.h>

void input();
void house_cost(int,int,double,int);
double tax_cal(double,int,int);

void main()
{
    input();
    input();
    input();
}

void input()
{
    int initial_house_cost,annual_fuel_cost,n;
    double tax_rate;

    printf("Enter the initial house cost:");
    scanf("%d",&initial_house_cost);

    printf("Enter the annual_fuel_cost:");
    scanf("%d",&annual_fuel_cost);

    printf("Enter the tax rate:");
    scanf("%lf",&tax_rate);

    printf("Enter the no. of years:");
    scanf("%d",&n);

    house_cost(initial_house_cost,annual_fuel_cost,tax_rate,n);
}

void house_cost(int i,int a,double t,int n)
{
    double tax,cost;
    
    tax=tax_cal(t,n,i);

    cost= ((i+a)*5)+tax;

    printf("Total cost of the house= Rs.%lf\n",cost);
}

double tax_cal(double t,int n,int i)
{
    return t*i*n;
}
