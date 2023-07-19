#include <stdio.h>

void rectangle();
void triangle();
void circle();
void intersect();
void base();

void main()
{
    triangle();
    rectangle();
    intersect();

    printf("\n\n\n");

    circle();
    base();
    rectangle();
    intersect();

    printf("\n\n\n");

    circle();
    triangle();
    intersect();
}

void triangle()
{
    intersect();
    base();
}

void rectangle()
{
    printf("  |       | \n");
    printf("  |       | \n");
    printf("  |       | \n");
    base();
}

void intersect()
{
    printf("     /\\      \n");
    printf("    /  \\     \n");
    printf("   /    \\    \n");
    printf("  /      \\   \n");
}

void base()
{
    printf("  ---------  \n");
}

void circle()
{
    printf("     * *   \n");
    printf("   *     * \n");
    printf("     * *   \n");
}