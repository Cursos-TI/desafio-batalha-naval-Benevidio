#include <stdio.h>

#define TAM 10          // Tamanho do tabuleiro (10x10)
#define TAM_NAVIO 3     // Tamanho fixo dos navios
#define AGUA 0          // Valor da água
#define NAVIO 3         // Valor do navio

// Função para exibir o tabuleiro com números
void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("   ");
    for (char letra = 'A'; letra < 'A' + TAM; letra++) {
        printf("%c ", letra); // Cabeçalho com letras
    }
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%2d ", i + 1); // Número da linha
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]); // Mostra os valores reais (0 ou 3)
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM][TAM];

    // 1. Inicializa o tabuleiro com água (0)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // 2. Define posição inicial dos navios
    int linhaHorizontal = 1; // Linha 2 (índice 1)
    int colunaHorizontal = 2; // Coluna C (índice 2)

    int linhaVertical = 5; // Linha 6 (índice 5)
    int colunaVertical = 0; // Coluna A (índice 0)

    // 3. Posiciona os navios no tabuleiro (tamanho 3)
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = NAVIO; // Navio horizontal
        tabuleiro[linhaVertical + i][colunaVertical] = NAVIO;     // Navio vertical
    }

    // 4. Exibe o tabuleiro final
    exibirTabuleiro(tabuleiro);

    return 0;
}
