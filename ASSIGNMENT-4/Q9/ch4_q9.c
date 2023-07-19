#include <stdio.h>



int sales(int,int);



void main()

{

	int i=0,brand_id=0,temp,amount,final_inventory;



	printf("0) Piels\n");

	printf("1) Coors\n");

	printf("2) Bud\n");

	printf("3)Iron City\n");



	while(i<4)

	{

		temp=brand_id;



		printf("Enter the brand id:");

		scanf("%d",&brand_id);



		if(temp!=brand_id)

		{

			printf("Enter the amount:");

			scanf("%d",&amount);



			final_inventory+=sales(brand_id,amount);



			i++;

		}



		else

		{

			printf("Already entered\n");

		}

	}



	printf("Final Inventory= %d\n",final_inventory);



}



int sales(int id,int amt)

{

	int inventory=0;



	inventory+=amt;



	printf("Inventory for ID number %d= %d\n",id,inventory);



	return inventory;

}















