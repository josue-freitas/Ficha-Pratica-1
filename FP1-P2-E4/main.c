// Ficha Prática 1 - Parte 2 - Exercicio 4

#include <stdio.h>

int main() {
    float preco1, preco2, preco3;
    printf("Preço 1º produto:");
    scanf("%f",&preco1);
    printf("Preço 2º produto:");
    scanf("%f",&preco2);
    printf("Preço 3º produto:");
    scanf("%f",&preco3);
    printf("Valor a pagar: %f", (preco1+preco2+preco3)-(preco1+preco2+preco3)*0.1);
    return 0;
}

