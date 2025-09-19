/*
    Fazer um programa em "C" que lê um string do teclado e se utiliza de uma rotina 
recursiva para imprimir o string de maneira normal e de trás para frente.
*/

#include <stdio.h>

int main() {

    char string[50];
    
    printf("digite um nome: ");
    scanf("%s", &string);

    imprimeString(string);
    printf("\n");
    imprimeStringContrario(string);

}

int imprimeString (char string[]) {
    if (string[0] == '\0') {
        return;
        
    }
    printf("%c", string[0]);
    imprimeString(&string[1]);
}

int imprimeStringContrario (char string[]) {
    if (string[0] == '\0') {
        return;
        
    }
    imprimeStringContrario(&string[1]);
    printf("%c", string[0]);
    
}