/*Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
h = raiz quadrada da soma dos catetos
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa
através da fórmula dada. Imprima o resultado.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float catetoA, catetoB;

    printf("digite os valores dos catetos de um triangulo retangulo:\n");
    printf("cateto A: ");
    scanf("%f", &catetoA);
    printf("cateto B: ");
    scanf("%f", &catetoB);
    printf("a hipotenusa deste triangulo vale: %f\n", sqrt(pow(catetoA, 2) + pow(catetoB, 2)));

    return 0;
}