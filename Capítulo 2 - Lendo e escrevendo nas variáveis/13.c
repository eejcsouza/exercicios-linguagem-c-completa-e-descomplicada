/*Faça um programa que leia um caractere do tipo char e depois o imprima entre
aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.*/

#include <stdio.h>

int main()
{
    char ch;

    printf("digite um char: ");
    scanf("%c", &ch);
    printf("\"%c\"\n", ch);

    //para imprimir aspas duplas usar \" \"

    return 0;
}