/*A importância de R$780.000,00 será dividida entre três ganhadores de um con-
curso, sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.*/

#include <stdio.h>

const float importancia = 780000.00;
const float porcentagemPrimeiro = 0.46;
const float porcentagemSegundo = 0.32;
const float porcentagemTerceiro = 0.22;

int main()
{
    printf("valor da importancia: R$ %.2f\n", importancia);
    printf("premiacao do primeiro ganhador: R$ %.2f\n", importancia*porcentagemPrimeiro);
    printf("premiacao do segundo ganhador: R$ %.2f\n", importancia*porcentagemSegundo);
    printf("premiacao do terceiro ganhador: R$ %.2f\n", importancia*porcentagemTerceiro);

    return 0;
}