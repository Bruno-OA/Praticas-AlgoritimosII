/* 
    Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e 
imprime no vídeo o correspondente em graus Celsius usando as fórmulas que seguem.
a. Usar uma variável double para ler o valor em Fahrenheit e a fórmula C=(f-32.0) * (5.0/9.0)
b. Usar uma variável int para ler o valor em Fahrenheit e a fórmula C=(f-32)*(5/9).
*/

#include <stdio.h>

int main() {

    // resolução a - descomente removendo as "/**/" 
    /*
    double fahrenheit;

    printf("digite a temperatura em Fahrenheit com decimais:");
    scanf("%lf", &fahrenheit);
    printf("Graus em Celsius: %lf\n", (fahrenheit - 32) * (5.0 / 9.0));

    return 0;
    */

//------------------------------------------------------------------------------------------------------------//
    // resolução b 

    int fahrenheit;

    printf("digite a temperatura em Fahrenheit, sem decimais:");
    scanf("%d", &fahrenheit);
    printf("Graus em Celsius: %d\n", ((fahrenheit - 32) * 5) / 9);

    return 0;

}




