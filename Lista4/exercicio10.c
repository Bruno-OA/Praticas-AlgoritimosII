/*
    Resolva o clássico problema da Torre de Hanoi recursivamente, 
imprimindo os movimentos necessários para mover n discos de um pino para outro.
*/

#include <stdio.h>

// Funcao recursiva para resolver a Torre de Hanoi
// origem: pino de partida
// destino: pino de chegada
// auxiliar: pino intermediario
void torreDeHanoi(int n, char origem, char destino, char auxiliar) {
    // Caso Base: se n for 1, move o disco diretamente
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }
    
    // Passo 1: move n-1 discos da origem para o auxiliar
    torreDeHanoi(n - 1, origem, auxiliar, destino);
    
    // Passo 2: move o disco n da origem para o destino
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    
    // Passo 3: move os n-1 discos do auxiliar para o destino
    torreDeHanoi(n - 1, auxiliar, destino, origem);
}

int main() {
    int n;
    
    printf("Digite o numero de discos: ");
    scanf("%d", &n);
    
    printf("\nSequencia de movimentos para %d discos:\n", n);
    // Chamada inicial: move n discos de 'A' para 'C' usando 'B' como auxiliar
    torreDeHanoi(n, 'A', 'C', 'B');
    
    return 0;
}