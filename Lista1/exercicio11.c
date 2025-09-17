/*
    Fazer um programa para receber um número inteiro do usuário e determinar se este número é primo ou não
*/

#include <stdio.h>

int main () {

    int inteiro;

    printf("digite um inteiro: ");
    scanf("%d", &inteiro);

    if ((inteiro % inteiro == 1) || (inteiro / 1 == inteiro)) {
        printf("o seu nemero: %d e primo", inteiro);
    } else {
        printf("o seu nemero: %d nao e primo" , inteiro);
    }

}