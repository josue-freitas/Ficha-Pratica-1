// Ficha Prática 1 - Parte 2 - Exercicio 4

#include <stdio.h>

int main() {
    int min1,min2,min3,min4,min5,seg1,seg2,seg3,seg4,seg5,totalseg,horas,minutos,segundos;
    
    printf("Quantos minutos e segundos tem a música 1?");
    printf("\nMinutos: ");
    scanf("%d", &min1);
    printf("Segundos: ");
    scanf("%d", &seg1);
    
    printf("Quantos minutos e segundos tem a música 2?");
    printf("\nMinutos");
    scanf("%d", &min2);
    printf("Segundos: ");
    scanf("%d", &seg2);
    
    printf("Quantos minutos e segundos tem a música 3?");
    printf("\nMinutos");
    scanf("%d", &min3);
    printf("Segundos: ");
    scanf("%d", &seg3);
    
    printf("Quantos minutos e segundos tem a música 1?");
    printf("\nMinutos");
    scanf("%d", &min1);
    printf("Segundos: ");
    scanf("%d", &seg1);
    
    printf("Quantos minutos e segundos tem a música 4?");
    printf("\nMinutos");
    scanf("%d", &min4);
    printf("Segundos: ");
    scanf("%d", &seg4);
    
    printf("Quantos minutos e segundos tem a música 5?");
    printf("\nMinutos");
    scanf("%d", &min5);
    printf("Segundos: ");
    scanf("%d", &seg5);
    
    totalseg=(min1*60+seg1) +(min2*60+seg2)+(min3*60+seg3)+(min4*60+seg4)+(min5*60+seg5);
    
    horas =totalseg/3600;
    minutos= (totalseg - horas*3600)/60;
    segundos= totalseg - (horas*3600) - (minutos*60);
    
    printf("Duração da playlist: %d:%d:%d", horas,minutos,segundos);
    return 0;
}

