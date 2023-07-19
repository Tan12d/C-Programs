#include <stdio.h>
#define bar_oil 42
#define energy 58e5

void main()
{
    int gal;
    double eff, val;

    printf("Enter no. of gallons of oil:");
    scanf("%d",&gal);

    printf("Enter the efficiency:");
    scanf("%lf",&eff);

    val= (energy/bar_oil)*gal;

    val= val*(eff/100);

    printf("BTU of heat: %f",val);
    
}