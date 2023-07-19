#include <stdio.h>

void main()
{
    double fahrenheit;
    double celsius;

    printf("Enter the temperature in fahrenheit: ");
    scanf("%lf",&fahrenheit);

    celsius= (5*(fahrenheit-32))/9;

    printf("Celsius: %f",celsius);
    
}