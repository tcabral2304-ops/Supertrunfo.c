#include <stdio.h>

int main (){

//variaveis da carta1
    char estado1[50];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    //leitura da carta 01
    printf("carta 1:\n");
    printf("estado 1: ");
    scanf(" %49s", estado1);

    printf("cidade 1: ");
    scanf(" %49s", cidade1);

    printf("população 1: ");
    scanf(" %d", &populacao1);

    printf("area 1: ");
    scanf(" %f", &area1);

    printf("pib 1: ");
    scanf(" %f", &pib1);

    printf("pontos turisticos 1: ");
    scanf(" %d", &pontos1);


    //variaveis da carta2
    char estado2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    //leitura da carta 02
    printf("carta 2:\n");
    printf("estado 2: ");
    scanf(" %49s", estado2);

    printf("cidade 2: ");
    scanf(" %49s", cidade2);

    printf("população 2: ");
    scanf(" %d", &populacao2);

    printf("area 2: ");
    scanf(" %f", &area2);

    printf("pib 2: ");
    scanf(" %f", &pib2);

    printf("pontos turisticos 2: ");
    scanf(" %d", &pontos2);

    

    return 0;

}