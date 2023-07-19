#include <stdio.h>

#define per_person 3



void main()

{

	double new_water = 2;

	double old_water = 15;

	int no_of_flush = 14;

	double cost_of_new_toilet = 150;



	int population;

	printf("Enter the population:");

	scanf("%d",&population);



	int toilets= population/per_person;



	double water_saved= (old_water*no_of_flush*toilets)-(new_water*no_of_flush*toilets);



	double cost_saved=(water_saved/((old_water-new_water)*no_of_flush))*cost_of_new_toilet;



	printf("Magnitude of water per day= %f litres/day",water_saved);



	printf("\nCost of water saved= $%f\n",cost_saved);

}



