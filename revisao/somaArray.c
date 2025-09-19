#include <stdio.h>

// Funcao recursiva para somar os elementos de uma array
int soma(int n, int v[]) {
    // Caso Base: se o tamanho da array for 0, a soma e 0.
    if (n == 0) {
        return 0;
    } 
    // Passo Recursivo:
    // Retorna a soma do restante da array mais o ultimo elemento.
    // O ultimo elemento esta no indice 'n-1'.
    else {
        return soma(n - 1, v) + v[n - 1];
    }
}

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int tamanho = 5;

    int resultado = soma(tamanho, numeros);

    printf("A soma dos elementos da array e: %d\n", resultado);
    
    return 0;
}