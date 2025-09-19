/*
    Escreva uma função recursiva que recebe um array de inteiros e retorna o produto dos elementos do array.
*/

#include <stdio.h>

int main() {

    int numeros[] = {10, 10, 10, 10, 10};
    int tamanho = 5;
    int produto = produtoArray(numeros, tamanho);
    printf("%d", produto);
}

int produtoArray (int numeros[], int tamanho) {
    if (tamanho <= 0) {
        return 1;
    }
    return numeros[tamanho - 1] * produtoArray(numeros, tamanho - 1);
}