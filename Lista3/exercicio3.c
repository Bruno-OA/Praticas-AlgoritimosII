/*
    Escreva uma função recursiva que recebe um array de inteiros e retorna a soma dos elementos do array
*/

#include <stdio.h>

int main() {

    int numeros[] = {10, 10, 10, 10, 10};
    int tamanho = 5;

    int soma = somaArray(numeros, tamanho);
    printf("%d", soma);

return 0;

}

int somaArray(int numeros[], int tamanho) {

    if ( tamanho <= 0) {
        return 0;
    }
    return numeros[tamanho - 1] + somaArray(numeros, tamanho - 1);
}