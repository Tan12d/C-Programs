#include <stdio.h>



void main()

{

	int n,sum=0;

	

	printf("Enter the number:");

	scanf("%d",&n);



	while(n>0)

	{

		sum += n%10;

		n= n/10;

	}



	if((sum%9)==0)

	{

		printf("Divisible by 9\n");

	}

	

	else

	{

		printf("Not divisible by 9\n");

	}

}
