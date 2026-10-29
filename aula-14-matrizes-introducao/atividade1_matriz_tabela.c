/*
 * Aula 14 - Matrizes em C: Introducao
 * Atividade 1: criar uma matriz 2x2 com valores definidos no codigo
 *              e exibi-la em formato de tabela.
 */
#include <stdio.h>

#define LINHAS  2
#define COLUNAS 2

int main(void) {
    int matriz[LINHAS][COLUNAS] = {
        {10, 20},
        {30, 40}
    };

    printf("===== MATRIZ 2x2 =====\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
