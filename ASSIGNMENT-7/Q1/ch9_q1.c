#include <stdio.h>

#include <string.h>



int ispal(char [], int ,int);



void main()

{

	int i,p=0,q,j,k=0,r=0,m;

	char a[20],b[20],c[20];



	printf("Enter the string:");

	gets(a);



	for(i=0;i<strlen(a);i++)

	{

		if(a[i]!=' ' && a[i]!='\'')

		{

			b[p]=a[i];

			p=p+1;

		}

	}	



	if((strlen(b)%2)==0)

	{

		for(r=0;r<strlen(b)/2;r++)

		{

			c[r]=b[r];	

		}

		

		c[r]=" ";

		

		k=r+1;

		

		for(j=strlen(b)/2;j<strlen(b);j++)

		{

			c[k]=b[j];

			k=k+1;

		}	

		

		q= ispal(c,0,strlen(c)-1);

	

		if(q==1)

		{

			printf("Palindrome\n");

		}



		else

		{

			printf("Not\n");

		}

	}

	

	else

	{

		r= ispal(b,0,strlen(b)-1);

	

		if(r==1)

		{

			printf("Palindrome\n");

		}



		else

		{

			printf("Not\n");

		}

	}

}



int ispal(char b[],int l,int h)

{	

	if(l==h)

	{

		if(b[l]==b[h])

		{

			return 1;

		}



		else

		{

			return 0;

		}

	}



	else

	{

		if(b[l]==b[h])

		{

			return ispal(b,l+1,h-1);

		}



		else

		{

			return 0;

		}

	}

}
