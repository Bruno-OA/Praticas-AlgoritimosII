#include <stdio.h>

// Funcao recursiva para encontrar o valor maximo em uma array
int maximo(int n, int v[]) {
    // Caso Base: se a array tiver apenas um elemento
    if (n == 1) {
        return v[0];
    }
    
    // Passo Recursivo
    int x = maximo(n - 1, v);
    
    // Compara o maximo do restante da array com o ultimo elemento
    if (x > v[n - 1]) {
        return x;
    } else {
        return v[n - 1];
    }
}

int main() {
    int numeros[] = {10, 5, 42, 15, 7, 28, 99, 12};
    int tamanho = 8;
    
    if (tamanho <= 0) {
        printf("A array esta vazia.\n");
    } else {
        int max = maximo(tamanho, numeros);
        printf("O valor maximo na array eh: %d\n", max);
    }
    
    return 0;
}