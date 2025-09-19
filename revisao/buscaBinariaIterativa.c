#include <stdio.h>

// Funcao de busca binaria (iterativa)
int buscaBinaria(int array[], int x, int left, int right) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    // Array deve estar ordenada para que a busca binaria funcione
    int numeros_ordenados[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int tamanho = 10;
    int valor_procurado = 23;

    int indice = buscaBinaria(numeros_ordenados, valor_procurado, 0, tamanho - 1);

    if (indice != -1) {
        printf("O valor %d foi encontrado no indice %d.\n", valor_procurado, indice);
    } else {
        printf("O valor %d nao foi encontrado na array.\n", valor_procurado);
    }

    return 0;
}
