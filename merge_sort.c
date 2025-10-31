#include <stdio.h>

// Função auxiliar para imprimir um sub-array
void imprimirSubArray(int arr[], int inicio, int fim) {
    printf(" [");
    for (int k = inicio; k <= fim; k++) {
        printf("%d", arr[k]);
        if (k < fim) {
            printf(", ");
        }
    }
    printf("] ");
}

// **Função MERGE (Intercalação)**
// Combina dois sub-arrays ordenados (arr[p...q] e arr[q+1...r]) em um sub-array ordenado arr[p...r].
void merge(int arr[], int p, int q, int r, int n) {
    int i, j, k;
    int n1 = q - p + 1; // Tamanho do sub-array da esquerda
    int n2 = r - q;     // Tamanho do sub-array da direita

    // Cria arrays temporários
    int L[n1], R[n2];

    // Copia os dados para os arrays temporários L[] e R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[q + 1 + j];

    // **ANOTAÇÃO CHAVE 3: Combinação/Intercalação**
    // Pega o menor elemento de L e R e coloca na posição correta em arr[p...r].
    i = 0; // Índice inicial do primeiro sub-array
    j = 0; // Índice inicial do segundo sub-array
    k = p; // Índice inicial do array combinado

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], se houver
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Imprime o estado do array principal após a intercalação
    printf("   MERGE: Sub-array ordenado no índice %d até %d:", p, r);
    imprimirSubArray(arr, p, r);
    printf("\n");
}

// **Função MERGESORT (Divisão Recursiva)**
void mergeSort(int arr[], int p, int r, int n) {
    // **ANOTAÇÃO CHAVE 1: Condição de Parada da Recursão**
    // A divisão para quando o sub-array tem apenas um elemento (p < r deixa de ser verdadeiro).
    if (p < r) {
        int q = p + (r - p) / 2; // Encontra o ponto médio (evita overflow)

        // Imprime o sub-array que está sendo dividido
        printf("DIVIDIR: ");
        imprimirSubArray(arr, p, r);
        printf("-> Meio em %d\n", q);

        // **ANOTAÇÃO CHAVE 2: Chamadas Recursivas (Divisão)**
        // 1. Ordena a primeira metade (recursivamente)
        mergeSort(arr, p, q, n);
        // 2. Ordena a segunda metade (recursivamente)
        mergeSort(arr, q + 1, r, n);

        // 3. Combina as duas metades ordenadas
        merge(arr, p, q, r, n);
    }
}

// Função Principal para Teste
int main() {
    // Exemplo de array desordenado
    int arrayDeTeste[] = {5, 1, 4, 2, 8};
    int tamanho = sizeof(arrayDeTeste) / sizeof(arrayDeTeste[0]);

    printf("--- Início do Merge Sort ---\n");
    printf("Array original: ");
    imprimirSubArray(arrayDeTeste, 0, tamanho - 1);
    printf("\n");

    mergeSort(arrayDeTeste, 0, tamanho - 1, tamanho);

    printf("\n--- Fim do Merge Sort ---\n");
    printf("Array Final Ordenado: ");
    imprimirSubArray(arrayDeTeste, 0, tamanho - 1);
    printf("\n");

    return 0;
}
