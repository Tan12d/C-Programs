#include <stdio.h>

#include <math.h>



void get_poly(double [],int *);

double eval_poly(const double [],int,double);



int main()

{

    double coeff[8];

    int degreep=0;

    

    get_poly(coeff,&degreep);

    

    return 0;

}



void get_poly(double coeff[],int *degreep)

{

    int i,n;

    double x;

    

    printf("Enter the degree of the polynomial(less than and equal to 8): ");

    scanf("%d",&*degreep);

    

    n=*degreep;

    

    printf("Enter the coefficients:");

    for(i=0;i<=*degreep;i++)

    {

        scanf("%lf",&coeff[i]);

    }

    

    printf("Enter the value for which you want to solve the polynomial:");

    scanf("%lf",&x);

    

    printf("Value of the polynomial for x=%.3lf is %.2lf",x,eval_poly(coeff,n,x));

}



double eval_poly(const double coeff[],int degree,double x)

{

    double sum=coeff[0];

    int i;

    

    for(i=1;i<=degree;i++)

    {

        sum+=(coeff[i]*pow(x,i));

    }

    

    return sum;

}

