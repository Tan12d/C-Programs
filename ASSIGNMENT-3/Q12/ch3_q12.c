#include <stdio.h>



void main()

{

	double salary,tax_due;



	printf("Enter the salary:");

	scanf("%lf",&salary);



	if(salary>=0.00 && salary<=14999.99)

	{

		double a=0.00,b=0.00;

		int c=15;

		printf("Salary range ($)= %lf - %lf\n",a,14999.99);

		printf("Base Tax ($)= %lf\n",b);

		printf("Percentage of Excess= %d\n",c);



		tax_due= b+((salary-a)*(c/100.0));



		printf("Tax due= %lf\n",tax_due);

	}



	else if(salary>=15000.00 && salary<=29999.99)

        {

                double a=15000.00,b=2250.00;

                int c=18;

                printf("Salary range ($)= %lf - %lf\n",a,29999.99);

                printf("Base Tax ($)= %lf\n",b);

                printf("Percentage of Excess= %d\n",c);



                tax_due= b+((salary-a)*(c/100.0));



                printf("Tax due= %lf",tax_due);

        }



	else if(salary>=30000.00 && salary<=49999.99)

        {

                double a=30000.00,b=5400.00;

                int c=22;

                printf("Salary range ($)= %lf - %lf\n",a,49999.99);

                printf("Base Tax ($)= %lf\n",b);

                printf("Percentage of Excess= %d\n",c);



                tax_due= b+((salary-a)*(c/100.0));



                printf("Tax due= %lf\n",tax_due);

        }



	else if(salary>=50000.00 && salary<=79999.99)

        {

                double a=50000.00,b=11000.00;

                int c=27;

                printf("Salary range ($)= %lf - %lf\n",a,79999.99);

                printf("Base Tax ($)= %lf\n",b);

                printf("Percentage of Excess= %d\n",c);



                tax_due= b+((salary-a)*(c/100.0));



                printf("Tax due= %lf\n",tax_due);

        }

	

	else if(salary>=80000.00 && salary<=150000.00)

        {

                double a=80000.00,b=21600.00;

                int c=33;

                printf("Salary range ($)= %lf - %lf\n",a,150000.00);

                printf("Base Tax ($)= %lf\n",b);

                printf("Percentage of Excess= %d\n",c);



                tax_due= b+((salary-a)*(c/100.0));



                printf("Tax due= %lf\n",tax_due);

        }

}
