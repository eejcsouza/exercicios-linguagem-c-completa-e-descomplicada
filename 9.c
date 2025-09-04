/*make a program that read two float values. use just one read command to do this. than, print the read values in inverse order*/

#include <stdio.h>

int main()
{
    float real1, real2;

    printf("enter two float values:\n");
    scanf("%f %f", &real1, &real2);
    printf("value 2: %f\nvalue 1: %f\n", real2, real1);

    return 0;
}