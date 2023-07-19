#include <stdio.h>

void main()
{
    char grade;
    double minavg, curavg, percent, score;

    printf("Enter desired grade> ");
    scanf(" %c",&grade);

    printf("Enter minimum average required> ");
    scanf("%lf",&minavg);

    printf("Enter current average in courses> ");
    scanf("%lf",&curavg);

    printf("Enter how much the final counts as a percentage of the course grade> ");
    scanf("%lf",&percent);

    score= curavg + (minavg-curavg)/(percent/100);

    printf("You need a score of %.2f on the final to get a %c",score,grade);
}