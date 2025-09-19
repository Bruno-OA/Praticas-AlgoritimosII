/*
    Calcule o máximo divisor comum (MDC) entre dois números de forma recursiva.
*/

#include <stdio.h>

int main() {

    int n1 = 12;
    int n2 = 18;
    int menor;
    int resultado = mdc(n1, n2, menor);

    if(n1 < n2){
        menor = n1;
    } else {
        menor =n2;
    }

    printf("O Maximo Divisor Comum de %d e %d eh: %d\n", n1, n2, resultado);

}

int mdc(int n1, int n2, int divisor) {
    if (n1 % divisor == 0 && n2 % divisor == 0) {
        return divisor;
    }
    return mdc(n1, n2, divisor - 1);
}


