/*Faça um programa que leia dois números e mostre qual deles é o maior.*/

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
    else
        printf("%f e maior que %f\n", real2, real1);

    return 0;
}