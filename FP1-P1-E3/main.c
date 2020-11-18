// Ficha Prática 1 - Parte 1 - Exercicio 3

#include <stdio.h>

int main() {
    float numero1,numero2;
    printf("Insira o primeiro valor: ");
    scanf("%f", &numero1);
    printf("Insira o segundo valor: ");
    scanf("%f", &numero2);
    printf("%f + %f = %f\n", numero1, numero2, numero1+numero2);
    printf("%f - %f = %f\n", numero1, numero2, numero1-numero2);
    printf("%f x %f = %f\n", numero1, numero2, numero1*numero2);
    printf("%f / %f = %f\n", numero1, numero2, numero1/numero2);
    return 0;
}

