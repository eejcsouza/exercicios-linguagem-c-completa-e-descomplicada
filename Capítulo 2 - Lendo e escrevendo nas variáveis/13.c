/*make a program that reads a character of type char and then prints it between double quotes. thus, if the character read is the letter A,
it should print "A"*/

#include <stdio.h>

int main()
{
    char ch;

    printf("enter a char: ");
    scanf("%c", &ch);
    printf("\"%c\"\n", ch);

    //to print double quotes use \" \"

    return 0;
}