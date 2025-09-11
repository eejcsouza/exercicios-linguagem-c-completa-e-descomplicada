/*Faça um programa que leia um valor do tipo float e depois o imprima usando o
operador “%d”. Veja o que aconteceu.*/

#include <stdio.h>

int main()
{
    float real;

    printf("digite um valor de ponto flutuante: ");
    scanf("%f", &real);
    printf("valor lido: %d\n", real);

    //o terminal exibe uma mensagem de warning, mas compila e roda
    //exibe um valor errado

    return 0;
}