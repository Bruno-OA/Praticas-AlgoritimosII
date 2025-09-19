/*
    Implemente um algoritmo recursivo para resolver um tabuleiro de Sudoku.
*/

#include <stdio.h>

#define N 9

// Funcao auxiliar para imprimir o tabuleiro
void imprimirTabuleiro(int tabuleiro[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Verifica se um numero pode ser colocado em uma linha
int isSafeInRow(int tabuleiro[N][N], int row, int num) {
    for (int col = 0; col < N; col++) {
        if (tabuleiro[row][col] == num) {
            return 0;
        }
    }
    return 1;
}

// Verifica se um numero pode ser colocado em uma coluna
int isSafeInCol(int tabuleiro[N][N], int col, int num) {
    for (int row = 0; row < N; row++) {
        if (tabuleiro[row][col] == num) {
            return 0;
        }
    }
    return 1;
}

// Verifica se um numero pode ser colocado em um box 3x3
int isSafeInBox(int tabuleiro[N][N], int row, int col, int num) {
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i + startRow][j + startCol] == num) {
                return 0;
            }
        }
    }
    return 1;
}

// Funcao principal para verificar se a jogada e valida
int isSafe(int tabuleiro[N][N], int row, int col, int num) {
    return isSafeInRow(tabuleiro, row, num) &&
           isSafeInCol(tabuleiro, col, num) &&
           isSafeInBox(tabuleiro, row, col, num);
}

// A funcao recursiva que resolve o Sudoku
int solveSudoku(int tabuleiro[N][N]) {
    int row, col;
    
    // Encontra a proxima celula vazia
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (tabuleiro[row][col] == 0) {
                goto found_empty;
            }
        }
    }
    
    // Caso Base: se nao houverem celulas vazias, o tabuleiro esta resolvido
    return 1;
    
    found_empty:
    
    // Passo Recursivo: Tenta numeros de 1 a 9 para a celula vazia
    for (int num = 1; num <= 9; num++) {
        if (isSafe(tabuleiro, row, col, num)) {
            tabuleiro[row][col] = num; // Tenta colocar o numero
            
            // Chama a recursao para resolver o resto do tabuleiro
            if (solveSudoku(tabuleiro)) {
                return 1; // Sucesso: a solucao foi encontrada
            }
            
            // Backtracking: se a solucao falhar, desfaz a jogada
            tabuleiro[row][col] = 0;
        }
    }
    
    // Se nenhum numero funcionar, retorna falha
    return 0;
}

int main() {
    int tabuleiro[N][N] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };
    
    printf("Tabuleiro de Sudoku original:\n");
    imprimirTabuleiro(tabuleiro);
    printf("\n");
    
    if (solveSudoku(tabuleiro)) {
        printf("Tabuleiro resolvido:\n");
        imprimirTabuleiro(tabuleiro);
    } else {
        printf("Nao foi possivel resolver o tabuleiro.\n");
    }
    
    return 0;
}