/*Faça um programa que mostre ao usuário um menu com quatro opções de ope-
rações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma
das opções, e o seu programa pede dois valores numéricos e realiza a operação,
mostrando o resultado.*/

#include <stdio.h>

int main()
{
    int operacao;
    float real1, real2;

    printf("Ecolha uma operacao para ser feita entre dois numeros:\n");
    printf("Opcao\tOperacao\n");
    printf("1\tAdicao\n2\tSubtracao\n3\tMultiplicacao\n4\tDivisao\n");
    printf("Opcao: ");
    scanf("%d", &operacao);

    printf("Valor 1: ");
    scanf("%f", &real1);
    printf("Valor 2: ");
    scanf("%f", &real2);

    switch(operacao)
    {
        case 1:
            printf("%f + %f = %f\n", real1, real2, real1+real2);
            break;
        case 2:
            printf("%f - %f = %f\n", real1, real2, real1-real2);
            break;
        case 3: 
            printf("%f x %f = %f\n", real1, real2, real1*real2);
            break;
        case 4:
            printf("%f/%f = %f\n", real1, real2, real1/real2);
            break;
        default:
            printf("Valores invalidos!\n");
        }

    return 0;
}