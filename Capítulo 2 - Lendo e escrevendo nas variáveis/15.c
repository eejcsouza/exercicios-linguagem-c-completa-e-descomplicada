/*write a program that reads three variables: char, int and float. right away, print them in three different ways: separated by spaces, 
separated by a horizontal tab and once per line. use a single printf() command for each write operation of the three variables*/

#include <stdio.h>

int main()
{
    char ch;
    int num;
    float real;

    printf("enter a char: ");
    scanf("%c", &ch);
    printf("enter an int: ");
    scanf("%d", &num);
    printf("enter a float: ");
    scanf("%f", &real);
    
    printf("%c %d %f\n", ch, num, real);
    printf("%c\t%d\t%f\n", ch, num, real);
    printf("%c\n%d\n%f\n", ch, num, real);

    return 0;
}