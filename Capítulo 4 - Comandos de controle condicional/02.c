/*Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os
dois números forem iguais, imprima a mensagem “Números iguais”.*/

#include <stdio.h>

int main()
{
    float real1, real2;

    printf("digite um numero: ");
    scanf("%f", &real1);
    printf("digite outro numero: ");
    scanf("%f", &real2);

    if(real1 > real2)
        printf("%f e maior que %f\n", real1, real2);
    else if(real2 > real1)
        printf("%f e maior que %f\n", real2, real1);
    else if(real1 == real2)
        printf("os numeros sao iguais!\n");

    return 0;
}