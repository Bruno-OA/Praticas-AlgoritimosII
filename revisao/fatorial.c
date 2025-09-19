#include <stdio.h>

// Funcao recursiva para calcular o fatorial
int fatorial(int n) {
    // Caso Base: o fatorial de 0 e 1.
    if (n == 0) {
        return 1;
    } 
    // Passo Recursivo:
    // Retorna n multiplicado pelo fatorial de n-1.
    else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int numero = 5; // Exemplo: calculando o fatorial de 5
    
    // Validacao para numeros negativos
    if (numero < 0) {
        printf("Fatorial nao e definido para numeros negativos.\n");
    } else {
        int resultado = fatorial(numero);
        printf("O fatorial de %d eh %d\n", numero, resultado);
    }
    
    return 0;
}