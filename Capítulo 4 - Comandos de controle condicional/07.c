/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada es-
tado possui uma taxa diferente de imposto sobre o produto. Faça um programa
em que o usuário entre com o valor e o estado de destino do produto e o pro-
grama retorne o preço final do produto acrescido do imposto do estado em que
ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem
de erro.
Estado  MG  SP  RJ  MS
Imposto 7%  12% 15% 8%
*/

#include <stdio.h>

int main()
{
    int estado = 1;
    float valorProduto;

    printf("Estado\tMG\tSP\tRJ\tMS\n");
    printf("Imposto\t7%%\t12%%\t15%%\t8%%\n");
    printf("Opcao\t1\t2\t3\t4\n");
    printf("Digite o estado a ser enviado o produto: ");

    do
    {
        if(estado < 1 || estado > 4)
            printf("Opcao invalida! Digite outra: ");
        scanf("%d", &estado);
    }
    while(estado < 1 || estado > 4);

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valorProduto);
    printf("Valor final do produto: R$ ");

    switch(estado)
    {
        case 1: printf("%.2f", valorProduto*1.07); break;
        case 2: printf("%.2f", valorProduto*1.12); break;
        case 3: printf("%.2f", valorProduto*1.15); break;
        case 4: printf("%.2f", valorProduto*1.08); break;
        default:
    }

    printf("\n");

    return 0;
}