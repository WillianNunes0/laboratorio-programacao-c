/*
 * Aula 17 - Strings e Bibliotecas em C
 * 3a Questao: identificacao academica de estudantes.
 * Funcoes utilizadas: strlen(), strcmp(), strcpy(), strcat()
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char codigoCurso[10];
    char copia[50];
    char mensagem[100] = "Ola, ";

    printf("===== IDENTIFICACAO ACADEMICA =====\n\n");

    /* Entrada de dados */
    printf("Nome do estudante: ");
    scanf("%49s", nome);

    printf("Codigo do curso (CC ou SI): ");
    scanf("%9s", codigoCurso);

    /* Processamento */
    strcpy(copia, nome);              
    strcat(mensagem, copia);      
    strcat(mensagem, "!");

    /* Saida */
    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s\n", copia);

    if (strcmp(codigoCurso, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else if (strcmp(codigoCurso, "SI") == 0) {
        printf("Curso: Sistemas de Informacao\n");
    } else {
        printf("Curso: Codigo invalido\n");
    }

    printf("Caracteres no nome: %zu\n", strlen(nome));
    printf("\n%s\n", mensagem);

    return 0;
}
