#include <stdio.h>

void rectangle();
void triangle();

void main()
{
    triangle();
    rectangle();

    printf("  ------------ \n\n\n");

    triangle();
    rectangle();
}

void triangle()
{
    printf("      /\\      \n");
    printf("     /  \\     \n");
    printf("    /    \\    \n");
    printf("   /      \\   \n");
    printf("  /________\\  \n\n\n");
}

void rectangle()
{
    printf("  ------------ \n");
    printf("  |          | \n");
    printf("  |          | \n");
    printf("  |          | \n");
    printf("  ------------ \n\n\n");
}