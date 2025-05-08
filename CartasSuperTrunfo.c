#include <stdio.h>
#include <string.h>

int main() {
    char estado1, estado2, cod1[4], cod2[4], cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2;
    int pontos_turisticos1, pontos_turisticos2;

    // Entrada da primeira carta
    printf("Digite o estado da primeira carta 'A' a 'H': ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da primeira carta Ex:'A01','B03': ");
    scanf("%s", cod1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos1);
	
	// Cálculo da densidade e PIB per capita da carta 1
    densidade1 = populacao1 / area1;

    // Entrada da segunda carta
    printf("\nDigite o estado da segunda carta: ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da segunda carta: ");
    scanf("%s", cod2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
	
    // Cálculo da densidade e PIB per capita da carta 2
    densidade2 = populacao2 / area2;

    // Menu dos atributos
    int atributo1, atributo2;
    float valor1_atributo1 = 0, valor2_atributo1 = 0;
    float valor1_atributo2 = 0, valor2_atributo2 = 0;

    printf("\n--- ATRIBUTOS ---\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo (1 a 5): ");
    scanf("%d", &atributo1);

    // Segundo atributo (sem repetir o primeiro)
    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1) printf("Você já escolheu esse atributo!\n");
    } while (atributo2 == atributo1);

    // Valores dos atributos escolhidos para cada cidade
    valor1_atributo1 = (atributo1 == 1) ? populacao1 : (atributo1 == 2) ? area1 : 
                        (atributo1 == 3) ? pib1 : (atributo1 == 4) ? pontos_turisticos1 : densidade1;
    valor2_atributo1 = (atributo1 == 1) ? populacao2 : (atributo1 == 2) ? area2 : 
                        (atributo1 == 3) ? pib2 : (atributo1 == 4) ? pontos_turisticos2 : densidade2;

    valor1_atributo2 = (atributo2 == 1) ? populacao1 : (atributo2 == 2) ? area1 : 
                        (atributo2 == 3) ? pib1 : (atributo2 == 4) ? pontos_turisticos1 : densidade1;
    valor2_atributo2 = (atributo2 == 1) ? populacao2 : (atributo2 == 2) ? area2 : 
                        (atributo2 == 3) ? pib2 : (atributo2 == 4) ? pontos_turisticos2 : densidade2;

    // Exibição dos valores
    printf("\nComparando %s (%c) x %s (%c)\n", cidade1, estado1, cidade2, estado2);
    printf("Atributo %d: %.2f x %.2f\n", atributo1, valor1_atributo1, valor2_atributo1);
    printf("Atributo %d: %.2f x %.2f\n", atributo2, valor1_atributo2, valor2_atributo2);

    // Comparação de cada atributo
    int pontos_cidade1 = 0, pontos_cidade2 = 0;

    if (atributo1 == 5)
        (valor1_atributo1 < valor2_atributo1) ? pontos_cidade1++ : (valor2_atributo1 < valor1_atributo1) ? pontos_cidade2++ : 0;
    else
        (valor1_atributo1 > valor2_atributo1) ? pontos_cidade1++ : (valor2_atributo1 > valor1_atributo1) ? pontos_cidade2++ : 0;

    if (atributo2 == 5)
        (valor1_atributo2 < valor2_atributo2) ? pontos_cidade1++ : (valor2_atributo2 < valor1_atributo2) ? pontos_cidade2++ : 0;
    else
        (valor1_atributo2 > valor2_atributo2) ? pontos_cidade1++ : (valor2_atributo2 > valor1_atributo2) ? pontos_cidade2++ : 0;

    // Soma dos valores dos dois atributos
    float soma_cidade1 = valor1_atributo1 + valor1_atributo2;
    float soma_cidade2 = valor2_atributo1 + valor2_atributo2;

    // Exibição da soma
    printf("\nSoma dos atributos:\n%s: %.2f\n%s: %.2f\n", cidade1, soma_cidade1, cidade2, soma_cidade2);

    // Resultado final
    printf("\nResultado final: ");
    if (soma_cidade1 > soma_cidade2)
        printf("%s venceu!\n", cidade1);
    else if (soma_cidade2 > soma_cidade1)
        printf("%s venceu!\n", cidade2);
    else
        printf("Empate!\n");

    return 0;
}
