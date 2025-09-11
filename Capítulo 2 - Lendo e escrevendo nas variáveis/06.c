/*Faça um programa que leia um valor do tipo double e depois o imprima na forma
de notação científica.*/

#include <stdio.h>

int main()
{
    double real;

    printf("digite um valor de ponto flutuante com grande precisão: ");
    scanf("%lf", &real);
    printf("real (precisão definida manualmente): %.15e\n", real);
    printf("real (precisão definida automaticamente): %g\n", real);

    //para exibir um valor float em notação científica, usar o especificador de tipo %e
    //%.15e exibe 15 casas decimais
    //%g automaticamente escolhe entre precisão de %f e %e para uma melhor representação
    
    return 0;
}