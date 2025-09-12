/*Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.*/

#include <stdio.h>

int main()
{
    float real1, real2, real3, real4;

    printf("digite quatro valores de ponto flutuante:\n");
    printf("valor 1: ");
    scanf("%f", &real1);
    printf("valor 2: ");
    scanf("%f", &real2);
    printf("valor 3: ");
    scanf("%f", &real3);
    printf("valor 4: ");
    scanf("%f", &real4);
    printf("a media aritmetica dos quatro valores e: %f\n", (real1+real2+real3+real4)/4);

    return 0;
}