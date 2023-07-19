#include <stdio.h>

#include <string.h>



int hydroxide(char []);



void main()

{

	char c[8];

	int n,x,i;

	

	printf("Enter the no. of chemicals:");

	scanf("%d",&n);

	 

	for(i=0;i<n;i++)

	{

		printf("Enter the chemical:");

		scanf("%s",c);

		

		x= hydroxide(c);

		

		if(x==1)

		{

			printf("True\n");

			printf("It is a hydroxide\n");

		}

		

		else

		{

			printf("False\n");

			printf("It is not a hydroxide\n");

		}

	}

}



int hydroxide(char a[])

{

	int n= strlen(a)-1;

	

	if(a[n-1]=='O' && a[n]=='H')

	{

		return 1;

	}

	

	return 0;

}
