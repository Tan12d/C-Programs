#include <stdio.h>
#include <math.h>
#define PI 3.14159265
#define e 2.71828

double factorial(int);

void main()
{
    int n;
    double fact;

    printf("Enter the number:");
    scanf("%d",&n);

    fact=factorial(n);

    printf("%d! equals approximately %lf",fact);
}

double factorial(int n)
{
    double f,a,b;

    a=(1/3)+(2*n);
    b=sqrt(a*PI);

    f= (pow(n,n))*(pow(e,-n))*b;

    return f;
}