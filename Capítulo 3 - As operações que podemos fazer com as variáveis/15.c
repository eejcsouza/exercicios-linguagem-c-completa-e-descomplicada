/*Faça um programa para ler um número inteiro positivo de três dígitos. Em segui-
da, calcule e mostre o número formado pelos dígitos invertidos do número lido.
Exemplo:
Número lido = 123
Número gerado = 321*/

#include <stdio.h>

int main()
{
    int numero, unidades, dezenas, centenas;

    printf("digite um numero inteiro de tres digitos: ");
    scanf("%d", &numero);

    unidades = numero/100;          // 123/100 = 1, sobra 23 (unidades)
    dezenas = numero%100;           // 123 % 100 = 23 (dezenas parcial)
    centenas = dezenas%10;          // 23 % 10 = 3 (centenas parcial)
    dezenas -= centenas;            // 23 - 3 = 20 (dezenas)
    centenas *= 100;                // 3 x 100 = 300 (centenas)
    numero = unidades + dezenas + centenas;

    printf("o numero invertido e: %d\n", numero);

    return 0;
}