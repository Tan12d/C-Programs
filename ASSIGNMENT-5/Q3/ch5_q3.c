#include <stdio.h>

#include <math.h>



void ques(int *mul,int *o_e,int *p,int n);



void main()

{

	int n, mul, o_e, p;



	printf("Enter the number:");

	scanf("%d",&n);



	ques(&mul,&o_e,&p,n);



	printf("Is the value a multiple of 7, 11, or 13?\n");

	printf("Multiple of %d\n",mul);



	if(o_e==1)

	{

		printf("Is the sum of digits odd or even?\n");

		printf("Odd\n");

	}



	else

	{

		printf("Is the sum of digits odd or even?\n");

        	printf("Even\n");

	}



	if(p==1)

	{

		printf("Is the value a prime number?\n");

		printf("Prime\n");

	}



	else if(p==0)

	{

		printf("Is the value a prime number?\n");

                printf("Not Prime\n");

	}

}



void ques(int *mul,int *o_e,int *p,int n)

{

	int t=n,t1=n,sum=0;



	if(n%7==0)

	{

		*mul=7;

	}



	else if(n%11==0)

	{

		*mul=11;

	}



	else if(n%13==0)

	{

		*mul=13;

	}



	else

	{

		*mul=1/0;

	}



	while(t>0)

	{

		sum+=t%10;



		t/=10;		

	}



	if(sum%2==0)

	{

		*o_e=0;

	}



	else

	{

		*o_e=1;

	}



	int flag=1;

	

	if(t1<=1)

	{

		flag=0;

	}



	if(t1<=3)

	{

		flag=1;

	}



	if(t1%2==0 ||t1%3==0)

	{

		flag=0;

	}



	for(int i=5;i<=(int)(sqrt(t1));i+=6)

	{

		if((t1%i)==0 || (t1%(i+2))==0)

		{

			flag=0;

			break;

		}

	}



	if(flag==0)

	{

		*p=0;

	}



	else

	{

		*p=1;

	}

}

