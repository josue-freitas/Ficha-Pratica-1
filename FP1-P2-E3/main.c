// Ficha Prática 1 - Parte 2 - Exercicio 3

#include <stdio.h>

int main() {
    int valor1,valor2;
    printf("Introduza o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Introduza o segundo valor: ");
    scanf("%d", &valor2);
    valor1=valor1+valor2;
    valor2=valor1-valor2;
    valor1=valor1-valor2;
    printf("valor1=%d\nvalor2=%d",valor1,valor2);
    return 0;
}

