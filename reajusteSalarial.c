#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("======== Programa rajuste salarial ========\n\n");

    float salarioInicial, salarioFinal, percentualAumento, valorAumento;

    printf("  Digite o salario atual (R$):    ");
    scanf("%f", &salarioInicial);

    printf("  Digite o percentual de aumento:  ");
    scanf("%f", &percentualAumento);

    valorAumento = salarioInicial * percentualAumento / 100;

    printf("\n");

    printf("======== Resultado ========================\n\n");

    printf("  Salario atual (R$):            %0.2f\n\n", salarioInicial);

    printf("  Valor do aumento (R$):         %0.2f\n", valorAumento);

    salarioFinal = valorAumento + salarioInicial;

    printf("  Novo salario (R$):             %0.2f\n\n", salarioFinal);

    printf("======== Fim do programa ==================\n");

    return 0;
}