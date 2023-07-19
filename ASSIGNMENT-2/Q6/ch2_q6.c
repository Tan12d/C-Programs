#include <stdio.h>
#define distance 1

void input();
void speed(double);
void fps(double);
void mps(double);

void main()
{
    input();
    input();
    input();
    input();   
}

void input()
{
    double time,mins,secs;

    printf("Enter the mins:");
    scanf("%lf",&mins);

    printf("Enter the secs:");
    scanf("%lf",&secs);

    time= (mins*60)+secs;

    speed(time);
}

void speed(double t)
{
    double s;

    s= distance/t;

    fps(s);
    mps(s);
}

void fps(double s)
{
    double s1;

    s1= s*5280;

    printf("Speed in feet per second= %lf\n",s1);
}

void mps(double s)
{
    double s2;

    s2= s*1.609;

    printf("Speed in meter per second= %lf\n",s2);
}