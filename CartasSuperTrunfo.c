#include <stdio.h>
#include <string.h>

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

    // Menu de escolha das opções com SWITCH
    int opcao;
    printf("\n---- MENU DE COMPARAÇÃO ----\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo para comparar (1 a 5): ");
    scanf("%d", &opcao);

    printf("\nComparando %s (%c) e %s (%c):\n", cidade1, estado1, cidade2, estado2);

    switch(opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f\n", cidade1, pib1);
            printf("%s: R$ %.2f\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", cidade1, pontos1);
            printf("%s: %d pontos\n", cidade2, pontos2);
            if (pontos1 > pontos2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pontos2 > pontos1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // Densidade demográfica (MENOR vence)
            printf("Atributo: Densidade Demográfica (MENOR VENCE)\n");
            printf("%s: %.2f hab/km²\n", cidade1, dens1);
            printf("%s: %.2f hab/km²\n", cidade2, dens2);
            if (dens1 < dens2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (dens2 < dens1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida. Por favor, escolha entre 1 e 5.\n");
    }

    return 0;
}
