/*
 * Aula 17 - Strings e Bibliotecas em C
 * 2a Questao: cadastro de produtos de uma loja de informatica.
 * Funcoes utilizadas: strlen(), strcmp(), strcpy(), strcat()
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char categoria[20];
    char copia[50];
    char descricao[100] = "Produto: ";

    printf("===== CADASTRO DE PRODUTOS =====\n\n");

    /* Entrada de dados */
    printf("Nome do produto: ");
    scanf("%49s", nome);

    printf("Categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoria);

    /* Processamento */
    strcpy(copia, nome);              /* copia o nome       */
    strcat(descricao, copia);         /* monta a descricao  */

    /* Saida */
    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", copia);
    printf("Caracteres: %zu\n", strlen(nome));

    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: Hardware\n");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("Categoria: Periferico\n");
    } else {
        printf("Categoria: Invalida\n");
    }

    printf("\nDescricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}
