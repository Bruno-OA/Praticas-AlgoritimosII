#include <stdio.h>

// Função auxiliar para imprimir o array
void imprimirArray(int arr[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

// Algoritmo Bubble Sort Simplificado
void bubbleSort(int arr[], int n) {
    int i, j;

    // **ANOTAÇÃO CHAVE 1: O loop externo (n-1 passagens)**
    // Controla o número de passagens. O algoritmo executa todas as n-1 passagens,
    // garantindo a ordenação mesmo sem a otimização de parada antecipada.
    for (i = 0; i < n - 1; i++) {
        printf("\n--- Iteração %d ---\n", i + 1);

        // **ANOTAÇÃO CHAVE 2: O loop interno (Comparações e Trocas)**
        // Este loop compara e troca pares adjacentes, "borbulhando" o maior
        // elemento restante para sua posição final no final da sub-lista.
        for (j = 0; j < n - 1 - i; j++) {
            // Compara arr[j] com arr[j+1]
            if (arr[j] > arr[j + 1]) {
                // Realiza a troca (Swap)
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        // Imprime o estado do array após cada passagem (iteração externa)
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

    bubbleSort(arrayDeTeste, tamanho);

    printf("\nArray Final Ordenado: ");
    imprimirArray(arrayDeTeste, tamanho);

    return 0;
}
