/*
    Escreva a função para cálculo do N-ésimo termo da sequência de Collatz utilizando recursividade.
*/

#include <stdio.h>

int main() {
    int n = 6;

    printf("\nA sequencia a partir de %d eh:\n", n);
    collatz(n);
    printf("\n");
    return 0;
}

int collatz(int n) {
    printf("%d ", n);

    if (n == 1){
        return 0;
    }

    if ((n % 2 == 0)) {
        return 1 + collatz(n / 2);
    }
    else {
        return 1 + collatz(n * 3 + 1);
    }  
        
}