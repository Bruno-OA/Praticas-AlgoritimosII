/*
    Crie uma função recursiva que verifique se uma string é um palíndromo 
(lê-se igual de trás para frente). Exemplo: palindromo("arara") = True
*/

#include <stdio.h>

int main() {

    char escrita[] = "arara";
    int tamanho = 5;

    // Calcula o tamanho da string manualmente
    //while (escrita[tamanho] != '\0') {
    //    tamanho++;
    //}
    
    if (palindromoTrue(escrita, 0, tamanho - 1)) {
        printf("A palavra '%s' e um palindromo.\n", escrita);
    } else {
        printf("A palavra '%s' nao e um palindromo.\n", escrita);
    }
    return 0;
}

int palindromoTrue(char escrita[], int start, int end){
    if(start >= end){
        return 1;
    }
    if (escrita[start] != escrita[end]){
        return 0;
    }
    return palindromoTrue(escrita, start + 1, end - 1);

}
