#include <stdio.h>

// Funcao recursiva para calcular a potencia
int potencia(int m, int n) {
    // Caso Base: qualquer numero elevado a 0 e 1.
    if (n == 0) {
        return 1;
    }
    
    // Passo Recursivo:
    // Retorna a base (m) multiplicada pelo resultado de potencia(m, n-1)
    else {
        return m * potencia(m, n - 1);
    }
}

int main() {
    int base = 5;
    int expoente = 3;
    
    // Validacao para expoente negativo
    if (expoente < 0) {
        printf("A funcao nao foi projetada para expoentes negativos.\n");
    } else {
        int resultado = potencia(base, expoente);
        printf("%d elevado a %d eh: %d\n", base, expoente, resultado);
    }
    
    return 0;
}