/*
    Dada uma lista de números e um valor alvo, escreva uma função recursiva para 
determinar se existe algum subconjunto cuja soma seja exatamente o valor alvo
*/

#include <stdio.h>

// Funcao recursiva para determinar se existe um subconjunto cuja soma e igual ao alvo
// A funcao retorna 1 (verdadeiro) ou 0 (falso)
int encontrarSubconjunto(int array[], int tamanho, int alvo, int indice) {
    // Caso Base 1: se o alvo for 0, encontramos um subconjunto valido
    if (alvo == 0) {
        return 1;
    }
    
    // Caso Base 2: se o alvo for negativo ou se todos os elementos ja foram verificados
    if (alvo < 0 || indice == tamanho) {
        return 0;
    }

    // Passo Recursivo:
    // A funcao se divide em duas opcoes:
    
    // Opcao 1 (Incluir): checa se o alvo e atingivel incluindo o numero atual
    int incluir_atual = encontrarSubconjunto(array, tamanho, alvo - array[indice], indice + 1);
    
    // Opcao 2 (Excluir): checa se o alvo e atingivel excluindo o numero atual
    int excluir_atual = encontrarSubconjunto(array, tamanho, alvo, indice + 1);

    // Retorna 1 se alguma das opcoes encontrar a solucao
    return incluir_atual || excluir_atual;
}

int main() {
    int numeros[] = {3, 5, 8, 11, 2};
    int tamanho = 5;
    int alvo = 10;
    
    if (encontrarSubconjunto(numeros, tamanho, alvo, 0)) {
        printf("Sim, existe um subconjunto cuja soma e igual a %d.\n", alvo);
    } else {
        printf("Nao, nao existe um subconjunto cuja soma e igual a %d.\n", alvo);
    }
    
    return 0;
}