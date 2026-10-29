/*
 * Aula 15 - Matrizes em C: Aplicacoes praticas
 * Atividade: reserva de assentos no cinema (3 fileiras x 4 assentos).
 *            0 = disponivel | 1 = ocupado
 * O programa percorre a matriz e apresenta a quantidade de assentos
 * ocupados e disponiveis.
 */
#include <stdio.h>

#define FILEIRAS 3
#define ASSENTOS 4

int main(void) {
    int assentos[FILEIRAS][ASSENTOS] = {
        {0, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 0}
    };
    int ocupados = 0;
    int disponiveis = 0;

    printf("===== MAPA DOS ASSENTOS (0 = livre, 1 = ocupado) =====\n");
    for (int i = 0; i < FILEIRAS; i++) {
        printf("Fileira %d: ", i + 1);
        for (int j = 0; j < ASSENTOS; j++) {
            printf("%d ", assentos[i][j]);

            if (assentos[i][j] == 1) {
                ocupados++;
            } else {
                disponiveis++;
            }
        }
        printf("\n");
    }

    printf("\n===== RESUMO =====\n");
    printf("Assentos ocupados:    %d\n", ocupados);
    printf("Assentos disponiveis: %d\n", disponiveis);

    return 0;
}
