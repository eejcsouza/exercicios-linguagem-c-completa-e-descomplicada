/*Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
O volume de um cilindro circular é calculado por meio da seguinte fórmula:
V = π * raio^2 * altura,
em que π = 3.141592*/

#include <stdio.h>
#define PI 3.141592

int main()
{
    float raioCilindro, alturaCilindro;

    printf("digite o valor do raio de um cilindro: ");
    scanf("%f", &raioCilindro);
    printf("digite o valor da altura desse cilindro: ");
    scanf("%f", &alturaCilindro);
    printf("o volume de um cilindro de raio %f e altura %f e %f\n", raioCilindro, alturaCilindro, PI*raioCilindro*raioCilindro*alturaCilindro);

    return 0;
}