/*Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-
as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e
uma em cada linha. Use um único comando printf() para cada operação de escrita
das três variáveis.*/

#include <stdio.h>

int main()
{
    char ch;
    int num;
    float real;

    printf("digite um char: ");
    scanf("%c", &ch);
    printf("digite um int: ");
    scanf("%d", &num);
    printf("digite um float: ");
    scanf("%f", &real);
    
    printf("%c %d %f\n", ch, num, real);
    printf("%c\t%d\t%f\n", ch, num, real);
    printf("%c\n%d\n%f\n", ch, num, real);

    return 0;
}