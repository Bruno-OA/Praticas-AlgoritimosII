#include <stdio.h>

// Função auxiliar para imprimir um sub-array
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

// Função auxiliar para realizar a troca (swap) de dois elementos
void trocar(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// **Função PARTIÇÃO**
// Coloca o pivô na sua posição correta e move os menores para a esquerda e os maiores para a direita.
int particionar(int arr[], int baixo, int alto) {
    // **ANOTAÇÃO CHAVE 1: Escolha do Pivô**
    // O pivô é o elemento que será posicionado corretamente na partição atual.
    // Aqui, escolhemos o último elemento do sub-array (arr[alto]) como pivô.
    int pivo = arr[alto];
    int i = (baixo - 1); // Índice do menor elemento

    for (int j = baixo; j <= alto - 1; j++) {
        // Se o elemento atual for menor ou igual ao pivô
        if (arr[j] <= pivo) {
            i++; // Incrementa o índice do menor elemento
            trocar(&arr[i], &arr[j]); // Coloca o elemento menor à esquerda
        }
    }
    // **ANOTAÇÃO CHAVE 2: Colocação Final do Pivô**
    // Troca o pivô (arr[alto]) com o elemento no índice (i + 1).
    // O pivô agora está na sua posição final e correta (i+1).
    trocar(&arr[i + 1], &arr[alto]);
    
    return (i + 1); // Retorna o índice do pivô
}

// **Função QUICKSORT (Divisão Recursiva)**
void quickSort(int arr[], int baixo, int alto, int tamanho) {
    // **ANOTAÇÃO CHAVE 3: Condição de Parada da Recursão**
    // A recursão para quando o sub-array tem um ou nenhum elemento (baixo < alto deixa de ser verdadeiro).
    if (baixo < alto) {
        // pi é o índice de particionamento, arr[pi] está agora no lugar certo
        int pi = particionar(arr, baixo, alto);
        
        printf("\n--- Partição no índice %d (Pivô: %d) ---\n", pi, arr[pi]);
        printf("Array após Partição: ");
        imprimirArray(arr, tamanho);
        
        // Ordena recursivamente os elementos antes do pivô
        quickSort(arr, baixo, pi - 1, tamanho);
        
        // Ordena recursivamente os elementos depois do pivô
        quickSort(arr, pi + 1, alto, tamanho);
    }
}

// Função Principal para Teste
int main() {
    // Exemplo de array desordenado
    int arrayDeTeste[] = {10, 7, 8, 9, 1, 5};
    int tamanho = sizeof(arrayDeTeste) / sizeof(arrayDeTeste[0]);

    printf("--- Início do Quick Sort ---\n");
    printf("Array original: ");
    imprimirArray(arrayDeTeste, tamanho);

    quickSort(arrayDeTeste, 0, tamanho - 1, tamanho);

    printf("\n--- Fim do Quick Sort ---\n");
    printf("Array Final Ordenado: ");
    imprimirArray(arrayDeTeste, tamanho);

    return 0;
}
