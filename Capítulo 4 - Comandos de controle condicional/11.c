/*Faça um programa que informe o mês de acordo com o número digitado pelo
usuário. Exemplo: Entrada = 4. Saída = Abril.*/

#include <stdio.h>

int main()
{
    int mes;

    printf("Digite o numero de um mes: ");
    scanf("%d", &mes);

    switch(mes)
    {
        case 1: printf("Mes %d = Janeiro\n", mes); break;
        case 2: printf("Mes %d = Fevereiro\n", mes); break;
        case 3: printf("Mes %d = Marco\n", mes); break;
        case 4: printf("Mes %d = Abril\n", mes); break;
        case 5: printf("Mes %d = Maio\n", mes); break;
        case 6: printf("Mes %d = Junho\n", mes); break;
        case 7: printf("Mes %d = Julho\n", mes); break;
        case 8: printf("Mes %d = Agosto\n", mes); break;
        case 9: printf("Mes %d = Setembro\n", mes); break;
        case 10: printf("Mes %d = Outubro\n", mes); break;
        case 11: printf("Mes %d = Novembro\n", mes); break;
        case 12: printf("Mes %d = Dezembro\n", mes); break;
        default: printf("Valor invalido!\n");
    }

    return 0;
}