#include <stdio.h>

int main() {
    // Variáveis das cartas
    char estado1, estado2;
    char cod1[4], cod2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Entrada da primeira carta
    printf("Digite o estado da primeira carta 'A' a 'H': \n");
    scanf(" %c", &estado1);
    printf("Digite o codigo da primeira carta Ex:'A01','B03': \n");
    scanf("%s", cod1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area1); 
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontos1);
    
    // Cálculo da densidade e PIB per capita da carta 1
    float dens1 = populacao1 / area1;
    float percap1 = pib1 / populacao1;

    // Entrada da segunda carta
    printf("Digite o estado da segunda carta 'A' a 'H': \n");
    scanf(" %c", &estado2);
    printf("Digite o codigo da segunda carta Ex:'A01','B03': \n");
    scanf("%s", cod2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2); 
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontos2);
    
    // Cálculo da densidade e PIB per capita da carta 2
    float dens2 = populacao2 / area2;
    float percap2 = pib2 / populacao2;

    // Apresentação das cartas
    printf("\n     APRESENTAÇÃO DAS CARTAS\n\n");

    printf("CARTA 01\n");
    printf("ESTADO: %c\n", estado1);
    printf("CÓDIGO: %s\n", cod1);
    printf("NOME DA CIDADE: %s\n", cidade1);
    printf("POPULAÇÃO: %lu\n", populacao1);
    printf("ÁREA: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("PONTOS TURÍSTICOS: %d\n", pontos1);
    printf("DENSIDADE: %.2f hab/km²\n", dens1);
    printf("PIB PER CAPITA: R$ %.2f\n\n", percap1);

    printf("CARTA 02\n");
    printf("ESTADO: %c\n", estado2);
    printf("CÓDIGO: %s\n", cod2);
    printf("NOME DA CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %lu\n", populacao2);
    printf("ÁREA: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("PONTOS TURÍSTICOS: %d\n", pontos2);
    printf("DENSIDADE: %.2f hab/km²\n", dens2);
    printf("PIB PER CAPITA: R$ %.2f\n\n", percap2);

    // Comparação única por atributo escolhido: População
    printf("COMPARAÇÃO DE CARTAS (Atributo: População):\n\n");

    printf("Carta 1 - %s (%c): %lu habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu habitantes\n\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate! Ambas as cidades têm a mesma população.\n");
    }

    return 0;
}
