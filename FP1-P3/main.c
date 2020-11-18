//// Ficha Prática 1 - Parte 3

#include <stdio.h>

int main() {
    
    int codigo, dias;
    
    printf("Insira o código do funcionário que pretende calcular o vencimento: ");
    scanf("%d", &codigo);
    printf("Insira quantos dias trabalhou o funcionário %d: ", codigo);
    scanf("%d", &dias);
    printf("Vencimento ilíquido: %d\n", (40*dias));
    printf("Subsidio de alimentação: %d\n", (5*dias));
    printf("Retenção de IRS: %4.2f\n", ((40*dias)*0.1)); //%4.2f é para mostrar apenas duas casas decimais
    printf("Segurança social funcionário: %4.2f\n", ((40*dias)*0.11));
    printf("Segurança social entidade patronal: %4.2f\n", ((40*dias)*0.2375));
    printf("Vencimento líquido: %4.2f", (40*dias)-((40*dias)*0.1)-((40*dias)*0.11));
   
    return 0;
}

