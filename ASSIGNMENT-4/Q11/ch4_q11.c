#include <stdio.h>

#include <math.h>

#include <stdlib.h>

#define flow 1000

#define S 0.0015

#define N 0.014

#define width 15



double cal_flow(double);

int within_range(double);



void main()

{

	double depth,difference,error,temp_flow;

	int f=-1,i=0;



	printf("At a depth of 5.0000 feet, the flow is 641.3255 cubic feet per second.\n");

	

	while(f!=1)

	{

		if(i==0)

		{	

			printf("Enter the initial guess for the channel depth when the flow is %d cubic feet per second\n",flow);

			printf("Enter guess>\n");

		}



		else

		{

			printf("Enter guess>\n");

		}



			scanf("%lf",&depth);



			temp_flow = cal_flow(depth);



			difference= (double)flow- temp_flow;

			error= (difference/flow)*100;



			printf("Depth: %lf Flow: %lf cfs Target: 1000.0000 cfs  Difference: %lf Error: %lf percent\n",depth,temp_flow,difference,error);

			

			f= within_range(temp_flow);

			

			i=-1;

	}

}



double cal_flow(double depth)

{

	double A,R,Q;

	R=(depth * width)/((2*depth)+width);

	

	A=depth*width;



	Q=(1.486/N)*(A * pow(cbrt(R),2)) * sqrt(S);



	return Q;

}



int within_range(double f)

{

	if((flow-((0.1/100.0)*flow))<=f && f<=(flow+((0.1/100.0)*flow)))

	{

		return 1;

	}



	return 0;

}
