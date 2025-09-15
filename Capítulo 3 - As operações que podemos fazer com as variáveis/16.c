/*Escreva um programa que leia um número inteiro e mostre a multiplicação e a
divisão desse número por dois (utilize os operadores de deslocamento de bits).*/

#include <stdio.h>

int main()
{
    int numero;

    printf("digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("%d x 2 = %d\n%d / 2 = %d\n", numero, numero << 1, numero, numero >> 1);

    return 0;
}