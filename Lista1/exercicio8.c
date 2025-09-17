/*
    Escreva um programa que calcule o salário semanal de um trabalhador. As entradas são o número de horas
trabalhadas na semana e o valor da hora. Até 40h/semana não se acrescenta nenhum adicional.
Acima de 40h e até 60h há um bônus de 50% para essas horas. Acima de 60h há um bônus de 100% para essas horas.
*/

#include <stdio.h>

int main(){

    int horasTrabalhadas;
    double valorHora;

    printf("Insira o numero de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);
    printf("Insira o valor das horas: ");
    scanf("%lf", &valorHora);

    double salarioBase = horasTrabalhadas * valorHora;
    double salarioTotal = salarioBase;

    if (horasTrabalhadas >40 && horasTrabalhadas<=60 ) {
        double bonus = salarioBase * 0.50;
        salarioTotal = salarioBase + bonus;
        printf("Bonus de 50%% aplicado. Salario base: R$%.2f - Total: R$%.2f\n", salarioBase, salarioTotal);

    }else if(horasTrabalhadas >60 ) {
        double bonus = salarioBase * 1.0;
        salarioTotal = salarioBase + bonus;
        printf("Bonus de 100%% aplicado. Salario base: R$%.2f - Total: R$%.2f\n", salarioBase, salarioTotal);
        
    }else {
        printf("Sem salario adicional. Salario total: R$%.2f\n", salarioTotal);
    }
    return 0;
}