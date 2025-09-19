/*
    Crie uma função recursiva que conte quantas vezes um elemento aparece numa lista. 
Exemplo: contar_ocorrencias([1, 2, 3, 2, 4, 2], 2) = 3
*/

#include <stdio.h>

int main() {
    int numeros[] = {1, 2, 2, 2, 3, 3, 4, 4, 4};
    int tamanho = 9;
    int K = 3;

    int resultado = procuraRepeticao(numeros, tamanho, K);

    printf("O numero %d se repete %d vezes", K, resultado);

    return 0;
}

int procuraRepeticao(int numeros[], int tamanho, int K) {
    if (tamanho <= 0) {
        return 0;
    }

    int posicaoAtual = (numeros[0] == K ? 1 : 0);

    return posicaoAtual + procuraRepeticao(numeros + 1, tamanho - 1, K);
}