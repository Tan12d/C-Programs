#include <stdio.h>

#include <string.h>



void rev(char []);

void r(char [],int,int);



void main()

{

    char a[80];

    

    gets(a);

    

    rev(a);

}



void rev(char a[])

{

    int start=0;

    

    for(int end=0;end<strlen(a);++end)

    {

        if(a[end]==' ')

        {

            r(a,start,end-1);

            start=end+1;

        }

    }

    

    r(a,start,strlen(a)-1);

    r(a,0,strlen(a)-1);

    

    printf("%s\n",a);

}



void r(char a[],int start,int end)

{

    char t;

    

    while(start<=end)

    {

        t=a[start];

        a[start]=a[end];

        a[end]=t;

        

        ++start;

        --end;

    }

}

