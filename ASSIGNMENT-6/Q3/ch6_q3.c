#include <stdio.h>

void display(int []);



int main()

{

    int n,a,i;

    

    int f[6];

    

    printf("Enter the no. of cities: ");

    scanf("%d",&n);

    

    for(i=1;i<=n;i++)

    {

        printf("City no.: %d",i);

        printf("\nEnter the no. of accidents: ");

        scanf("%d",&a);

        

        if(a>=0 && a<=99)

        	f[0]++;

        

        else if(a>=100 && a<=199)

        	f[1]++;

        

    	else if(a>=200 && a<=299)

        	f[2]++;

    

    	else if(a>=300 && a<=399)

        	f[3]++;

    

    	else if(a>=400 && a<=499)

        	f[4]++;

    

    	else if(a>=500)

        	f[5]++;

    }

    

    display(f);

    

    return 0;

}



void display(int f[])

{

    printf("Ranges        Frequencies\n");

    printf("0-99 %15d\n",f[0]);

    printf("100-199 %12d\n",f[1]);

    printf("200-299 %12d\n",f[2]);

    printf("300-399 %12d\n",f[3]);

    printf("400-499 %12d\n",f[4]);

    printf("500 or above %7d\n",f[5]);

}
