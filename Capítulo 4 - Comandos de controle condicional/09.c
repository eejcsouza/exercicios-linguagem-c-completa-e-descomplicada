/*Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
tabela a seguir, verifique e mostre qual a classificação dessa pessoa.
                                 Peso
Altura      Até 60      Entre 60-90 (inclusive)     Acima de 90  
<1,20       A           D                           G
1,20-1,70   B           E                           H
>1,70       C           F                           I
*/

#include <stdio.h>

int main()
{
    float altura, peso;

    printf("Digite sua algura em metros: ");
    scanf("%f", &altura);
    printf("Digite seu peso em quilogramas: ");
    scanf("%f", &peso);
    printf("Classificacao: ");

    if(altura < 1.2)
    {
        if(peso < 60)  printf("A\n");
        if(peso >= 60 && peso <= 90)    printf("D\n");
        if(peso > 90)   printf("G\n");
    }
    if(altura >= 1.2 && altura <= 1.7)
    {
        if(peso < 60)  printf("B\n");
        if(peso >= 60 && peso <= 90)    printf("E\n");
        if(peso > 90)   printf("H\n");
    }
    if(altura > 1.7)
    {
        if(peso < 60)  printf("C\n");
        if(peso >= 60 && peso <= 90)    printf("F\n");
        if(peso > 90)   printf("I\n");
    }

    return 0;
}