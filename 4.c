/*Faça um programa que leia um número inteiro e depois o imprima usando o ope-
rador “%f”. Veja o que aconteceu.*/

#include <stdio.h>

int main()
{
    int number;

    printf("enter an integer value: ");
    scanf("%d", &number);
    printf("read number: %f\n", number);

    //dá um warning, compila e roda o código, porém não printa o número digitado, printa 0.000000

    return 0;
}