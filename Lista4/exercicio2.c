/*
    Implemente uma função recursiva que conte quantos dígitos tem um número inteiro positivo. 
Exemplo: digitos(12345) = 5
*/

#include <stdio.h>
//funciona apenas até 10 digitos por que int só lê isso

int main() {
    int n = 1234534000;

    int resultado = contaDigitos(n);
    printf("%d", resultado);
}

int contaDigitos(int n){
    if(n == 0){
        return 0;
    } 
    return 1 + contaDigitos(n / 10);
    
}