/*
    Escreva uma função recursiva que calcula a potência de um número inteiro x elevado a um número inteiro y.
*/

#include <stdio.h>

int main() {

    int x = 5;
    int y = 3;

    int resultado = potencia(x, y);
    printf("%d elevado a %d eh %d\n", x, y, resultado);
    return 0;
}

int potencia (int x, int y) {

    if (y <= 0){
        return 1;
    }
    return x * potencia(x, y-1);

}