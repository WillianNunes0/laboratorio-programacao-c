/* Aula 18 - Questao 6: calcular fatorial de um numero de 0 a 12. */
#include <stdio.h>

int calcularFatorial(int numero) {
    int resultado = 1;

    for (int i = 2; i <= numero; i++) {
        resultado *= i;
    }

    return resultado;
}

int main(void) {
    int numero;

    printf("Digite um numero inteiro de 0 a 12: ");
    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }
    if (numero < 0 || numero > 12) {
        printf("Erro: informe um numero entre 0 e 12.\n");
        return 1;
    }

    printf("Fatorial de %d = %d\n", numero, calcularFatorial(numero));
    return 0;
}
