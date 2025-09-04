/*make a program that ask the user to enter with the day, month and year. than print the read values separated by /*/

#include <stdio.h>

int main()
{
    int day, month, year;

    printf("enter the date:\n");
    printf("day: ");
    scanf("%d", &day);
    printf("month: ");
    scanf("%d", &month);
    printf("year: ");
    scanf("%d", &year);
    printf("date: %d/%d/%d\n", day, month, year);

    return 0;
}