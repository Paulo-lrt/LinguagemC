#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("========= Centigrados para Fahrenheit ==========\n\n");

    float cent, fahr, num1, num2;

    printf(" Digite a temperatura em graus centigrados: ");
    scanf("%f", &cent);

    num1 = 9 * cent;
    num2 = num1 + 160;
    fahr = num2 / 5;

    printf("\n");

    printf(" A temperatura em graus fahrenheit eh: %0.2f\n\n", fahr);

    printf("=============== Fim do Programa ================\n");

    return 0;
}