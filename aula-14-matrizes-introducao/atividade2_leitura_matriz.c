/*
 * Aula 14 - Matrizes em C: Introducao
 * Atividade 2: ler quatro valores digitados pelo usuario, armazena-los
 *              em uma matriz 2x2 e exibir a matriz.
 */
#include <stdio.h>

#define LINHAS  2
#define COLUNAS 2

int main(void) {
    int matriz[LINHAS][COLUNAS];

    /* Leitura */
    printf("===== LEITURA DA MATRIZ 2x2 =====\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Digite o valor de [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    /* Exibicao */
    printf("\n===== MATRIZ DIGITADA =====\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
