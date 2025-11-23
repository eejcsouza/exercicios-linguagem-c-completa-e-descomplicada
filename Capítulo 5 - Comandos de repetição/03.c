/*Faça um programa que leia um número inteiro N e depois imprima os N primei-
ros números naturais ímpares.*/

#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    for(int i = 1; count < n; i += 2, count++)
        printf("%d\n", i);

    return 0;
}