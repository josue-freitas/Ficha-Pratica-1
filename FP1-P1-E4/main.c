//Ficha Prática 1 - Parte 1 - Exercicio 4

#include <stdio.h>

int main() {
    float comprimento, largura;
    printf("Insira o comprimento do retângulo: ");
    scanf("%f", &comprimento);
    printf("Insira a largura do retângulo: ");
    scanf("%f", &largura);
    printf("O valor da área é de: %f e o perímetro é de: %f", comprimento*largura, comprimento*2+largura*2);
    printf("Raio: %f", comprimento *largura*largura);
    return 0;
}

