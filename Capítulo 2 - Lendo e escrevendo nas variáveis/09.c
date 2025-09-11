/*Faça um programa que leia dois valores do tipo float. Use um único comando de
leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles
foram lidos.*/

#include <stdio.h>

int main()
{
    float real1, real2;

    printf("digite dois valores de ponto flutuante:\n");
    scanf("%f %f", &real1, &real2);
    printf("valor 2: %f\nvalor 1: %f\n", real2, real1);

    return 0;
}