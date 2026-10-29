/*
 * Aula 16 - Strings em C: Introducao e Aplicacoes
 * Desafio: contador de caracteres.
 * Le uma palavra, percorre seus caracteres com for e apresenta a
 * quantidade de letras digitadas (sem utilizar strlen).
 */
#include <stdio.h>

#define TAM 50

int main(void) {
    char palavra[TAM];
    int contador = 0;

    printf("===== CONTADOR DE CARACTERES =====\n");
    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }

    printf("Quantidade de letras digitadas: %d\n", contador);

    return 0;
}
