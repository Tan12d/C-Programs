#include <stdio.h>



int mul2(int);



void main()

{

	int n;



	printf("Enter the number:");

	scanf("%d",&n);



	mul2(n);



	printf("\n");

}



int mul2(int x)

{

	int ans;



	if(x<=0)

	{

		printf("0 \t");

		return 0;

	}



	else

	{

		ans= mul2(x-1)+2;

		printf("%d\t",ans);

	}



	return ans;

}
