/*
    Escreva uma função recursiva que determine quantas vezes um dígito K ocorre em um número natural N. 
    Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.
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

    /*for (int i = 0; numero[i] == "\0" ; i++) {
        if (numero[i] == "\0"){
            return 0;
        }
        if(numero[i] == K){
            return n++;
        }
        return procuraRepeticao(numero[i], n, K);
        
    }*/
    

    //array[0] is 2 contador++ prcuraRepeticao(n + 1)
}