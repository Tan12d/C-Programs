#include <stdio.h>



void div(int sum,int *a,int *b,int *c);



void main()

{

	int n,a,b,c;



	printf("Enter the number:");

	scanf("%d",&n);



	div(n,&a,&b,&c);



	printf("No.of 50s= %d\n",a);

	printf("No.of 20s= %d\n",b);

	printf("No.of 10s= %d\n",c);

}



void div(int n,int *a,int *b,int *c)

{

	int z=0;

	*a=n/50;

	z=n%50;

	*b=z/20;

	z=z%20;

	*c=z/10;

}
