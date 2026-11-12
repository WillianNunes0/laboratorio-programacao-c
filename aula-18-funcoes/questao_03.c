/* Aula 18 - Questao 3: verificar se um numero e par ou impar. */
#include <stdio.h>

int verificarPar(int numero) {
    return numero % 2 == 0 ? 1 : 0;
}

int main(void) {
    int numero;
    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) != 1) return 1;

    if (verificarPar(numero) == 1) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }
    return 0;
}
