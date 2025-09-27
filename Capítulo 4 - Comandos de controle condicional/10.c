/*Faça um programa que leia três números inteiros positivos e efetue o cálculo de
uma das seguintes médias de acordo com um valor numérico digitado pelo usuá-
rio e mostrado na tabela a seguir:
Número digitado     Média
1                   Geométrica: x*y*z
2                   Ponderada: (x + 2*y + 3*z)/6
3                   Harmônica: 1/(1/x + 1/y + 1/z)
4                   Aritmética: (x+y+z)/3
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int opcao;
    unsigned int int1, int2, int3;

    printf("Digite um tipo de media a ser calculada com tres valores inteiros positivos:\n");
    printf("Opcao\tMedia\n1\tGeometrica\n2\tPonderada\n3\tHarmonica\n4\tAritmetica\nOpcao: ");
    scanf("%d", &opcao);

    printf("Digite tres valores inteiros positivos:\n");
    printf("Valor 1: ");
    scanf("%u", &int1);
    printf("Valor 2: ");
    scanf("%u", &int2);
    printf("Valor 3: ");
    scanf("%u", &int3);

    switch(opcao)
    {
        case 1: printf("A media geometrica de %d, %d e %d e: %f\n", int1, int2, int3, pow((int1*int2*int3), 1.0/3.0)); break;
        case 2: printf("A media ponderada de %d, %d e %d e: %f\n", int1, int2, int3, (int1 + int2*2 + int3*3)/6.0); break;
        case 3: printf("A media harmonica entre %d, %d e %d e: %f\n", int1, int2, int3, 1.0/((1.0/int1)+(1.0/int2)+(1.0/int3))); break;
        case 4: printf("A media artimetica entre %d, %d e %d e: %f\n", int1, int2, int3, (int1*int2*int3)/3.0); break;
        default: printf("Opcao invalida!\n");
    }

    return 0;
}