/*
    Escreva a função para cálculo do N-ésimo termo da sequência de Padovan utilizando recursividade.
*/

#include <stdio.h>

int main() {

    int n = 8;

    int resultado = padovan(n);
    printf("A posicao de %d eh %d\n", n, resultado);
}

int padovan(int n) {
    if (n == 0 || n == 1 || n == 2) {
        return 1;
    }

    return padovan(n - 2) + padovan(n - 3);
}