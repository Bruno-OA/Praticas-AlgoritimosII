/*
    Escreva a função para cálculo do N-ésimo termo da sequência de Catalan utilizando recursividade.
*/

#include <stdio.h>

int main() {

    int n = 8;

    int resultado = catalan(n);
    printf("A posicao de %d eh %d\n", n, resultado);
}

int catalan(int n) {
    if(n <= 1 ){
        return 1;
    }
    
    int resultado = 0;

    for (int i = 0; i < n; i++) {
        resultado += catalan(i) * catalan(n - 1 - i);
    }
    return resultado;
}