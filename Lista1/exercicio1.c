/*
    Fazer um programa em C que pergunta um valor em metros 
e imprime o correspondente em decímetros, centímetros e milímetros.
*/

#include <stdio.h>

int main() {

    int metros;
    printf("Digite um valor em metros:");
    scanf("%d", &metros);
    printf("valor em decimetros: %d\n", metros * 10);
    printf("valor em centimetros: %d\n", metros * 100);
    printf("valor em milimetros: %d\n", metros * 1000);
    
    return 0;
}
