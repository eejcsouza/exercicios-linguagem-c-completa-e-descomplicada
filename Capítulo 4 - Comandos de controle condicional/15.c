/* Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
calculadas como
em que Δ = b2 – 4 * a * c e ax2 + bx + c = 0 representa uma equação do segundo
grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensa-
gem “Não é equação de segundo grau”. Do contrário, imprima:
• Se Δ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
• Se Δ = 0 existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
• Se Δ > 0, existem duas raízes reais. Imprima as raízes. */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta;

    printf("Digite os coeficientes de uma equacao de segundo grau para ter suas raizes\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if(delta < 0)
        printf("A equacao nao possui raizes reais!\n");
    if(delta == 0)
    {
        float x = (-b)/(2 * a);
        printf("A equacao possui duas raizes reais e iguais!\n");
        printf("x = %f\n", x);
    }
    if(delta > 0)
    {
        float x1, x2, raizDelta;
        raizDelta = sqrt(delta);
        x1 = (-b + raizDelta)/(2 * a);
        x2 = (-b - raizDelta)/(2 * a);
        printf("A equacao possui duas raizes reais e distintas!\n");
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }

    return 0;
}