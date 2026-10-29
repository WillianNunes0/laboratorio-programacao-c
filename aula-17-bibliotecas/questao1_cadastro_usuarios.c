/*
 * Aula 17 - Strings e Bibliotecas em C
 * 1a Questao: cadastro de usuarios e perfis de acesso.
 * Funcoes utilizadas: strlen(), strcmp(), strcpy(), strcat()
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char perfil[20];
    char confirmacao[50];
    char mensagem[100] = "Bem-vindo(a), ";

    printf("===== CADASTRO DE USUARIOS =====\n\n");

    /* Entrada de dados */
    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Digite seu perfil (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    /* Processamento */
    strcpy(confirmacao, nome);        /* copia o nome       */
    strcat(mensagem, confirmacao);    /* monta a mensagem   */
    strcat(mensagem, "!");

    /* Saida */
    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", confirmacao);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));

    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil: Administrador\n");
    } else if (strcmp(perfil, "COMUM") == 0) {
        printf("Perfil: Comum\n");
    } else {
        printf("Perfil: Invalido\n");
    }

    printf("\n%s\n", mensagem);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}
