/*Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7
e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1,
segunda-feira, se 2, e assim por diante.*/

#include <stdio.h>

int main()
{
    int dia;

    printf("Digite um numero para um dia da semana: ");
    scanf("%d", &dia);

    switch(dia)
    {
        case 1: 
            printf("Dia %d = Domingo\n", dia); 
            break;
        case 2: 
            printf("Dia %d = Segunda-feira\n", dia);
            break;
        case 3: 
            printf("Dia %d = Terca-feira\n", dia);
            break;
        case 4: 
            printf("Dia %d = Quarta-feira\n", dia);
            break;
        case 5: 
            printf("Dia %d = Quinta-feira\n", dia);
            break;
        case 6: 
            printf("Dia %d = Sexta\n", dia);
            break;
        case 7: 
            printf("Dia %d = Sabado\n", dia);
            break;
        default: printf("Dia invalido!\n");
    }

    return 0;
}