/*Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida,
imprima o valor correspondente em dólares.*/

#include <stdio.h>

int main()
{
    float reais, dolar;

    printf("digite a cotacao do dolar: R$ ");
    scanf("%f", &dolar);
    printf("digite um valor em reais: R$ ");
    scanf("%f", &reais);
    printf("R$ %.2f = $ %.2f\n", reais, reais/dolar);

    return 0;
}