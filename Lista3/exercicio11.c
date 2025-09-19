/*
    Escreva a função recursiva que recebe um número inteiro e imprime seu valor binário na tela.
*/

#include <stdio.h>

int main() {
    int n = 88;

    printf("O numero %d em binario eh: ", n);
    imprimeBinario(n);
    printf("\n");
}

int imprimeBinario(int n) {
    if (n == 0){
        return;
    }
    imprimeBinario(n / 2);
    printf("%d", n % 2);        
}