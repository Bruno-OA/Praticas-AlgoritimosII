/*
    Escreva um programa para receber do usuário um mês (de 1 a 12) e um ano (de 0 D.C. em diante)
    e mostrar o número de dias daquele mês daquele ano. Tente utilizando switch/case.
*/

#include <stdio.h>

int main(){

    int mes;
    int ano;

    printf("digite um mes de 1 a 12: ");
    scanf("%d", &mes);
    printf("digite um ano de 0D.C em diante: ");
    scanf("%d", &ano);

    switch (mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("o seu mes %d do ano de %d tem 31 dias", mes , ano);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("o seu mes %d do ano de %d tem 30 dias", mes , ano);
        break;
    default:
        if ((ano % 400 == 0 ) || (ano % 4 == 0 && ano % 100 != 0)){
            printf("o seu mes %d do ano de %d e bisexto e tem 29 dias", mes , ano);
        } else
        printf("o seu mes %d do ano de %d tem 28 dias", mes , ano);
        break;
    }

    return 0;
}