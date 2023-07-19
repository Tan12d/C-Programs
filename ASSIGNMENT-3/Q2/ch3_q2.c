#include <stdio.h>

#include <math.h>



int main()

{

	double h,w,BMI;



	printf("Enter the weight in pounds:");

	scanf("%lf",&w);



	printf("Enter the height in inches:");

	scanf("%lf",&h);



	BMI= (703*w)/(pow(h,2));



	if(BMI<18.5)

		printf("Underweight");



	else if(BMI>=18.5 && BMI<=24.9)

		printf("Normal");



	else if(BMI>=25.0 && BMI<=29.9)

		printf("Overweight");



	else if(BMI>=30.0)

		printf("Obese");





	return 0;

}
