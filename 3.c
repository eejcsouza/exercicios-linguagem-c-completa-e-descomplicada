/*Escreva um programa que leia um número inteiro e depois imprima a mensagem
“Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().*/

#include <stdio.h>

int main()
{
    int number;

    printf("enter an integer value: ");
    scanf("%d", &number);
    printf("read value: %d\n", number);

    return 0;
}