/*
    Escreva um programa que lê um inteiro positivo e verifica se ele contém o dígito 3 em qualquer posição.
*/

#include <stdio.h>

int main() {
    
    char numero[10];
    int encontrou = 0;

    printf("Insira o numero positivo: ");
    scanf("%s", &numero);

    for (int i =0; i < 10 && numero[i] != '\0'; i++) {

        if (numero[i] == '3') {
            encontrou = 1;
            break;
        }
        
    }

    if (encontrou) {
        printf("O numero contem o digito 3.\n");
    } else {
        printf("o numero nao contem o digito 3.\n");
    }
    return 0;
}