// Ficha Prática 1 - Parte 1 - Exercicio 2
#include <stdio.h>

int main() {
    int aluno1,aluno2,aluno3;
    printf("Insira a idade do 1º aluno: ");
    scanf("%d", &aluno1);
    printf("Insira a idade do 2º aluno: ");
    scanf("%d", &aluno2);
    printf("Insira a idade do 3º aluno: ");
    scanf("%d", &aluno3);
    printf("A média de idades é: %d", (aluno1+aluno2+aluno3)/3);
    return 0;
}