/*Faça um programa que leia três caracteres do tipo char e depois os imprima um
em cada linha. Use um único comando printf() para isso.*/

#include <stdio.h>

int main()
{
    char ch1, ch2, ch3;

    printf("enter 3 characters:\n");
    /*não funciona
    printf("char 1:");
    scanf("%c", &ch1);
    printf("char 2:");
    scanf("%c", &ch2);
    printf("char 3:");
    scanf("%c", &ch3);
    printf("char 1: %c\nchar 2: %c\nchar 3: %c\n", ch1, ch2, ch3);
    */

    //scanf com %c lê sempre o próximo caractere no buffer de entrada
    //quando é digitado "enter", \n entra no buffer como um char
    //para o primeiro caso, a variável é armazenada corretamente, no segundo não, e no terceiro a variával volta a ser armazenada corretamente
    //pra contornar isso, adiciona-se um espaço antes do %c, pra dizer ao scanf descartar os espaços em branco para não entrar no buffer

    printf("char 1: ");
    scanf(" %c", &ch1);
    printf("char 2: ");
    scanf(" %c", &ch2);
    printf("char 3: ");
    scanf(" %c", &ch3);
    printf("caracteres lidos:\n");
    printf("char 1: %c\nchar 2: %c\nchar 3: %c\n", ch1, ch2, ch3);

    return 0;
}