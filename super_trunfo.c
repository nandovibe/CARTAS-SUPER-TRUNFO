#include <stdio.h>

int main() {
    // Dados pré-definidos das cartas
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28; // em bilhões
    int pontos1 = 50;

    char estado2 = 'B';
    char codigo2[] = "B02";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50; // em bilhões
    int pontos2 = 30;

    // Cálculos adicionais
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1; 

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados da primeira carta
    printf("Carta 1:\n\n");
    printf("Estado: %c\n\n", estado1);
    printf("Código: %s\n\n", codigo1);
    printf("Nome da Cidade: %s\n\n", cidade1);
    printf("População: %d\n\n", populacao1);
    printf("Área: %.2f km²\n\n", area1);
    printf("PIB: %.2f bilhões de reais\n\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    // Exibição dos dados da segunda carta
    printf("Carta 2:\n\n");
    printf("Estado: %c\n\n", estado2);
    printf("Código: %s\n\n", codigo2);
    printf("Nome da Cidade: %s\n\n", cidade2);
    printf("População: %d\n\n", populacao2);
    printf("Área: %.2f km²\n\n", area2);
    printf("PIB: %.2f bilhões de reais\n\n", pib2);
    printf("Número de Pontos Turísticos: %d\n\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}