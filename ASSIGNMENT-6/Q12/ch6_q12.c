#include <stdio.h>

#include <string.h>

#include <stdlib.h>



void check(char [],char []);



void main()

{

	char a[10],b[10];



	printf("Enter the first string:");

	scanf("%s",a);



	printf("Enter the second string:");

	scanf("%s",b);



	

	check(a,b);



	//printf("%s",q);

}



void check(char a[],char b[])

{

	int n,x,y,z=0;

	char p[10],q[10];



	x=strlen(a)-1;

	y=strlen(b)-1;



 	while(x>=0 && y>=0)

	{

		if(a[x]==b[y])

		{

			p[z++]=a[x];

		}



		--x;

		--y;

	}



	z=strlen(p)-1;



	for(n=0;n<strlen(p);n++)

	{

		q[n]=p[z--];

	}



	for(int u=0;u<strlen(p);u++)

	{

		printf(" %c",q[u]);

	}

}
