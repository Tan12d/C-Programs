#include <stdio.h>

void value(double);

void main()
{
    double n;

    printf("Enter the number:");
    scanf("%lf",&n);

    value(n);
}

void value(double n)
{
    double a;

    a=n*100;

    a+=0.5;

    a/=100;

    printf("Number: %lf\n",a);
}
