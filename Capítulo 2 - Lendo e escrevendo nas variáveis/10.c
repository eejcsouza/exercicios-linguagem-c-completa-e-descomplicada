/*Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).*/

#include <stdio.h>

int main()
{
    int dia, mes, ano;

    printf("digite uma data:\n");
    printf("dia: ");
    scanf("%d", &day);
    printf("mes: ");
    scanf("%d", &month);
    printf("ano: ");
    scanf("%d", &year);
    printf("dia: %d/%d/%d\n", dia, mes, ano);

    return 0;
}