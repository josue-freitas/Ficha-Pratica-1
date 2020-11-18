// Ficha Prática 1 - Parte 2 - Exercicio 2

#include <stdio.h>

int main() {
    float valor1, valor2, valor3;
    printf("Introduza o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Introduza o segundo valor: ");
    scanf("%f", &valor2);
    printf("Introduza o terceiro valor: ");
    scanf("%f", &valor3);
    printf("Média aritmética: %f\n", (valor1+valor2+valor3)/3);
    printf("Média ponderada: %f", (valor1*0.2)+(valor2*0.3)+(valor3*0.5));        
    return 0;
}

