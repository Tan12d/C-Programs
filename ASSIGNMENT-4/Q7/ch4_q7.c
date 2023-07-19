#include <stdio.h>



void main()

{

	int temp,n,n1,c1=0,c2=0,c3=0,sum=0;

	double avg=0;



	printf("Enter the no. of days:");

	scanf("%d",&n);



	n1=n;



	while(n>0)

	{

		printf("Enter the temperature:");

		scanf("%d",&temp);



		if(temp>=85)

		{

			printf("%d= Hot day\n",temp);

			c1++;

		}



		else if(temp>=60 && temp<85)

		{

			printf("%d= Pleasant day\n",temp);

			c2++;

		}



		else

		{

			printf("%d= Cold day\n",temp);

			c3++;

		}



		sum+=temp;



		n--;

	}



	printf("No. of hot days= %d\n",c1);



	printf("No. of pleasant days= %d\n",c2);



	printf("No. of cold days= %d\n",c3);



	avg= sum/n1;



	printf("Average= %lf",avg);

}
