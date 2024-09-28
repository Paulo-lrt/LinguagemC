#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("=== Programa combustivel gasto ===\n\n");

    int autonomia = 12;
    float tempo, velocidade, distancia, consumo;

    printf("  Tempo da viagem (horas): ");
    scanf("%f", &tempo);
    printf("\n");

    printf("  Velocidade media (km/h): ");
    scanf("%f", &velocidade);
    printf("\n");

    distancia = tempo * velocidade;

    consumo = distancia / autonomia;

    printf("  Combustivel gasto (L): %0.2f\n\n", consumo);

    printf("========= Fim do programa =========\n");

    return 0;
}