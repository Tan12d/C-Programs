#include <stdio.h>

void main()
{
    int vol;
    double time,rate;
    double mins;

    printf("Quantity of fluid:");
    scanf("%d",&vol);

    printf("No. of minutes:");
    scanf("%lf",&mins);  

    time= mins/60;
    rate= vol/time;

    printf("VIBI= %d ml\n",vol);
    printf("Rate= %f ml/hr",rate);
}