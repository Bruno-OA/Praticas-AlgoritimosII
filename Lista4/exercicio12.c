/*
    Dado um labirinto representado por uma matriz com 0 (caminho) e 1 (parede), 
escreva uma função recursiva para encontrar um caminho do início ao fim.
*/

#include <stdio.h>

#define LINHAS 4
#define COLS 4

// Funcao auxiliar para imprimir o labirinto e o caminho
void imprimirLabirinto(int labirinto[LINHAS][COLS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", labirinto[i][j]);
        }
        printf("\n");
    }
}

// Funcao recursiva para encontrar um caminho no labirinto
// Retorna 1 se um caminho e encontrado, 0 caso contrario
int encontrarCaminho(int labirinto[LINHAS][COLS], int x, int y, int caminho[LINHAS][COLS]) {
    // 1. Condicao de parada (caso base):
    // Se a posicao atual for a saida
    if (x == LINHAS - 1 && y == COLS - 1) {
        caminho[x][y] = 2; // Marca a saida como parte do caminho
        return 1;
    }
    
    // 2. Condicoes de seguranca para o movimento atual:
    // Verifica se a posicao esta dentro dos limites, nao e uma parede e nao foi visitada
    if (x >= 0 && x < LINHAS && y >= 0 && y < COLS && labirinto[x][y] == 0 && caminho[x][y] == 0) {
        caminho[x][y] = 2; // Marca a posicao atual como parte do caminho

        // 3. Passo recursivo: tenta mover em todas as 4 direcoes
        
        // Tenta mover para baixo
        if (encontrarCaminho(labirinto, x + 1, y, caminho)) {
            return 1;
        }

        // Tenta mover para a direita
        if (encontrarCaminho(labirinto, x, y + 1, caminho)) {
            return 1;
        }
        
        // Tenta mover para cima
        if (encontrarCaminho(labirinto, x - 1, y, caminho)) {
            return 1;
        }
        
        // Tenta mover para a esquerda
        if (encontrarCaminho(labirinto, x, y - 1, caminho)) {
            return 1;
        }

        // 4. Backtracking: se nenhuma direcao funcionou, desfaz a jogada
        caminho[x][y] = 0;
        return 0;
    }
    
    return 0; // Se a posicao atual for invalida, retorna 0
}


int main() {
    int labirinto[LINHAS][COLS] = {
        {0, 1, 0, 0},
        {0, 0, 0, 1},
        {1, 0, 1, 0},
        {1, 0, 0, 0}
    };
    
    int caminho[LINHAS][COLS] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
    
    printf("Labirinto original (0=caminho, 1=parede):\n");
    imprimirLabirinto(labirinto);
    printf("\n");
    
    if (encontrarCaminho(labirinto, 0, 0, caminho)) {
        printf("Caminho encontrado (2=caminho):\n");
        imprimirLabirinto(caminho);
    } else {
        printf("Nao foi possivel encontrar um caminho.\n");
    }
    
    return 0;
}
