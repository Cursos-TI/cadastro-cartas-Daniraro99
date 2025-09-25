#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Carta 1
  char codigo_carta1[10];     // Código da carta (ex: A01)
  char cidade1[50];           // Nome da cidade
  long long populacao1;       // População (usando long long para números grandes)
  float area1;                // Área em km²
  float pib1;                 // PIB
  int pontos_turisticos1;     // Número de pontos turísticos

  // Carta 2
  char codigo_carta2[10];     // Código da carta (ex: B02)
  char cidade2[50];           // Nome da cidade
  long long populacao2;       // População (usando long long para números grandes)
  float area2;                // Área em km²
  float pib2;                 // PIB
  int pontos_turisticos2;     // Número de pontos turísticos

  // Área para entrada de dados

  // Carta 1
  printf("--- Cadastro da Carta 1 ---\n");
  printf("Digite o codigo da carta (ex: A01): ");
  scanf("%s", codigo_carta1);
  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", cidade1); // Lê a linha inteira, incluindo espaços
  printf("Digite a populacao: ");
  scanf("%lld", &populacao1);
  printf("Digite a area em km2: ");
  scanf("%f", &area1);
  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontos_turisticos1);

  // Carta 2
  printf("\n--- Cadastro da Carta 2 ---\n");
  printf("Digite o codigo da carta (ex: B02): ");
  scanf("%s", codigo_carta2);
  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", cidade2);
  printf("Digite a populacao: ");
  scanf("%lld", &populacao2);
  printf("Digite a area em km2: ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade

  printf("\n\n--- CARTAS CADASTRADAS ---\n");
  printf("---------------------------\n");

  // Carta 1
  printf("--- Carta 1 ---\n");
  printf("Codigo: %s\n", codigo_carta1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %lld\n", populacao1);
  printf("Area (km2): %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n\n", pontos_turisticos1);

  // Carta 2
  printf("--- Carta 2 ---\n");
  printf("Codigo: %s\n", codigo_carta2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %lld\n", populacao2);
  printf("Area (km2): %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos_turisticos2);

return 0;
} 
