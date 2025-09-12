/*Faça um programa que leia três valores inteiros e mostre sua soma.*/

#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("digite tres valores inteiros:\n");
    printf("valor 1: ");
    scanf("%d", &n1);
    printf("valor 2: ");
    scanf("%d", &n2);
    printf("valor 3: ");
    scanf("%d", &n3);
    printf("a soma dos tres valores e: %d\n", n1+n2+n3);

    return 0;
}