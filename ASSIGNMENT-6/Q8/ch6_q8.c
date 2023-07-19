#include <stdio.h>

#include <string.h>

#include <ctype.h>



void deblank(char [],int);



void main()

{

	char x[30];



	gets(x);



	int n= sizeof(x)/sizeof(x[0]);

	

	deblank(x,n);

}



void deblank(char y[],int n)

{

	char c[n];

	

	int p=0,i;

	

	for(i=0;i<n;i++)

	{

		if(y[i]!=' ')

		{

			c[p++]=y[i];

		}

	}



	c[p]='\0';



	puts(c);

}
