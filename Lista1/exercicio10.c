/*
    Faça um programa para mostrar todos os números perfeitos entre 1 e 100. 
Número perfeito é todo número inteiro cuja soma dos seus divisores é igual ao próprio número.
*/

#include <stdio.h>

int main() {

    for (int i = 1; i <= 100; i++) {
        if (i / 2 * 2 == i ) {
            printf("%d\n", i);
        }
    }
    return 0;
    
}