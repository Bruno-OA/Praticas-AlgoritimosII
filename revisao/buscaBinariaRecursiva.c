#include <stdio.h>

// Funcao de busca binaria (recursiva)
int buscaBinaria(int array[], int left, int right, int x) {
    // Caso Base para Falha:
    // Se 'left' ultrapassar 'right', o valor nao foi encontrado
    if (left > right) {
        return -1;
    }

    int mid = left + (right - left) / 2;

    // Caso Base para Sucesso:
    // O valor foi encontrado no meio
    if (array[mid] == x) {
        return mid;
    }

    // Passo Recursivo para a metade esquerda
    if (array[mid] > x) {
        return buscaBinaria(array, left, mid - 1, x);
    }
    
    // Passo Recursivo para a metade direita
    else {
        return buscaBinaria(array, mid + 1, right, x);
    }
}

int main() {
    // Array deve estar ordenada
    int numeros_ordenados[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int tamanho = 10;
    
    // Teste 1: valor que existe na array
    int valor1 = 23;
    int indice1 = buscaBinaria(numeros_ordenados, 0, tamanho - 1, valor1);

    if (indice1 != -1) {
        printf("O valor %d foi encontrado no indice %d.\n", valor1, indice1);
    } else {
        printf("O valor %d nao foi encontrado na array.\n", valor1);
    }
    
    // Teste 2: valor que nao existe na array
    int valor2 = 100;
    int indice2 = buscaBinaria(numeros_ordenados, 0, tamanho - 1, valor2);

    if (indice2 != -1) {
        printf("O valor %d foi encontrado no indice %d.\n", valor2, indice2);
    } else {
        printf("O valor %d nao foi encontrado na array.\n", valor2);
    }

    return 0;
}