#include <stdio.h>

// Desafio de Xadrez - MateCheck 
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Simulação do movimento da Torre com estrutura FOR
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }

    // Simulação do movimento do Bispo com estrutura WHILE
    printf("\nMovimento do Bispo (5 casas na Diagonal - Cima Direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita %d\n", j);
        j++;
    }

    // Simulação do movimento da Rainha com estrutura DO-WHILE
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda %d\n", k);
        k++;
    } while (k <= 8);

    return 0;
}
