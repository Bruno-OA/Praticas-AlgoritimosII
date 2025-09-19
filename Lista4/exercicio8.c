/*
    Dada uma lista, gere recursivamente todos os subconjuntos possíveis (power set) dela. 
Exemplo: Para [1,2] o resultado seria [[], [1], [2], [1,2]]
*/

#include <stdio.h>

// Funcao auxiliar para imprimir a array de um subconjunto
void imprimirSubconjunto(int subconjunto[], int tamanho_subconjunto) {
    printf("[");
    for (int i = 0; i < tamanho_subconjunto; i++) {
        printf("%d", subconjunto[i]);
        if (i < tamanho_subconjunto - 1) {
            printf(", ");
        }
    }
    printf("]");
}


// Funcao recursiva principal que gera e imprime os subconjuntos
void gerarSubconjuntos(int lista[], int tamanho_original, int indice, int subconjunto_atual[], int tamanho_subconjunto) {
    // Caso Base: se o indice for igual ao tamanho, todos os elementos foram considerados.
    if (indice == tamanho_original) {
        imprimirSubconjunto(subconjunto_atual, tamanho_subconjunto);
        printf("\n");
        return;
    }

    // Passo Recursivo:

    // 1. Decisao de EXCLUIR o elemento atual:
    // Chamada recursiva para o proximo indice, sem o elemento atual.
    gerarSubconjuntos(lista, tamanho_original, indice + 1, subconjunto_atual, tamanho_subconjunto);


    // 2. Decisao de INCLUIR o elemento atual:
    // Adiciona o elemento atual ao subconjunto
    subconjunto_atual[tamanho_subconjunto] = lista[indice];
    // Chamada recursiva para o proximo indice, com o subconjunto atualizado.
    gerarSubconjuntos(lista, tamanho_original, indice + 1, subconjunto_atual, tamanho_subconjunto + 1);
}

int main() {
    int lista_original[] = {1, 2, 3};
    int tamanho_original = 3;

    // Array auxiliar para guardar o subconjunto que esta sendo construido
    int subconjunto_atual[100];

    printf("Todos os subconjuntos possiveis:\n");
    gerarSubconjuntos(lista_original, tamanho_original, 0, subconjunto_atual, 0);

    return 0;
}