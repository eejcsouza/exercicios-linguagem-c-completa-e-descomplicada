/*Escreva um programa que leia um número inteiro e mostre o seu complemento
bit a bit.*/

#include <stdio.h>

int main()
{
    unsigned int uInt;
    int inteiro;

    printf("digite um numero inteiro sem sinal: ");
    scanf("%u", &uInt);
    printf("digite um numero inteiro: ");
    scanf("%d", &inteiro);
    printf("~%u = %u\n", uInt, ~uInt);          //para unsigned int: ~N = (UINT_MAX - N)
    printf("~%d = %d\n", inteiro, ~inteiro);    //para signed int: N = -(N + 1)

    return 0;
}