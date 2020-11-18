// Ficha Prática 1 - Parte 2 - Exercicio 1

#include <stdio.h>

int main() {
    char caracter;
    printf("Escreva um caracter: ");
    caracter=getchar();
    printf("O antecessor é: %c e o sucessor é: %c", caracter-1,caracter+1);
    return 0;
}