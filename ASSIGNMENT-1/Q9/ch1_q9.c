#include <stdio.h>

#define rate 2



void main()

{

	double out_l,out_w,in_l,in_w,area,time;



	printf("Enter the length and width of yard:");

	scanf("%lf%lf",&out_l,&out_w);



	printf("Enter the length and width of the house:");

	scanf("%lf%lf",&in_l,&in_w);



	area= (out_l*out_w)-(in_l*in_w);



	time= area/rate;



	printf("Time req. to cut the grass= %f secs",time);



}

