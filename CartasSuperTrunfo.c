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
    scanf("%c", &estado1);
    printf("Digite o codigo da primeira carta Ex:'A01','B03': \n");
    scanf("%s", cod1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area1); 
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontos1);
	
	//Calculo da densidade e do PIB per Capita da primeira carta
	float dens1= populacao1/area1;
	float percap1= pib1/populacao1;
	
    // Segunda carta
    printf("Digite o estado da segunda carta 'A' a 'H': \n");
    scanf(" %c", &estado2);
    printf("Digite o codigo da segunda carta Ex:'A01','B03': \n");
    scanf("%s", cod2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2); 
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontos2);
	
	//Calculo da densidade e do PIB per Capita da segunda carta
	float dens2= populacao2/area2;
	float percap2= pib2/populacao2;
	
    // Texto de apresentação das cartas
    printf("     APRESENTAÇÃO DAS CARTAS\n\n");
    
    //Apresentação primeira carta
    printf("CARTA 01\n");
    printf("ESTADO: %c \n",estado1);
    printf("CÓDIGO: %s \n",cod1);
    printf("NOME DA CIDADE: %s \n",cidade1);
    printf("POPULAÇÃO DA CIDADE: %d \n",populacao1);
    printf("ÁREA DA CIDADE: %f km²\n",area1);
    printf("PIB DA CIDADE: R$ %f \n",pib1);
    printf("NUMERO DE PONTOS TURISTICOS: %d \n",pontos1);
	printf("DENSIDADE POPULACIONAL: %f hab/km²\n",dens1);
	printf("PIB PER CAPITA: R$ %f \n\n",percap1);

      //Apresentação segunda carta
    printf("CARTA 02\n");
    printf("ESTADO: %c \n",estado2);
    printf("CÓDIGO: %s \n",cod2);
    printf("NOME DA CIDADE: %s \n",cidade2);
    printf("POPULAÇÃO DA CIDADE: %d \n",populacao2);
    printf("ÁREA DA CIDADE: %f km²\n",area2);
    printf("PIB DA CIDADE: R$ %f \n",pib2);
    printf("NUMERO DE PONTOS TURISTICOS: %d \n",pontos2);
    printf("DENSIDADE POPULACIONAL: %f hab/km²\n",dens2);
	printf("PIB PER CAPITA: R$ %f \n\n",percap2);
	
    return 0;
}
