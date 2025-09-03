/*make a program that read two integer values, than print them in the inverse order*/

#include <stdio.h>

int main()
{
    int number1, number2;

    printf("enter two integer values: ");
    scanf("%d %d", &number1, &number2);
    printf("numbers in inverse order: %d %d\n", number2, number1);

    return 0;
}           