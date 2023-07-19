#include <stdio.h>



void main()

{

	int n,sum=0;

	char digit;



	printf("Enter the number:");

	scanf("%d",&n);



	while(n>0)

	{

		digit=(char)((n%10)+'0');

			

	        printf(" %c\n",digit);

			

		sum += (int)digit - (int)'0';

					

		n=n/10;

	

	}



	printf("Sum= %d",sum);

}

