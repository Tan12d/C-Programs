#include <stdio.h>

#include <stdlib.h>



typedef struct node

{

	int info;

	struct node *link;

};



void display(struct node*);

void insert(struct node*,int);



void main()

{

	struct node *start= NULL;

	struct node *second= NULL;

	struct node *third= NULL;



	start= (struct node*)malloc(sizeof(struct node));



	second= (struct node*)malloc(sizeof(struct node));



	third= (struct node*)malloc(sizeof(struct node));



	start->info=1;

	start->link=second;



	second->info=2;

	second->link=third;



	third->info=3;

	third->link=NULL;



	display(start);



	insert(start,23);



	display(start);

}



void display(struct node *start)

{

	struct node *n=start;



	while(n != NULL)

	{

		printf("%d\t",n->info);

		n=n->link;

	}



	printf("\n");

}



void insert(struct node *start,int data)

{

	struct node *new= (struct node*)malloc(sizeof(struct node));



	struct node *last=start;



	new->info=data;



	new->link=NULL;



	if(start==NULL)

	{

		*start= *new;

		return;

	}



	else

	{

		while(last->link != NULL)

		{

			last=last->link;

		}



		last->link=new;

	}

	

	last=new;



	return;

}



