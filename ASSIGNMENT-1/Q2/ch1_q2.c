#include <stdio.h>
#define megawatt 1e6;
#define g 9.80

void main()
{
    double height,flow, w, w1, w2;

    printf("Enter the height of the dam: ");
    scanf("%lf",&height);

    printf("No. of cubic meters of water: ");
    scanf("%lf",&flow);

    w= (flow*1000)*g*height;

    w1= 0.90*w;

    w2=w1/megawatt;

    printf("power= %f",w2);
}