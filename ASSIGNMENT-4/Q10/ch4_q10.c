#include <stdio.h>

#include <math.h>

#define a 3.592

#define b 0.0427

#define R 0.08206



void main()

{

	double n,T,P;

	double i_v,f_v,inc,v;



	printf("Quantity of carbon dioxide (moles)> ");

	scanf("%lf",&n);



	printf("Temperature (kelvin)> ");

	scanf("%lf",&T);



	printf("Initial volume (millilitres)> ");

	scanf("%lf",&i_v);



	printf("Final volume (millilitres)> ");

	scanf("%lf",&f_v);



	printf("Volume increment (millilitres)> ");

	scanf("%lf",&inc);

 	

        system("clear");

	

	printf("%.3lf moles of carbon dioxide at %.0lf kelvin\n",n,T);



	printf("\nVolume(ml) \t\t\t Pressure(atm)\n\n");



	for(double i=i_v;i<=f_v;i+=inc)

	{

		v=i/1000.0;

		P=((n*R*T)/(v-(b*n)))-((a*pow(n,2))/(pow(v,2)));



		printf("%6.0lf%36.4lf\n",i,P);

	}

}
