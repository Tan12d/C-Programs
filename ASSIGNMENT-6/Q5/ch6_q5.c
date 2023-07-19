#include <stdio.h>



int binarySearch(int [],int,int,int);



int binarySearch(int arr[], int l, int h, int x)

{

	if(l<=h) 

	{

		int mid = l + (h - l) / 2;



		if (arr[mid] == x)

			return mid;



		else if(x < arr[mid])

			return binarySearch(arr, l, mid - 1, x);



		else

			return binarySearch(arr, mid + 1, h, x);

	}



	return -1;

}



int main(void)

{

	int arr[] = { 2, 3, 4, 10, 40 };

	

	int n = sizeof(arr) / sizeof(arr[0]);

	

	int x = 40;

	

	int result = binarySearch(arr, 0, n - 1, x);

	

	if(result == -1)

		 printf("Element is not present in array");

		

	else

		printf("Element is present at index %d", result);



	return 0;

}

