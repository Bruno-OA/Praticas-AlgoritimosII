/*
    Fazer um programa para ler um número do usuário e determinar se este número é par ou não par.
*/

int main() {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero / 2 * 2 == numero)
    {
        printf("seu numero, %d e par", numero);
    }else {
        printf("seu numero, %d e impar", numero);
    };

    return 0;
}