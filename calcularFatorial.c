#include <stdio.h>

int main ()
{
    int num1;
    int num2;
    int fatorial = 1;

    printf("-------- Programa calcula fatorial --------\n\n");

    printf("Digite o numero que voce quer o fatorial: ");
    scanf("%i", &num1);

    num2 = num1;

    printf("\n");

    for (num1; num1 >= 1; --num1)
    {
        fatorial *= num1;
    }

    printf("O fatorial de %i eh: %i\n\n", num2, fatorial);

    printf("------------- Fim do programa -------------\n");

    return 0;
}