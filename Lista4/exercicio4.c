/*
    Faça uma função recursiva que some todos os elementos pares em uma lista de números. 
Exemplo: soma_pares([1, 2, 3, 4, 5]) = 6
*/

#include <stdio.h>

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int n = 5;

    int resultado = somaPares(numeros, n);
    printf("%d", resultado);
}

int somaPares(int numeros[], int n){
    if (n == 0){
        return 0;
    }

    if (numeros[n - 1] % 2 == 0 ) {
        return numeros[n - 1] + somaPares(numeros, n - 1);
    } else {
        return somaPares(numeros, n - 1);
    }
}
