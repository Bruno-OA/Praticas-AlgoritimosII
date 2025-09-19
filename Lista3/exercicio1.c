/*
    Escreva uma função que calcula o número fatorial de um número. Implementar uma versão recursiva e uma versão com laço de repetição.
*/

#include <stdio.h>

int fatorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * fatorial(n - 1);
}

int main() {

    int n = 5;

    int resultado = fatorial(n);
    printf("O fatorial de %d eh %d\n", n, resultado);

    return 0;

}