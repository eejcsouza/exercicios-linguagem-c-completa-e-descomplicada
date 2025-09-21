/*Escreva um programa que, dada a idade de um nadador, o classifique em uma das
seguintes categorias:
Categoria   Idade
Infantil A  5-7
Infantil B  8-10
Juvenil A   11-13
Juvenil b   14-17
Sênior      maiores de 18 anos
*/

#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a idade de um nadador: ");
    scanf("%d", &idade);

    printf("A categoria do nadador e: ");
    if(idade >= 5 && idade <= 7)
        printf("Infantil A\n");
    if(idade >= 8 && idade <= 10)
        printf("Infantil B\n");
    if(idade >= 11 && idade <= 13)
        printf("Juvenil A\n");
    if(idade >= 14 && idade <= 17)
        printf("Juvenil B\n");
    if(idade >= 18)
        printf("Senior\n");
    
    return 0;
}