#include <stdio.h>

#define tax 3.625



void main()

{

        double wage,hourly_wage_rate,no_of_hours_worked,gross_salary,net_pay,average,total_payroll;

        int n,id_no;        

	

	printf("Enter the no. of Employees: ");

	scanf("%d",&n);



        printf("Enter the hourly wage rate: ");

        scanf("%lf",&hourly_wage_rate);



	printf("\n");



        for(int i=1;i<=n;i++)

        {

                

        printf("Enter the id no.: ");

        scanf("%d",&id_no);

        

        printf("Enter the no. of hours worked: ");

        scanf("%lf",&no_of_hours_worked);



        if(no_of_hours_worked <= 40)

        {

                gross_salary= hourly_wage_rate*no_of_hours_worked;

        }



        else

        {

                gross_salary= (1.5*hourly_wage_rate*(no_of_hours_worked-40))+(40*hourly_wage_rate);

        }



        net_pay= gross_salary-((tax/100.0)*gross_salary);



	printf("Employee's Id no.: %d Employee's Net Pay: %.2lf\n\n",id_no,net_pay);

	

        total_payroll+= net_pay;

        }



        average =total_payroll/n;

	

	printf("Total payroll= %lf\n",total_payroll);

        printf("Average= %lf\n",average);

}



