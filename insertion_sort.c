#include <stdio.h>

// Função auxiliar para imprimir o array
void imprimirArray(int arr[], int n) {
    printf("[");
    for (int k = 0; k < n; k++) {
        printf("%d", arr[k]);
        if (k < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

// Algoritmo Insertion Sort
void insertionSort(int arr[], int n) {
    int i, chave, j;

    // **ANOTAÇÃO CHAVE 1: O loop externo (Marca o limite da parte desordenada)**
    // Itera do segundo elemento (índice 1) até o final. O sub-array de 0 a i-1 é mantido ordenado.
    for (i = 1; i < n; i++) {
        // 'chave' armazena o elemento atual a ser inserido na sub-lista ordenada
        chave = arr[i];
        j = i - 1; // 'j' é o índice do último elemento da sub-lista ordenada (à esquerda)

        printf("\n--- Iteração %d: Inserindo %d ---\n", i, chave);

        // **ANOTAÇÃO CHAVE 2: O loop interno (Deslocamento e Inserção)**
        // Desloca os elementos da sub-lista ordenada (arr[0...i-1]) que são maiores que 'chave',
        // abrindo espaço para a inserção da 'chave'.
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j]; // Desloca o elemento maior para a direita
            j = j - 1; // Move-se para a esquerda
        }

        // **ANOTAÇÃO CHAVE 3: Inserção da 'chave'**
        // Insere a 'chave' na posição correta (j+1), garantindo que a sub-lista (0 a i) permaneça ordenada.
        arr[j + 1] = chave;

        printf("Estado do Array: ");
        imprimirArray(arr, n);
    }
}

// Função Principal para Teste
int main() {
    // Exemplo de array desordenado
    int arrayDeTeste[] = {5, 1, 4, 2, 8};
    int tamanho = sizeof(arrayDeTeste) / sizeof(arrayDeTeste[0]);

    printf("Array original: ");
    imprimirArray(arrayDeTeste, tamanho);

    insertionSort(arrayDeTeste, tamanho);

    printf("\nArray Final Ordenado: ");
    imprimirArray(arrayDeTeste, tamanho);

    return 0;
}
