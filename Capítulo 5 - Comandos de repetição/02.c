/*Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem decrescente.*/

/*Nota: Acredito que o autor queira dizer: "de N até 0"*/

#include <stdio.h>

int main()
{
    int n;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Valor invalido!\n");
        return 1;
    }

    while(n >= 0) printf("%d\n", n--);  // Decremento na própria variável lida

    return 0;
}