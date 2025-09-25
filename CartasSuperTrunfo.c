#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Parte 1 - Nivel Novato

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Carta 1
  char estado1[60];           // Nome do estado
  char codigo_carta1[10];     // Código da carta (ex: A01)
  char cidade1[50];           // Nome da cidade
  long long populacao1;       // População (usando long long para números grandes)
  float area1;                // Área em km²
  float pib1;                 // PIB
  int pontos_turisticos1;     // Número de pontos turísticos

  // Carta 2
  char estado2[60];           // Nome do estado
  char codigo_carta2[10];     // Código da carta (ex: B02)
  char cidade2[50];           // Nome da cidade
  long long populacao2;       // População (usando long long para números grandes)
  float area2;                // Área em km²
  float pib2;                 // PIB
  int pontos_turisticos2;     // Número de pontos turísticos

  // Área para entrada de dados

  // Carta 1
  printf("--- Cadastro da Carta 1 ---\n");
  printf("Digite o nome do estado (A-H): ");
  scanf(" %59[^\n]", estado1); // Lê a linha inteira, incluindo espaços
  printf("Digite o codigo da carta (ex: A01): ");
  scanf("%s", codigo_carta1);
  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", cidade1); // Lê a linha inteira, incluindo espaços
  printf("Digite a populacao: ");
  scanf("%lld", &populacao1);
  printf("Digite a area em km2 (Use ponto em vez de virgula): ");
  scanf("%f", &area1);
  printf("Digite o PIB (Use ponto em vez de virgula): ");
  scanf("%f", &pib1);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontos_turisticos1);

  // Carta 2
  printf("\n--- Cadastro da Carta 2 ---\n");
  printf("Digite o nome do estado (A-H): ");
  scanf(" %59[^\n]", estado2); // Lê a linha inteira, incluindo espaços
  printf("Digite o codigo da carta (ex: B02): ");
  scanf("%s", codigo_carta2);
  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", cidade2);
  printf("Digite a populacao: ");
  scanf("%lld", &populacao2);
  printf("Digite a area em km2 (Use ponto em vez de virgula): ");
  scanf("%f", &area2);
  printf("Digite o PIB (Use ponto em vez de virgula): ");
  scanf("%f", &pib2);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade

  printf("\n\n--- CARTAS CADASTRADAS ---\n");
  printf("---------------------------\n");

  // Carta 1
  printf("--- Carta 1 ---\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigo_carta1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %lld\n", populacao1);
  printf("Area (km2): %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n\n", pontos_turisticos1);

  // Carta 2
  printf("--- Carta 2 ---\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo_carta2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %lld\n", populacao2);
  printf("Area (km2): %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos_turisticos2);

  //Parte 2 - Nivel Aventureiro

  // Cálculo e exibição da densidade demográfica (população/área)
  float densidade1 = populacao1 / area1; // Densidade demográfica da carta 1
  float densidade2 = populacao2 / area2; // Densidade demográfica da carta 2
  printf("\n--- Densidade Demografica ---\n");
  printf("Densidade da Carta 1 (%s): %.2f hab/km2\n", cidade1, densidade1);
  printf("Densidade da Carta 2 (%s): %.2f hab/km2\n", cidade2, densidade2); 

  // Cálculo e exibição do PIB per capita (PIB/população)
  float pib_per_capita1 = pib1 / populacao1; // PIB per capita da carta 1
  float pib_per_capita2 = pib2 / populacao2; // PIB per capita da carta 2
  printf("\n--- PIB per Capita ---\n");
  printf("PIB per Capita da Carta 1 (%s): %.2f\n", cidade1, pib_per_capita1);
  printf("PIB per Capita da Carta 2 (%s): %.2f\n", cidade2, pib_per_capita2); 

  // parte 3 - Nivel Mestre
   
  float super_trunfo1 = (pontos_turisticos1 * 2) + (pib_per_capita1 * 0.5) + (densidade1 * 0.3);
  float super_trunfo2 = (pontos_turisticos2 * 2) + (pib_per_capita2 * 0.5) + (densidade2 * 0.3);
  printf("\n--- Pontuacao Super Trunfo ---\n");
  printf("Pontuacao Super Trunfo da Carta 1 (%s): %.2f\n", cidade1, super_trunfo1);
  printf("Pontuacao Super Trunfo da Carta 2 (%s): %.2f\n", cidade2, super_trunfo2); 

  // Comparação entre as duas cidades com base em um critério escolhido (população, área, PIB ou pontos turísticos)
  printf("\n--- Comparacao entre as Cidades ---\n");
  if (populacao1 > populacao2) {
    printf("A cidade com maior populacao e %s com %lld habitantes.\n", cidade1, populacao1);
  } else if (populacao2 > populacao1) {
    printf("A cidade com maior populacao e %s com %lld habitantes.\n", cidade2, populacao2);
  } else {
    printf("As duas cidades tem a mesma populacao de %lld habitantes.\n", populacao1);
  } 

return 0;
} 
