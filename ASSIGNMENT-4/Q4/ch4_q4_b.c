#include <stdio.h>

#include <math.h>



void main()

{

        int a,n;



        printf("Enter the no. of elements you want to take as input:");

        scanf("%d",&n);



	int i=0;



	int sum_squares=0,sum=0;

      

        double standard_deviation=0,x,y,average=0;



        for(i=0;i<n;i++)

	{

                printf("Enter the no.:");

                scanf("%d",&a);			

   		sum+=a;		

                sum_squares += a*a;

        }





        average= sum/n;

        x=sum_squares/n;

        y= x- (pow(average,2));

        standard_deviation= sqrt(y);

        

        printf("standard_deviation= %lf\n",standard_deviation);



    }
