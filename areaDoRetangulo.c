#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("====== Programa perimetro e area do retangulo ======\n\n");

    int base, altura, perimetro, area;

    printf(" Digite o valor da base do retangulo (cm):    ");
    scanf("%i", &base);

    printf(" Digite o valor da altura do retangulo (cm):  ");
    scanf("%i", &altura);

    perimetro = base + base + altura + altura;
    area = base * altura;

    printf("\n");

    printf("====== Resultados ==================================\n\n");

    printf(" O valor do perimetro eh:                    %i cm\n", perimetro);
    printf(" O valor da area eh:                         %i cm2\n\n", area);

    printf("====== Fim do Programa =============================\n");

    return 0;
}