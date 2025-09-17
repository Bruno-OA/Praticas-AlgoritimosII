/*
    Faça um programa para mostrar os 15 primeiros termos da série de Fibonacci.
*/

#include <stdio.h>

int main(){

    int fibonacci(int n) {
        if (n <= 1){
            return n;
        }
        return fibonacci(n - 1) + fibonacci(n - 2);

    }

    for (int i = 0; i <= 15; i++){
       printf("O %d numero de Fibonacci e: %d\n", i, fibonacci(i)); 
    }
    return 0;
}
    













int fibonacci(int n) {
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);

}