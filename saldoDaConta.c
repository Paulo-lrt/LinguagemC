#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("======== Programa Saldo da Conta ========\n\n");

    int saldoAnterior, saldoAtual;

    printf(" Digite seu saldo anterior -> R$ ");
    scanf("%i", &saldoAnterior);

    printf("\n");

    saldoAtual = saldoAnterior + saldoAnterior * 5 / 100;

    printf(" Seu saldo atual eh de     -> R$ %i\n\n", saldoAtual);

    printf("=========== Fim do Programa =============\n");

    return 0;
}