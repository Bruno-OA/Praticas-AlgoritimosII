/*
    Escreva a função para cálculo do N-ésimo termo da sequência de Lucas utilizando recursividade.
*/

#include <stdio.h>

int main() {

    int n = 8;

    int resultado = lucas(n);
    printf("A posicao de %d eh %d\n", n, resultado);
}

int lucas(int n) {
    if(n == 0) {
        return 2;
    }
    if (n == 1) {
        return 1;
    }

    return lucas(n - 1) + lucas(n - 2);
}