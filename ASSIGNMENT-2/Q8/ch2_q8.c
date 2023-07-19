#include <stdio.h>

double acc(double,double,double);

void main()
{
    double v_t,v_f,t,a,n_f,n_i,n_t;

    v_t=10;
    v_f=2.5;
    t=1;
    t=t/60;

    a=acc(v_t,v_f,t);

    n_i=10;
    n_f=0;

    n_t= (n_f-n_i)/a;

    printf("Acceleration= %lf mi/hr2\n",a);

    printf("Time= %lf hr\n",n_t);
}

double acc(double i,double f,double t)
{
    return (f-i)/t;
}