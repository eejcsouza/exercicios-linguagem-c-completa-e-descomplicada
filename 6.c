/*make a program that reads a double value than prints it in a form scientific notation*/

#include <stdio.h>

int main()
{
    double real;

    printf("enter a double value: ");
    scanf("%lf", &real);
    printf("real (high precision): %.15e\n", real);
    printf("real (auto precision): %g\n", real);

    //to print a float number in scientific notation uses %e
    //%.15e shows 15 decimal places for higher precision
    //%g automatically chooses between %f and %e for best representation

    return 0;
}