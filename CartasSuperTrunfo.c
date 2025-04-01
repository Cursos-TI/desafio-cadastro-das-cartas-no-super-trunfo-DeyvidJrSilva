#include <stdio.h>


int main() {
    //Variaveis das cartas
    char estado1, estado2;
    char cod1[4], cod2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    //Primeira carta
    printf("Digite o estado da primeira carta 'A' a 'H': \n");
    scanf(" %c", &estado1);
    printf("Digite o codigo da primeira carta Ex:'A01','B03': \n");
    scanf(" %s", cod1);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade1);
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &area1); 
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib1);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf(" %d", &pontos1);

    //Segunda carta
    printf("Digite o estado da segunda carta 'A' a 'H': \n");
    scanf(" %c", &estado2);
    printf("Digite o codigo da segunda carta Ex:'A01','B03': \n");
    scanf(" %s", cod2);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade2);
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &area2); 
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf(" %d", &pontos2);

    //Apresentação primeira carta
    Printf("CARTA 01\n\n");
    Printf("ESTADO: %c \n",estado1);
    Printf("CÓDIGO: %s \n",cod1);
    Printf("NOME DA CIDADE: %s \n",cidade1);
    Printf("POPULAÇÃO DA CIDADE: %d \n",populacao1);
    Printf("ÁREA DA CIDADE: %F \n",area1);
    Printf("PIB DA CIDADE: %f \n",pib1);
    Printf("NUMERO DE PONTOS TURISTICOS: %d \n",pontos1);

      //Apresentação primeira carta
    Printf("CARTA 02\n\n");
    Printf("ESTADO: %c \n",estado2);
    Printf("CÓDIGO: %s \n",cod2);
    Printf("NOME DA CIDADE: %s \n",cidade2);
    Printf("POPULAÇÃO DA CIDADE: %d \n",populacao2);
    Printf("ÁREA DA CIDADE: %F \n",area2);
    Printf("PIB DA CIDADE: %f \n",pib2);
    Printf("NUMERO DE PONTOS TURISTICOS: %d \n",pontos2);
    
    return 0;
}
