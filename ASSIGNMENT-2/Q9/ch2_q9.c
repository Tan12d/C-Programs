#include <stdio.h>

#include <math.h>

#define PI 3.14159



double surface_area(double,double);

void cost(double,int,double);



void main()

{

        double r,h,cost_per_cm2,area;

        int n;



        printf("Enter the radius:");

        scanf("%lf",&r);



        printf("Enter the height:");

        scanf("%lf",&h);



        printf("Enter the cost:");

        scanf("%lf",&cost_per_cm2);



        printf("Enter the no. of containers:");

        scanf("%d",&n);



        area=surface_area(r,h);



        cost(area,n,cost_per_cm2);

}

double surface_area(double r,double h)

{

        double area1,area2;



        area1= PI*r*r;

        area2= 2*PI*r*h;



        return area1+area2;

}



void cost(double a,int n,double c)

{

        double per_cost,all_cost;



        per_cost=a*c;



        all_cost=n*per_cost;



        printf("Cost of each container: %lf\n",per_cost);

        printf("Cost of all containers: %lf\n",all_cost);

}



