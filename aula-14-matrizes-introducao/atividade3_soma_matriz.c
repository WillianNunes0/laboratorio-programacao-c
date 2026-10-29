/*
 * Aula 14 - Matrizes em C: Introducao
 * Atividade 3: criar uma matriz 3x3, somar todos os seus elementos
 *              e apresentar o resultado.
 */
#include <stdio.h>

#define LINHAS  3
#define COLUNAS 3

int main(void) {
    int matriz[LINHAS][COLUNAS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int soma = 0;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            soma += matriz[i][j];
        }
    }

    printf("===== SOMA DOS ELEMENTOS =====\n");
    printf("Soma total: %d\n", soma);

    return 0;
}
