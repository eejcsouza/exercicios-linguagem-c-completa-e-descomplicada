/*Faça um programa que leia um número inteiro e depois o imprima usando o ope-
rador “%f”. Veja o que aconteceu.*/

#include <stdio.h>

int main()
{
    int num;

    printf("digite um valor inteiro: ");
    scanf("%d", &num);
    printf("valor lido: %f\n", num);

    //dá um warning, compila e roda o código, porém não exibe o número digitado, exibe 0.000000

    return 0;
}