#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("====== Programa calcula desconto ==========\n\n");

    float precoProduto1, precoProduto2, desconto, precoDesconto;
    char nomeProduto[30];

    printf(" Digite o nome do produto: ");
    fgets(nomeProduto, 30, stdin);
    printf("\n");

    printf(" Digite o preco do produto (R$):     ");
    scanf("%f", &precoProduto1);

    printf(" Digite o percentual do desconto:    ");
    scanf("%f", &desconto);

    precoDesconto = precoProduto1 * desconto / 100;

    printf("\n");

    printf("====== Resultado ==========================\n\n");

    printf(" Nome do produto: %s\n", nomeProduto);

    printf(" Valor do desconto (R$):             %0.2f\n", precoDesconto);

    precoProduto2 = precoProduto1 - precoDesconto;

    printf(" Valor do produto com desconto (R$): %0.2f\n\n", precoProduto2);

    printf("====== Fim do Programa ====================\n");

    return 0;
}