#include <stdio.h>



void main()

{

	int m,n,side1,side2,hypotenuse;



	printf("First no. should be greater than second no.");



	printf("\nEnter the first no.:");

	scanf("%d",&m);



	printf("Enter the second no.:");

	scanf("%d",&n);



	side1= (m*m)-(n*n);

	side2= 2*m*n;

	hypotenuse= (m*m)+(n*n);



	printf("THe triple side1= %d, side2= %d, hypotenuse= %d",side1,side2,hypotenuse);

}