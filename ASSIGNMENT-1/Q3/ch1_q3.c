#include <stdio.h>

void main()
{
    int hr, mins;
    double time,Temp;

    printf("Enter the hr: ");
    scanf("%d",&hr);

    printf("Enter the mins: ");
    scanf("%d",&mins);

    time= hr+(mins/60);

    Temp= ((4*time*time)/(time+2))-20;

    printf("Temperature is %f",Temp);
    
}