#include <stdio.h>  // Biblioteca padrão para entrada e saída

// Constantes com o número de movimentos de cada peça
#define PASSOS_BISPO 5
#define PASSOS_TORRE 5
#define PASSOS_RAINHA 8

// =============================
// Funções Recursivas
// =============================

// Função recursiva para o Bispo: diagonal superior direita (Cima + Direita)
void moverBispo(int passo) {
    if (passo > PASSOS_BISPO) return;

    // Loops aninhados dentro da recursão (obrigatório)
    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            printf("Passo %d: Cima\n", passo);
        } else {
            printf("Passo %d: Direita\n", passo);
        }
    }

    moverBispo(passo + 1);  // Chamada recursiva
}

// Função recursiva para a Torre: Direita
void moverTorre(int passo) {
    if (passo > PASSOS_TORRE) return;

    printf("Passo %d: Direita\n", passo);
    moverTorre(passo + 1);
}

// Função recursiva para a Rainha: Esquerda
void moverRainha(int passo) {
    if (passo > PASSOS_RAINHA) return;

    printf("Passo %d: Esquerda\n", passo);
    moverRainha(passo + 1);
}

// =============================
// Cavalo (Loop Aninhado com múltiplas variáveis e condições)
// Cavalo se move em L: 2 para cima + 1 para direita
// Apenas 1 movimento completo (como solicitado)
// =============================
void moverCavalo() {
    printf("Movimentação do Cavalo:\n");

    int linha = 0; // controle do movimento vertical (Cima)
    int coluna = 0; // controle do movimento horizontal (Direita)

    for (linha = 1; linha <= 2; linha++) {
        // Simula 2 movimentos para cima
        if (linha == 2) {
            break; // interrompe se chegou no segundo movimento
        }

        printf("Movimento L - Parte %d: Cima\n", linha);
    }

    for (coluna = 1; coluna <= 1; coluna++) {
        if (coluna != 1) {
            continue; // pula se não for a coluna correta (exemplo de uso)
        }

        printf("Movimento L - Parte 3: Direita\n");
    }
}

int main() {
    // =============================
    // Bispo
    // =============================
    printf("Movimentação do Bispo:\n");
    moverBispo(1);

    printf("\n");

    // =============================
    // Torre
    // =============================
    printf("Movimentação da Torre:\n");
    moverTorre(1);

    printf("\n");

    // =============================
    // Rainha
    // =============================
    printf("Movimentação da Rainha:\n");
    moverRainha(1);

    printf("\n");

    // =============================
    // Cavalo
    // =============================
    moverCavalo();

    return 0;
}
