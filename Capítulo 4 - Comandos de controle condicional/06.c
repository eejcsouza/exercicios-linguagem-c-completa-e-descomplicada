/*Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7*/

#include <stdio.h>

int main()
{   
    char sexo;
    float h;

    printf("selecione seu sexo:\nfeminino: f\tmasculino: m\n");
    scanf("%c", &sexo);
    printf("digite sua altura: ");
    scanf("%f", &h);

    printf("seu peso ideal e: ");
    if(sexo == 'f')
        printf("%.2f kg\n", 62.1*h - 44.7);
    if(sexo == 'm')
        printf("%.2f kg\n", 72.7*h - 58);

    return 0;
}