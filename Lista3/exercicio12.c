/*
    Considere uma partida de futebol entre duas equipes A x B, cujo placar final é m x n, 
    em que m e n são números de gols marcados por A e B, respectivamente. Escreva um algoritmo 
    recursivo que imprima todas as possíveis sucessões de gols marcados. Por exemplo, para um placar 
    final de 3 x 1, as possíveis sucessões de gols são “AAAB”, “AABA”, “ABAA” e “BAAA”. Utilize recursão.
*/

#include <stdio.h>

int main() {
    int m, n;
    
    printf("Digite o placar final (gols do Time A): ");
    scanf("%d", &m);
    
    printf("Digite o placar final (gols do Time B): ");
    scanf("%d", &n);

    printf("\nPossiveis sucessões de gols para um placar %d x %d:\n", m, n);
    char sequencia_inicial[100] = "";
    imprimirSequencias(m, n, sequencia_inicial);

    return 0;
}

void imprimirSequencias(int m, int n, char *sequencia) {
    // Caso Base: se nao houver mais gols a serem marcados
    if (m == 0 && n == 0) {
        printf("%s\n", sequencia);
        return;
    }

    // Passo Recursivo para o Time A
    if (m > 0) {
        // Adiciona 'A' a sequencia e faz a chamada recursiva
        char nova_sequencia[100];
        sprintf(nova_sequencia, "%sA", sequencia);
        imprimirSequencias(m - 1, n, nova_sequencia);
    }

    // Passo Recursivo para o Time B
    if (n > 0) {
        // Adiciona 'B' a sequencia e faz a chamada recursiva
        char nova_sequencia[100];
        sprintf(nova_sequencia, "%sB", sequencia);
        imprimirSequencias(m, n - 1, nova_sequencia);
    }
}

