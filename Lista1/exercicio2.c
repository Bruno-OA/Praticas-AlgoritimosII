/*
    Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9
*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        for (int numeral = 1; numeral <= 10; numeral++)
        {
            printf("%d x %d = %d\n", i, numeral, i * numeral);
        }
    }
    
    return 0;
}
