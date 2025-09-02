/*make a program that read a char, than print it as a int value*/

#include <stdio.h>

int main()
{
    char ch;

    printf("enter a char: ");
    scanf("%c", &ch);
    printf("ch: %d\n", ch);

    return 0;
}