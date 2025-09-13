/*Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspon-
dente. A área do círculo é A = π * raio^2, sendo π = 3.141592.*/

#include <stdio.h>
#define PI 3.141592

int main()
{
    float raio;

    printf("digite o valor do raio de um circulo: ");
    scanf("%f", &raio);
    printf("a area de um circulo de raio %f e %f\n", raio, PI*raio*raio);

    return 0;
}