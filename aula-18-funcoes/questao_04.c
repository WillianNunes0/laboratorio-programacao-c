/* Aula 18 - Questao 4: duplicar o estoque. */
#include <stdio.h>

long long dobro(int quantidade) {
    return (long long)quantidade * 2;
}

int main(void) {
    int quantidade;
    printf("Digite a quantidade inicial em estoque: ");
    if (scanf("%d", &quantidade) != 1) return 1;
    if (quantidade < 0) {
        printf("A quantidade nao pode ser negativa.\n");
        return 1;
    }
    printf("Quantidade inicial: %d\n", quantidade);
    printf("Quantidade final: %lld\n", dobro(quantidade));
    return 0;
}
