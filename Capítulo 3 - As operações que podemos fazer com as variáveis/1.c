/*Faça um programa que leia um número inteiro e retorne seu antecessor e seu su-
cessor.*/

#include <stdio.h>

int main()
{
    int num;

    printf("digite um numero inteiro: ");
    scanf("%d", &num);
    printf("antecessor de %d: %d\n", num, num-1);
    printf("sucessor de %d: %d\n", num, num+1);

    return 0;
}