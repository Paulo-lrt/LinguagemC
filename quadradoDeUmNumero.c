#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("== Programa quadrado de um numero ==\n\n");

    int num1, quadrado;

    printf(" Digite o numero:         ");
    scanf("%i", &num1);

    printf("\n");

    quadrado = num1 * num1;

    printf(" O quadrado de %i eh:   %i\n\n", num1, quadrado);

    printf("==== Fim do Programa ===============\n\n");

    return 0;
}