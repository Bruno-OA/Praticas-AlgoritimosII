/*
    Escreva a função para cálculo do N-ésimo termo da sequência de Fibonacci utilizando recursividade.
*/

#include <stdio.h>

int main() {

    int n = 8;

    int resultado = fibonacci(n);
    printf("A posicao de %d eh %d\n", n, resultado);
}

int fibonacci(int n) {
    if(n <= 1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}