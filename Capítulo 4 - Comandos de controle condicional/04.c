/*Faça um programa que leia o salário de um trabalhador e o valor da prestação de
um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”*/

#include <stdio.h>

int main()
{
    float salario, emprestimo;

    printf("digite o salario de um trabalhador: R$ ");
    scanf("%f", &salario);
    printf("digite o valor da prestacao do emprestimo: R$ ");
    scanf("%f", &emprestimo);
    emprestimo > salario*0.2 ? printf("empresimo nao concedido\n") : printf("emprestimo concedido\n");

    return 0;
}