#include<stdio.h>

int main(){

    char estado;
    char codigo[5];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos;
    
    printf("CARTA 01 \n");
    
	printf("Digite seu estado: \n");
    scanf("%s", &estado);
    
    printf("Digite o Código da Cidade: \n");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);
    
    printf("Digite a População: \n");
    scanf("%d", &populacao);
    
    printf("Digite a Área em km²: \n");
    scanf("%f", &area);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib);       
    
    printf("Digite o Número de pontos Turisticos: \n");
    scanf("%d", &pontos);

    printf("Carta 01\n");
    printf("Estado: %s\n", &estado);
    printf("Código da Cidade: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d habitantes\n", populacao);   
    printf("Área em km²: %.3f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turisticos: %d\n", pontos);

    printf("CARTA 02 \n");
    
	printf("Digite seu estado: \n");
    scanf("%s", &estado);
    
    printf("Digite o Código da Cidade: \n");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);
    
    printf("Digite a População: \n");
    scanf("%d", &populacao);
    
    printf("Digite a Área em km²: \n");
    scanf("%f", &area);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib);       
    
    printf("Digite o Número de pontos Turisticos: \n");
    scanf("%d", &pontos);
    
    
    printf("Carta 02\n");
    printf("Estado: %s\n", &estado);
    printf("Código da Cidade: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d habitantes\n", populacao);   
    printf("Área em km²: %.3f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turisticos: %d\n", pontos);
    
    return 0;

}
