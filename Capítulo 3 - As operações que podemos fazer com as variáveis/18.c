/*Elabore um programa que leia dois números inteiros e exiba o deslocamento, à
esquerda e à direita, do primeiro número pelo segundo.*/

#include <stdio.h>

int main()
{
    int intA, intB;

    printf("digite um valor inteiro: ");
    scanf("%d", &intA);
    printf("digite outro valor inteiro: ");
    scanf("%d", &intB);
    printf("%d << %d = %d\n", intA, intB, intA << intB);
    printf("%d >> %d = %d\n", intA, intB, intA >> intB);

    return 0;
}