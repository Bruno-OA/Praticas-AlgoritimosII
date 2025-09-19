/*
    Escreva uma função recursiva que recebe uma string e retorna a quantidade de caracteres desta string.
*/

#include <stdio.h>

int main() {
    char string[50];

    printf("digite um nome: ");
    scanf("%s", &string);

    int resultado = contaCaracteres(string);
    printf("%s tem %d caracteres", string, resultado);
}

int contaCaracteres(char string[]){
    if (*string == '\0') {
        return 0;
    }
    
    return 1 + contaCaracteres(string + 1);

}