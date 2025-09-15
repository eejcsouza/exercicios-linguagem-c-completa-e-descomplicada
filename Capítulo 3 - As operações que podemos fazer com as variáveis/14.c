/*Faça um programa que converta uma letra maiúscula em letra minúscula. Use a
tabela ASCII para isso.*/

#include <stdio.h>

int main()
{
    char letraMaiuscula;

    printf("digite uma letra maiuscula: ");
    scanf("%c", &letraMaiuscula);
    printf("%c e %c minuscula\n", letraMaiuscula + 32, letraMaiuscula);

    return 0;
}