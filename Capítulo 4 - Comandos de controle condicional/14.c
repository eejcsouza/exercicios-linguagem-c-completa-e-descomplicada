/*Faça um programa para verificar se determinado número inteiro lido é divisível
por 3 ou 5, mas não simultaneamente pelos dois.*/

#include <stdio.h>

int main()
{
    int inteiro;

    printf("Digite um numero inteiro para saber se ele e divisivel por 3 ou po 5, mas nao simultaneamente pelos dois: ");
    scanf("%d", &inteiro);

    if((inteiro % 3 == 0) && (inteiro % 5 == 0))
        return 0;

    if(inteiro % 3 == 0)
        printf("%d e divisivel por 3!\n", inteiro);
    if(inteiro % 5 == 0) 
        printf("%d e divisivel por 5!\n", inteiro);

    return 0;
}