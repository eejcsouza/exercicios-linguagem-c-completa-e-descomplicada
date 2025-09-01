/*Escreva um programa que leia um número inteiro e depois imprima a mensagem
“Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().*/

#include <stdio.h>

int main()
{
    int value;

    printf("enter a integer value: ");
    scanf("%d", &value);
    printf("read value: %d\n", value);

    return 0;
}