#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    int numero_pontos_turisticos1, numero_pontos_turisticos2, atributo1;
    int vencedor_populacao;
    unsigned long int populacao1, populacao2;
    float super_poder1, super_poder2, area_cidade1, pib1, area_cidade2, pib2, densidade_populacional1 = 0, densidade_populacional2 = 0, pib_per_capita1 = 0, pib_per_capita2 = 0;
    char estado1[5], codigo_carta1[20], nome_cidade1[50], estado2[5], codigo_carta2[20], nome_cidade2[50];

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("Digite os dados de duas cartas para o jogo Super Trunfo de Paises.\n");

    // Solicitação dos dados da primeira carta

    printf("\nDigite o Estado da primeira carta: ");
    scanf(" %s", &estado1);

    printf("\nDigite o codigo da primeira carta: ");
    scanf(" %s", &codigo_carta1);
    getchar();

    printf("\nDigite o nome da cidade da primeira carta: ");
    fgets(nome_cidade1, 50, stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = 0;

    printf("\nDigite o numero de habitantes da cidade da primeira carta: ");
    scanf(" %i", &populacao1);

    printf("\nDigite a area em quilometros quadrados da cidade da primeira carta: ");
    scanf(" %f", &area_cidade1);

    printf("\nDigite o PIB da cidade da primeira carta: ");
    scanf(" %f", &pib1);

    printf("\nDigite o numero de pontos turisticos da cidade da primeira carta: ");
    scanf(" %i", &numero_pontos_turisticos1);

    printf("\n\n");

    // Calculando densidade populacional, super poder e pib per capita da carta 1

    densidade_populacional1 = populacao1/area_cidade1;
    pib_per_capita1 = pib1/populacao1;
    super_poder1 = ( (float) populacao1 + area_cidade1 + pib1 + (float) numero_pontos_turisticos1 + pib_per_capita1 - densidade_populacional1 );

    // Solicitação dos dados da segunda carta

    printf("\nAgora serao requisitados os dados da segunda carta.\n");
    
    printf("\nDigite o Estado da segunda carta: ");
    scanf(" %s", &estado2);

    printf("\nDigite o codigo da segunda carta: "); 
    scanf(" %s", &codigo_carta2);
    getchar();

    printf("\nDigite o nome da cidade da segunda carta: ");
    fgets(nome_cidade2, 50, stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = 0;

    printf("\nDigite o numero de habitantes da cidade da segunda carta: ");
    scanf(" %i", &populacao2);

    printf("\nDigite a area em quilometros quadrados da cidade da segunda carta: ");
    scanf(" %f", &area_cidade2);

    printf("\nDigite o PIB da cidade da segunda carta: ");
    scanf(" %f", &pib2);

    printf("\nDigite o numero de pontos turisticos da cidade da segunda carta: ");
    scanf(" %i", &numero_pontos_turisticos2);

    printf("\n\n");

    // Calculando densidade populacional, super poder e pib per capita da carta 2

    densidade_populacional2 = populacao2/area_cidade2;
    pib_per_capita2 = pib2/populacao2;
    super_poder2 = ( (float) populacao2 + area_cidade2 + pib2 + (float) numero_pontos_turisticos2 + pib_per_capita2 - densidade_populacional2 ); 
    
    // Escolha de qual atributo a ser comparado:
    
    printf ("Atributos disponíveis para comparação: \n");
    printf (" 1 - População\n 2 - Área\n 3 - PIB\n 4 - Número de pontos turísticos\n 5 - Densidade demográfica\n");
    printf ("Digite o número correspondente ao atributo que quer comparar: ");
    scanf("%d",&atributo1);

    switch(atributo1) {
        case 1: 
        if (populacao1 > populacao2) {
            printf("Cidade 1 tem maior população.\n");
            vencedor_populacao = 1;
        } else if (populacao1 < populacao2) {
            printf("Cidade 2 tem maior população.\n");
            vencedor_populacao = 2;
        } else {
            printf("Houve um empate!\n");
            vencedor_populacao = 0;
        }
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    printf ("Comparação de cartas (Atributo: População):\n\n");
    printf ("Carta 1 - %s (%s): %i\n", nome_cidade1, estado1, populacao1);
    printf ("Carta 2 - %s (%s): %i\n", nome_cidade2, estado2, populacao2);
    printf ("Resultado: Carta %i (%s) venceu!\n",vencedor_populacao, 
            (populacao1 > populacao2) ? nome_cidade1 : nome_cidade2);

    return 0;
}
