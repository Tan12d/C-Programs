#include <stdio.h>



int binary_srch(int [],int,int,int);



void main()

{

	int x,i;

	int a[]= {2,5,6,9,21,34};



	int n= sizeof(a)/sizeof(a[0]);



	for(i=0;i<n;i++)

	{

		printf("%d\t",a[i]);

	}



	printf("\n");



	printf("Enter the element you want to search:");

	scanf("%d",&x);



	printf("Position of %d is %d\n",x,binary_srch(a,0,n-1,x));

}



int binary_srch(int a[],int l,int h,int x)

{

	if(l==h)

	{

		if(a[l]==x)

		{

			return l;

		}



		else

		{

			return -1;

		}

	}



	else

	{

		int mid= (l+h)/2;



		if(a[mid]==x)

		{

			return mid;

		}



		else if(x<a[mid])

		{

			return binary_srch(a,l,mid-1,x);

		}



		else

		{

			return binary_srch(a,mid+1,h,x);

		}

	}



}
