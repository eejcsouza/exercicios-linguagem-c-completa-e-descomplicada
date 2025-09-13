/*Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
conversão é R = G ∗ π/180, sendo G o ângulo em graus e R em radianos e π =
3.141592.*/

#include <stdio.h>
#define PI 3.141592

int main()
{
    float anguloGraus;

    printf("digite um angulo em graus: ");
    scanf("%f", &anguloGraus);
    printf("%f ° equivale a %f RAD\n", anguloGraus, anguloGraus*PI/180);

    return 0;
}