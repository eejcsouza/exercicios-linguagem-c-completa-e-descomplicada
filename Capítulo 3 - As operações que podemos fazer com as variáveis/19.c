/*Elabore um programa que leia dois números inteiros e exiba o resultado das ope-
rações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles.*/

#include <stdio.h>

int main()
{
    int intA, intB;

    printf("digite um valor inteiro: ");
    scanf("%d", &intA);
    printf("digite outro valor inteiro: ");
    scanf("%d", &intB);
    printf("%d XOR %d = %d\n", intA, intB, intA ^ intB);
    printf("%d OR %d = %d\n", intA, intB, intA | intB);
    printf("%d AND %d = %d\n", intA, intB, intA & intB);

    return 0;
}