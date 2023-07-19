#include <stdio.h>



void merge(double [],double [],int,int);



void main()

{

    int n1,n2,i,j;

    

    printf("Enter the size of 1st array:");

    scanf("%d",&n1);

    printf("Enter the size of 2nd array:");

    scanf("%d",&n2);

    

    double a[n1];

    double b[n2];

    

    printf("Enter the elements of 1st array:");

    for(i=0;i<n1;++i)

    {

        scanf("%lf",&a[i]);

    }

        

    printf("Enter the elements of 2nd array:");

    for(j=0;j<n2;++j)

    {

        scanf("%lf",&b[j]);

    }

    

    printf("\n");

    

    

    merge(a,b,n1,n2);

}



void merge(double a[],double b[],int x,int y)

{

    

    int p=x+y;

    double c[p];

    int m=0,n=0,o=0;

    

    while(m<x && n<y)

    {

        if(a[m]<b[n])

        {

            c[o]=a[m];

            ++m;

	    ++o;

        }

    

        else

        {

            c[o]=b[n];

            ++n;

	    ++o;

        }

    }

    

    while(m<x)

    {

        c[o]=a[m];

        ++m;

        ++o;

    }

    

    while(n<y)

    {

        c[o]=b[n];

        ++n;

        ++o;

    }

    

    for(int k=0;k<p;k+=1)

    {

        printf("%lf\t",c[k]);

    }



    printf("\n");

}
