#include <stdio.h>

#include <string.h>

#include <stdlib.h>



typedef struct 

{

	int month;

	int date;

	int year;

	

}date_t;



typedef struct

{

	double capacity;

	double fuel_level;

	

}tank_t;



typedef struct

{

	char make[10];

	char made[10];

	int odometer_read;

	date_t manuf;

	date_t purchase;

	tank_t tank;

	

}auto_t;



void driver(auto_t autm);

auto_t scan_date();

auto_t scan_tank();

auto_t scan_auto();

void print_date(auto_t autm);

void print_tank(auto_t autm);

void print_auto(auto_t autm);



void main()

{

	printf("Enter the details of automobiles one by one: ");

	

       	auto_t car1;

        auto_t car2;	

	

	driver(car1);

	driver(car2);

}



void driver(auto_t autm)

{

	autm = scan_date();

       	autm = scan_tank();

	autm = scan_auto();



	print_auto(autm);

	print_date(autm);

	print_tank(autm);

}



auto_t scan_date()

{

	auto_t autm;

	

	printf("\nEnter the month: ");

	scanf("%d",&autm.manuf.month);



	printf("\nEnter the date: ");

	scanf("%d",&autm.manuf.date);



	printf("\nEnter the year: ");

	scanf("%d",&autm.manuf.year);



	printf("\nEnter the month: ");

        scanf("%d",&autm.purchase.month);



        printf("\nEnter the date: ");

        scanf("%d",&autm.purchase.date);



        printf("\nEnter the year: ");

        scanf("%d",&autm.purchase.year);



	return autm;

}



auto_t scan_auto()

{

	auto_t autm;



	printf("\nEnter the name of the make: ");

	scanf("%s",autm.make);



	printf("\nEnter the model: ");

	scanf("%s",autm.made);



	printf("\nEnter the odometer reading: ");

	scanf("%d",&autm.odometer_read);



	return autm;

}



auto_t scan_tank()

{

	auto_t autm;



	printf("\nEnter the tank capacity: ");

	scanf("%lf",&autm.tank.capacity);



	printf("\nEnter the current fuel level: ");

	scanf("%lf",&autm.tank.fuel_level);	



	return autm;

}



void print_auto(auto_t autm)

{

	printf("\n%s %s %d",autm.make,autm.made,autm.odometer_read);

}



void print_date(auto_t autm)

{

	printf(" %d %d %d %d %d %d",autm.manuf.month,autm.manuf.date,autm.manuf.year,autm.purchase.month,autm.purchase.date,autm.purchase.year);

}



void print_tank(auto_t autm)

{

	printf(" %4.4lf %4.4lf\n",autm.tank.capacity,autm.tank.fuel_level);

}

