/*Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua
idade e do ano atual.*/

#include <stdio.h>

int main()
{
    int idade, anoAtual;

    printf("digite sua idade: ");
    scanf("%d", &idade);
    printf("digite o ano atual: ");
    scanf("%d", &anoAtual);
    printf("seu ano de nascimento e: %d\n", anoAtual-idade);

    return 0;
}