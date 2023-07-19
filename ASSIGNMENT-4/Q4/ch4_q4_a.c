#include <stdio.h>

#include <limits.h>



void main()

{

        int a,n;



	printf("Enter the no. of elements you want to take as input:");

        scanf("%d",&n);



        int i=0;



        int large=INT_MIN,small=INT_MAX;

	double sum=0;

        double average=0;



	for(i=0;i<n;i++)

        {

                printf("Enter the no.:");

                scanf("%d",&a);



	        if(large<a)

                {

                        large=a;

                }



                if(small>a)

                {

                        small=a;

                }



                sum +=a;

        }



        average= sum/n;



        printf("Largest= %d\n",large);



        printf("Smallest= %d\n",small);

        

        printf("Sum= %.2lf\n",sum);



        printf("Average= %.2lf\n",average);

}

