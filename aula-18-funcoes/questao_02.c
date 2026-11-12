/* Aula 18 - Questao 2: comparar o preco de dois produtos. */
#include <stdio.h>

double maiorPreco(double preco1, double preco2) {
    if (preco1 > preco2) return preco1;
    return preco2;
}

int main(void) {
    double preco1, preco2;
    printf("Digite o preco do primeiro produto: ");
    if (scanf("%lf", &preco1) != 1) return 1;
    printf("Digite o preco do segundo produto: ");
    if (scanf("%lf", &preco2) != 1) return 1;

    if (preco1 < 0 || preco2 < 0) {
        printf("Os precos nao podem ser negativos.\n");
        return 1;
    }
    if (preco1 == preco2) {
        printf("Os precos sao iguais: R$ %.2f\n", preco1);
    } else {
        printf("O maior preco e: R$ %.2f\n", maiorPreco(preco1, preco2));
    }
    return 0;
}
