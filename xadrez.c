#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(char nome[], int i, int limite) {
    if (i > limite) return;
    printf("%d - %s > Direita\n", i, nome);
    moverTorre(nome, i + 1, limite);
}

// Função recursiva para o movimento da Rainha
void moverRainha(char nome[], int i, int limite) {
    if (i > limite) return;
    printf("%d - %s > Esquerda\n", i, nome);
    moverRainha(nome, i + 1, limite);
}

// Função recursiva para o movimento do Bispo
void moverBispo(char nome[], int i, int limite) {
    if (i > limite) return;

    // Loops aninhados dentro da recursão
    for (int y = 1; y <= 1; y++) { // movimento vertical
        for (int x = 1; x <= 1; x++) { // movimento horizontal
            printf("%d - %s > Cima e Direita\n", i, nome);
        }
    }

    moverBispo(nome, i + 1, limite);
}

int main() {

    // Variáveis
    char rainha[10] = "Rainha";
    char bispo[10] = "Bispo";
    char torre[10] = "Torre";
    char cavalo[10] = "Cavalo";

    printf("=== MOVIMENTOS DE XADREZ ===\n\n");

    //--------------------------------------------------
    // Movimento do Bispo (recursividade + loops aninhados)
    moverBispo(bispo, 1, 5);

    printf("\n==============================\n\n");

    //--------------------------------------------------
    // Movimento da Torre (recursividade)
    moverTorre(torre, 1, 5);

    printf("\n==============================\n\n");

    //--------------------------------------------------
    // Movimento da Rainha (recursividade)
    moverRainha(rainha, 1, 8);

    printf("\n==============================\n\n");

    //--------------------------------------------------
    // Movimento do Cavalo (loops aninhados complexos)
    for (int j = 1; j <= 1; j++) {
        for (int i = 1; i <= 3; i++) {

            if (i <= 2) {
                if (i == 1)
                    printf("%d - %s > Baixo, ", i, cavalo);
                else
                    printf("Baixo, ");
                continue;
            }

            if (i == 3) {
                printf("Esquerda.\n");
                break;
            }
        }
    }   

    printf("\n==============================\n\n");

    return 0;
}
