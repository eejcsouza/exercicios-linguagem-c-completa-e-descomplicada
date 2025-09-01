/*make a program that reads a double value than prints it in a form scientific notation*/

#include <stdio.h>

int main()
{
    double real;

    printf("enter a double value: ");
    scanf("%lf", &real);
    printf("real: %e\n", real);

    //to print a float number in scientific notation uses %e

    return 0;
}