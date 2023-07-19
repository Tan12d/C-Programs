#include <stdio.h>

#include <math.h>

#include <stdlib.h>



void main()

{

        int a,b;



        printf("Enter the number a:");

        scanf("%d",&a);

        printf("Enter the number b:");

        scanf("%d",&b);

                

        if(a<0)

        {

                a=abs(a);

        }



        if(b<0)

        {

                b=abs(b);

        }

        

        int n=0;



        if(b>a)

        {

                do

                {

                        n=a%b;

                        a=b;

                        b=n;



                        if(n==0)

                        {

                                printf("GCD= %d\n",a);

                                break;

			}



                 }while(n>=0);

        }



        else

        {

                do       

                {

                        n=b%a;

                        b=a;

                        a=n;



                        if(n==0)

                        {

                                printf("GCD= %d\n",a);

                                break;

                        }



                 }while(n>=0);

        }

}
