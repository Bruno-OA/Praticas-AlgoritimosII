#include <stdio.h>

// Funcao de busca sequencial
int busca(int array[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (array[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int numeros[] = {10, 5, 42, 15, 7};
    int tamanho = 5;
    
    // Teste 1: valor que existe na array
    int valor1 = 15;
    int indice1 = busca(numeros, tamanho, valor1);

    if (indice1 != -1) {
        printf("O valor %d foi encontrado no indice %d.\n", valor1, indice1);
    } else {
        printf("O valor %d nao foi encontrado na array.\n", valor1);
    }
    
    // Teste 2: valor que nao existe na array
    int valor2 = 99;
    int indice2 = busca(numeros, tamanho, valor2);

    if (indice2 != -1) {
        printf("O valor %d foi encontrado no indice %d.\n", valor2, indice2);
    } else {
        printf("O valor %d nao foi encontrado na array.\n", valor2);
    }

    return 0;
}