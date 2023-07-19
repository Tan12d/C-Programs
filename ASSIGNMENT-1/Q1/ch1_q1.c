#include <stdio.h>
#define rate 0.35

void main()
{
    printf("MILEAGE REIMBURSEMENT CALCULATOR");

    double start,end,dist,reimbursement;

    printf("\nEnter beginning odometer reading=> ");
    scanf("%lf",&start);

    printf("Enter ending odometer reading=> ");
    scanf("%lf",&end);

    dist= end-start;

    reimbursement =dist*rate;

    printf("You travelled %.1f miles. At $%.2f per mile, your reimbursement is $%.2f ",dist,rate,reimbursement);

}