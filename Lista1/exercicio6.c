/*
Escreva um programa que receba a velocidade máxima em uma avenida e a 
velocidade com que um motorista estava dirigindo nela. Calcule a multa que o 
motorista vai receber, considerando que são pagos R$ 5,00 por cada km/h que 
estiver acima da velocidade permitida (considere apenas números inteiros). 
Se a velocidade do motorista estiver dentro do limite, o programa deve informar que não há multa.
*/

#include <stdio.h>

int main() {

    int velocidadeMax;
    int velocidadeMotorista;

    printf("Digite a velocidade maxima da avenida: ");
    scanf("%d", &velocidadeMax);
    printf("Digite a velocidade do motorista: ");
    scanf("%d", &velocidadeMotorista);

    if (velocidadeMotorista <= velocidadeMax){
        printf("nao ha multa");
    } else {
        int multa = (velocidadeMotorista - velocidadeMax) * 5;
        printf("sua velocidade ultrapassou %d km/h, sua multa e de R$ %d,00", velocidadeMotorista - velocidadeMax, multa);
    }

    return 0;
}