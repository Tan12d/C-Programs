#include <stdio.h>

#define subs 0.08

void main()

{

	int n,s,testcases=5;

	double l,subsidy,P;

	

	printf("CARPOOLS MEETING MINIMUM PASSENGER EFFICIENCY OF 25 PASSENGERS KM/L\n");

	printf("Passengers       Weekly Commute(km)       Gasoline Consumption(L)       Efficiency(pass km/L)       Weekly Subsidy($)\n");

	

	while(testcases-- >0)

	{

		scanf("%d",&n);

		scanf("%d",&s);

		scanf("%lf",&l);



		P=(n*s)/l;



		subsidy= n*s*subs;

                

		printf("%3d%22d%27.1lf%31.1lf%26.2lf\n",n,s,l,P,subsidy);

	}	

}
