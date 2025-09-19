/*
    Implemente uma função recursiva que imprima os números de n até 1. 
Exemplo: imprimir_desc(5) imprime: 5 4 3 2 1
*/

#include <stdio.h>

int main() {
    int n = 5;
    imprimir_desc(n);
}

int imprimir_desc(int n){
    if(n == 0){
        return 0;
    }

    printf("%d", n);

    imprimir_desc(n-1);
}