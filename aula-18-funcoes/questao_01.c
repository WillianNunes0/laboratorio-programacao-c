/* Aula 18 - Questao 1: calculadora com funcoes. */
#include <stdio.h>

void exibirMenu(void) {
    printf("\n=== CALCULADORA ===\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("5 - Sair\n");
    printf("Escolha uma opcao: ");
}

double somar(double a, double b) { return a + b; }
double subtrair(double a, double b) { return a - b; }
double multiplicar(double a, double b) { return a * b; }
double dividir(double a, double b) { return a / b; }

int main(void) {
    int opcao;
    double a, b, resultado;

    do {
        exibirMenu();
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
        if (opcao == 5) {
            printf("Encerrando a calculadora.\n");
            break;
        }
        if (opcao < 1 || opcao > 4) {
            printf("Opcao invalida.\n");
            continue;
        }
        printf("Digite o primeiro numero: ");
        if (scanf("%lf", &a) != 1) return 1;
        printf("Digite o segundo numero: ");
        if (scanf("%lf", &b) != 1) return 1;

        if (opcao == 4 && b == 0) {
            printf("Erro: nao e permitido dividir por zero.\n");
            continue;
        }

        switch (opcao) {
            case 1: resultado = somar(a, b); break;
            case 2: resultado = subtrair(a, b); break;
            case 3: resultado = multiplicar(a, b); break;
            case 4: resultado = dividir(a, b); break;
            default: continue;
        }
        printf("Resultado: %.2f\n", resultado);
    } while (opcao != 5);

    return 0;
}
