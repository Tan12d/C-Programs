#include <stdio.h>



void main()

{

	double x1,y1,x2,y2,slope,x_mid,y_mid,m,y_in;



	printf("Enter the first point:");

	scanf("%lf%lf",&x1,&y1);



	printf("Enter the second point:");

	scanf("%lf%lf",&x2,&y2);



	slope= (y2-y1)/(x2-x1);



	x_mid= (x1+x2)/2;



	y_mid= (y1+y2)/2;



	m= -(1/slope);



	y_in= y_mid-(m*x_mid);



	printf("y= %.2fx+%.2f",m,y_in);





}

