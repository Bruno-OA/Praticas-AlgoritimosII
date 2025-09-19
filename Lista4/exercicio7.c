/*
    Escreva uma função recursiva que retorne um array com números de 1 até n 
Exemplo: array_1_a_n(5) = [1, 2, 3, 4, 5]
*/

#include <stdio.h>
#include <stdlib.h> // Necessário para malloc e free

// Funcao recursiva auxiliar para preencher a array
void preencherArrayRecursivo(int *array, int n) {
    // Caso Base: a recursao para quando n for 0
    if (n == 0) {
        return;
    }
    
    // Primeiro, a funcao chama a si mesma para preencher os elementos de 1 ate n-1
    preencherArrayRecursivo(array, n - 1);
    
    // Depois, insere o valor de 'n' na posicao correta da array
    array[n - 1] = n;
}

// Funcao principal que cria e retorna o array preenchido
int* array_1_a_n(int n) {
    if (n <= 0) {
        return NULL; // Retorna NULL para tamanhos invalidos
    }

    // Aloca memoria dinamicamente para a array
    int *array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        return NULL; // Retorna NULL se a alocacao falhar
    }
    
    // Chama a funcao recursiva para preencher a array
    preencherArrayRecursivo(array, n);
    
    return array;
}

int main() {
    int n = 5;

    // Chama a funcao que cria e retorna o array
    int *meu_array = array_1_a_n(n);

    if (meu_array != NULL) {
        printf("A array de 1 a %d eh: ", n);
        for (int i = 0; i < n; i++) {
            printf("%d ", meu_array[i]);
        }
        printf("\n");
        
        // Importante: libera a memoria alocada para evitar vazamento
        free(meu_array);
    } else {
        printf("Erro ao criar a array.\n");
    }

    return 0;
}