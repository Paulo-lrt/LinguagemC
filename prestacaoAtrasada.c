#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("=========== Programa prestacao atrasada ===========\n\n");

    int periodo;
    float valorVencido, valorAtual, juros, jurosCalculo, valorJurosMes, valorJurosTotal;
    valorJurosMes = 1;
    valorJurosTotal = 1;

    printf(" Digite o valor da prestacao em atraso (R$): ");
    scanf("%f", &valorVencido);
    printf("\n");

    printf(" Digite a taxa de juros em (mensal):         ");
    scanf("%f", &juros);
    printf("\n");

    jurosCalculo = juros / 100;

    printf(" Digite o periodo de atraso (meses):         ");
    scanf("%i", &periodo);
    printf("\n\n\n");

    printf("=================== Resultado =====================\n\n");

    valorJurosMes = valorVencido * jurosCalculo;
    printf(" Valor da prestacao em atraso (R$):         %0.2f\n\n", valorVencido);

    printf(" Quantidade de meses em atraso:             %i\n\n", periodo);

    valorJurosTotal = valorJurosMes * periodo;
    printf(" Valor dos juros (R$):                      %0.2f\n\n", valorJurosTotal);

    valorAtual = valorVencido + valorJurosTotal;
    printf(" Valor da prestacao atual corrigida (R$):   %0.2f\n\n\n", valorAtual);

    printf("================= Fim do programa =================\n");

    return 0;
}