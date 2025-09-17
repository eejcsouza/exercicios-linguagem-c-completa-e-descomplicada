/*Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float real;

    printf("digite um numero: ");
    scanf("%f", &real);

    if(real >= 0)
    {
        printf("%f² = %f\n", real, pow(real, 2));
        printf("√%f = %f\n", real, sqrt(real));
    }

    return 0;
}