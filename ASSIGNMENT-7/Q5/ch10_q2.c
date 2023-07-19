#include <stdio.h>

#include <stdlib.h>

#include <string.h>



typedef struct

{

	int at_no;

	char name[10];

	char symbol[5];

	char class[10];

	double at_weight;

	int no_of_electrons[7];



}element_t;



element_t scan_element();

void print_element(element_t elmnt);



void main()

{

	printf("Enter the details of element one by one: ");

	element_t elmnt;

	

	elmnt = scan_element();

	print_element(elmnt);

}



element_t scan_element()

{

	int i=0;

	element_t element;



	printf("\nEnter atomic no.: ");

	scanf("%d",&element.at_no);



	printf("\nEnter element name: ");

	scanf("%s",element.name);



	printf("\nEnter the chemical symbol: ");

	scanf("%s",element.symbol);



	printf("\nEnter the chemical class: ");

	scanf("%s",element.class);



	printf("\nEnter the chemical weight: ");

	scanf("%lf",&element.at_weight);



	printf("\nEnter the no. of electrons: ");

	for(i=0;i<7;i++)

	{

		scanf("%d",&element.no_of_electrons[i]);

	}



	return element;

}



void print_element(element_t elmnt)

{

	int i=0;



	printf("\n\n%d%4s%4s%4s%6.4lf",elmnt.at_no,elmnt.name,elmnt.symbol,elmnt.class,elmnt.at_weight);



	for(i=0;i<7;i++)

	{

		printf("%2d",elmnt.no_of_electrons[i]);

	}



	printf("\n");

}
