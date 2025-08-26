#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    //CARTA 1
    char estado1 [40], codigocarta1 [2], cidade1 [50];
    int populacao1, pontoturistico1;
    float PIB1, area1;


    //CARTA 2
    char estado2 [40], codigocarta2 [2], cidade2 [50];
    int populacao2, pontoturistico2;
    float PIB2, area2;
    

    //Solicitação de dados carta 1
    print ("=== CARTA 1 ===\n");
    printf ("Digite o nome do estado: \n");
    scanf ("%s", estado1);

    printf ("Digite o código da carta: \n");
    scanf ("%s", codigocarta1);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", cidade1);

    printf ("Digite a quantidade da população: \n");
    scanf ("%d", &populacao1);

    printf ("Digite o PIB: \n");
    scanf ("%f", &PIB1);

    printf ("Qual é a área? \n");
    scanf ("%f", &area1);

    print ("\n");

    
    //Solicitação de dados carta 2
    print ("=== CARTA 2 ===\n");
    printf ("Digite o nome do estado: \n");
    scanf ("%s", estado2);

    printf ("Digite o código da carta: \n");
    scanf ("%s", codigocarta2);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", cidade2);

    printf ("Digite a quantidade da população: \n");
    scanf ("%d", &populacao2);

    printf ("Digite o PIB: \n");
    scanf ("%f", &PIB2);

    printf ("Qual é a área? \n");
    scanf ("%f", &area2);

    print ("\n");


    print ("\n===RESULTADO===\n");

    //comparação população
    if (populacao1 > populacao2){
        printf ("A população da carta 1 é maior do que a da carta 2 \n");
    }
    else { 
        printf ("A população da carta 2 é maior do que a da carta 1 \n");
        }
    //comparação PIB

    if (PIB1 > PIB2){
        printf ("O PIB da carta 1 é maior do que o da carta 2 \n");
    }
    else {
        printf ("O PIB da carta 2 é maior do que o o PIB da carta 1 \n")

    }

    //comparação área
    if (area1 > area2) {
        printf ("A área da carta 1 é maior do que a da carta 2");
    }
    else{
        printf ("A área da carta 2 é maior do que a da carta 1");
    }

    printf("\n===CARTA VENCEDORA===\n");


    if (populacao1 > populacao2){
        printf ("Carta 1 venceu \n");
    }  else {
        printf ("Carta 2 venceu \n");
    }
    return 0;
}
