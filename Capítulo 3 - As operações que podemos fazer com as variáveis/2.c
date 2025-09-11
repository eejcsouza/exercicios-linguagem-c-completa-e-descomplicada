/*Faça um programa que leia um número real e imprima a quinta parte desse nú-
mero.*/

#include <stdio.h>

int main()
{
    float real;

    printf("digite um numero de ponto flutuante: ");
    scanf("%f", &real);
    printf("a quinta parte de %f é: %f\n", real, real/5);

    return 0;
}