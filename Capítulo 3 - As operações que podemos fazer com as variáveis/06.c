/*Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a veloci-
dade em km/h e M em m/s.*/

#include <stdio.h>

int main()
{
    float velocidade;

    printf("digite uma velocidade em km/h: ");
    scanf("%f", &velocidade);
    printf("%f km/h equivale a %f m/s\n", velocidade, velocidade/3.6);

    return 0;
}