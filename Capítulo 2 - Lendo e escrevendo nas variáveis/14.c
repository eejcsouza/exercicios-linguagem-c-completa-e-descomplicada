/*make a program that read three character of char type than print them one by line. use just one printf command to do this*/

#include <stdio.h>

int main()
{
    char ch1, ch2, ch3;

    printf("enter 3 characters:\n");
    /* doesn't work
    printf("char 1:");
    scanf("%c", &ch1);
    printf("char 2:");
    scanf("%c", &ch2);
    printf("char 3:");
    scanf("%c", &ch3);
    printf("char 1: %c\nchar 2: %c\nchar 3: %c\n", ch1, ch2, ch3);
    */

    //scanf with %c read just the next char in input buffer
    //when "enter" is typed, \n enters the buffer as a char
    //in the first char, everything works, but when enter is typer, it enters the next %c automatically because it was in buffer
    //in third step, everything works right again
    //to get around this, just add a space before %c to tell scanf discard all whitespace that enters the buffer

    printf("char 1: ");
    scanf(" %c", &ch1);
    printf("char 2: ");
    scanf(" %c", &ch2);
    printf("char 3: ");
    scanf(" %c", &ch3);
    printf("caracthers read:\n");
    printf("char 1: %c\nchar 2: %c\nchar 3: %c\n", ch1, ch2, ch3);

    return 0;
}