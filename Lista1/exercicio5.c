/*
    Usar uma variável double para ler o valor em Fahrenheit e a fórmula C=(f-32.0) * (5.0/9.0)
*/

#include <stdio.h>

int main() {

    double fahrenheit;

    printf("digite a temperatura em Fahrenheit com decimais:");
    scanf("%lf", &fahrenheit);
    printf("Graus em Celsius: %lf\n", (fahrenheit - 32) * (5.0 / 9.0));

    return 0;

}