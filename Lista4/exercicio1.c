/*
    Escreva uma função recursiva que encontre o maior elemento em uma lista de números. 
Exemplo: maximo([2, 8, 1, 5]) = 8
*/

#include <stdio.h>

int main() {
    int numeros[] = {2, 8, 1, 5};
    int tamanho = 4;

    int resultado = maiorNumero(tamanho, numeros);
    printf("%d", resultado);

}

int maiorNumero(int tamanho, int numeros[]) {
    if (tamanho == 1){
        return numeros[0];
    }else {
        int x = 0;
        x = maiorNumero(tamanho - 1, numeros);
        if (x > numeros[tamanho - 1]){
            return x;
        } else {
            return numeros[tamanho - 1];
        }
        
    }
}