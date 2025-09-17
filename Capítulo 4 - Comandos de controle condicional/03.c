/*Faça um programa que leia um número inteiro e verifique se esse número é par
ou ímpar.*/

#include <stdio.h>

int main()
{
    int inteiro;

    printf("digite um valor inteiro: ");
    scanf("%d", &inteiro);
    inteiro % 2 == 0 ? printf("%d e par\n", inteiro) : printf("%d e impar\n", inteiro);

    return 0;
}