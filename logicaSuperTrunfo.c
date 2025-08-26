#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // carta 1
    char estado1[40], codigocarta1[2], cidade1[50];
    int populacao1, pontoturistico1, atributo1, atributo2;
    float PIB1, area1, densidade1;

    // carta 2
    char estado2[40], codigocarta2[2], cidade2[50];
    int populacao2, pontoturistico2;
    float PIB2, area2, densidade2;
    
    // solicitação de dados carta 1
    printf("\n----Carta 1----\n");

    printf("Digite o nome do estado:\n");
    scanf("%s", estado1);

    printf("Digite o código da carta:\n");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a quantidade da população:\n");
    scanf("%d", &populacao1);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB1);  // CORREÇÃO: %f para float

    printf("Qual é a área:\n");
    scanf("%f", &area1);

    printf("Quantos pontos turísticos:\n");
    scanf("%d", &pontoturistico1);

    // Calculo densidade
    if (area1 > 0) {
        densidade1 = populacao1 / area1;
    } else {
        densidade1 = 0;
    }

    // solicitação de dados carta 2
    printf("\n=== CARTA 2 ===\n");
    printf("Digite o nome do estado:\n");
    scanf("%s", estado2);
    printf("Digite o código da carta:\n");
    scanf("%s", codigocarta2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
    printf("Digite a quantidade da população:\n");
    scanf("%d", &populacao2);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);  // CORREÇÃO: %f para float
    printf("Qual é a área:\n");
    scanf("%f", &area2);
    printf("Quantos pontos turísticos:\n");
    scanf("%d", &pontoturistico2);

    if (area2 > 0) {
        densidade2 = populacao2 / area2;
    } else {
        densidade2 = 0;
    }

    // MENU 1 Atributo
    printf("\n-- Primeiro Menu Atributo -- \n");
    printf("Selecione o primeiro atributo:\n");
    printf("1. Área \n");
    printf("2. População\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Insira o número do atributo: ");
    scanf("%d", &atributo1);

    printf("\n-- Segundo Menu Atributo --\n");
    printf("Selecione o segundo atributo (diferente do primeiro):\n");

    // Mostrar apenas opções não selecionadas
    if (atributo1 != 1) printf("1. Área\n");
    if (atributo1 != 2) printf("2. População\n");
    if (atributo1 != 3) printf("3. PIB\n");
    if (atributo1 != 4) printf("4. Pontos Turísticos\n");
    if (atributo1 != 5) printf("5. Densidade Demográfica\n");
    
    printf("Insira o número do atributo: ");
    scanf("%d", &atributo2);
    
    printf("\n=== RESULTADO ===\n");
    printf("Países: %s vs %s\n", cidade1, cidade2);

    // Variáveis dos atributos
    float valor1_attr1, valor1_attr2, valor2_attr1, valor2_attr2;
    char *nome_attr1, *nome_attr2;
    
    // Switch para o PRIMEIRO atributo
    switch(atributo1) {
        case 1:
            valor1_attr1 = area1;
            valor2_attr1 = area2;
            nome_attr1 = "Área";
            break;
        case 2:
            valor1_attr1 = populacao1;
            valor2_attr1 = populacao2;
            nome_attr1 = "População";
            break;
        case 3:
            valor1_attr1 = PIB1;
            valor2_attr1 = PIB2;
            nome_attr1 = "PIB";
            break;
        case 4:
            valor1_attr1 = pontoturistico1;
            valor2_attr1 = pontoturistico2;
            nome_attr1 = "Pontos Turísticos";
            break;
        case 5:
            valor1_attr1 = densidade1;
            valor2_attr1 = densidade2;
            nome_attr1 = "Densidade Demográfica";
            break;
        default:
            printf("Inválido!!");
            break;
    }

    // Switch para o SEGUNDO atributo (ADICIONADO)
    switch(atributo2) {
        case 1:
            valor1_attr2 = area1;
            valor2_attr2 = area2;
            nome_attr2 = "Área";
            break;
        case 2:
            valor1_attr2 = populacao1;
            valor2_attr2 = populacao2;
            nome_attr2 = "População";
            break;
        case 3:
            valor1_attr2 = PIB1;
            valor2_attr2 = PIB2;
            nome_attr2 = "PIB";
            break;
        case 4:
            valor1_attr2 = pontoturistico1;
            valor2_attr2 = pontoturistico2;
            nome_attr2 = "Pontos Turísticos";
            break;
        case 5:
            valor1_attr2 = densidade1;
            valor2_attr2 = densidade2;
            nome_attr2 = "Densidade Demográfica";
            break;
        default:
            printf("Inválido!!");
            break;
    }

    printf("\nAtributos que foram comparados: %s e %s\n", nome_attr1, nome_attr2);
    printf("%s - %s: %.2f, %s: %.2f\n", cidade1, nome_attr1, valor1_attr1, nome_attr2, valor1_attr2);
    printf("%s - %s: %.2f, %s: %.2f\n", cidade2, nome_attr1, valor2_attr1, nome_attr2, valor2_attr2);

    // comparação de atributos
    // Atributo 1
    if (atributo1 == 5) { // Densidade (menor vence)
        if (valor1_attr1 < valor2_attr1) {
            printf("%s vence em %s\n", cidade1, nome_attr1);
        } else if (valor2_attr1 < valor1_attr1) {
            printf("%s vence em %s\n", cidade2, nome_attr1);
        } else {
            printf("Empate em %s\n", nome_attr1);
        }
    } else { // Outros atributos (maior vence)
        if (valor1_attr1 > valor2_attr1) {
            printf("%s vence em %s\n", cidade1, nome_attr1);
        } else if (valor2_attr1 > valor1_attr1) {
            printf("%s vence em %s\n", cidade2, nome_attr1);
        } else {
            printf("Empate em %s\n", nome_attr1);
        }
    }

    // Segundo atributo
    if (atributo2 == 5) { // Densidade (menor vence)
        if (valor1_attr2 < valor2_attr2) {
            printf("%s vence em %s\n", cidade1, nome_attr2);
        } else if (valor2_attr2 < valor1_attr2) {
            printf("%s vence em %s\n", cidade2, nome_attr2);
        } else {
            printf("Empate em %s\n", nome_attr2);
        }
    } else { // Outros atributos (maior vence)
        if (valor1_attr2 > valor2_attr2) {
            printf("%s vence em %s\n", cidade1, nome_attr2);
        } else if (valor2_attr2 > valor1_attr2) {
            printf("%s vence em %s\n", cidade2, nome_attr2);
        } else {
            printf("Empate em %s\n", nome_attr2);
        }
    }
    
    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;

    printf("\n--- Soma dos atributos ---\n");
    printf("%s: %.2f + %.2f = %.2f\n", cidade1, valor1_attr1, valor1_attr2, soma1);
    printf("%s: %.2f + %.2f = %.2f\n", cidade2, valor2_attr1, valor2_attr2, soma2);

    printf("\n--- RESULTADO FINAL ---\n");
    if (soma1 > soma2) {
        printf("CARTA VENCEDORA: %s\n", cidade1);
    } else if (soma2 > soma1) {
        printf("CARTA VENCEDORA: %s\n", cidade2);
    } else {
        printf("EMPATE!\n");
    }
    
    return 0;
}