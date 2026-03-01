#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    int numero_pontos_turisticos1, numero_pontos_turisticos2;
    int vencedor, atributo1, atributo2;
    unsigned long int populacao1, populacao2;
    float super_poder1, super_poder2, area_cidade1, pib1, area_cidade2, pib2, densidade_populacional1 = 0, densidade_populacional2 = 0, pib_per_capita1 = 0, pib_per_capita2 = 0;
    float soma_atributos1, soma_atributos2;
    char estado1[5], codigo_carta1[20], nome_cidade1[50], estado2[5], codigo_carta2[20], nome_cidade2[50];

    //Variáveis para exibição no final:

    char nome_atributo[50], nome_atributo2[50];
    float valor_exibicao1_A, valor_exibicao2_A, valor_exibicao1_B, valor_exibicao2_B;

    
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

    densidade_populacional1 = (float)populacao1/area_cidade1;
    pib_per_capita1 = pib1/(float)populacao1;
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

    densidade_populacional2 = (float)populacao2/area_cidade2;
    pib_per_capita2 = pib2/(float)populacao2;
    super_poder2 = ( (float) populacao2 + area_cidade2 + pib2 + (float) numero_pontos_turisticos2 + pib_per_capita2 - densidade_populacional2 ); 
    
    // Escolha de qual atributo a ser comparado:
    
    printf ("Escolha dois atributos diferentes entre os atributos disponíveis para comparação: \n\n");
    printf (" 1 - População\n 2 - Área\n 3 - PIB\n 4 - Número de pontos turísticos\n 5 - Densidade demográfica\n 6 - Super poder\n\n");
    printf ("Digite o primeiro número, correspondente ao atributo que quer comparar: ");
    scanf("%d",&atributo1);

    // Lógica para fazer o menu dinamico onde a opção escolhida desaparece e impede o usuário de escolher um atributo igual

    if (atributo1 != 1) printf("1 - População\n");
    if (atributo1 != 2) printf("2 - Área\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turísticos\n");
    if (atributo1 != 5) printf("5 - Densidade\n");
    if (atributo1 != 6) printf("6 - Super Poder\n");

    printf ("Digite o segundo número, correspondente ao atributo que quer comparar: ");
    scanf("%d",&atributo2);

    if (atributo1 == atributo2) {
        printf("\nErro: Escolha atributos diferentes!\n");
        return 0;
    }

    printf("\n\n");

    switch(atributo1) {
        case 1: 
        strcpy(nome_atributo, "População");

        valor_exibicao1_A = (float)populacao1;
        valor_exibicao2_A = (float)populacao2;

        if (populacao1 > populacao2) {
            printf("Cidade 1 tem maior população.\n");
            vencedor = 1;
        } else if (populacao1 < populacao2) {
            printf("Cidade 2 tem maior população.\n");
            vencedor = 2;
        } else {
            printf("Houve um empate!\n");
            vencedor = 0;
        }
            break;

        case 2: 
        strcpy(nome_atributo, "Área");

        valor_exibicao1_A = area_cidade1;
        valor_exibicao2_A = area_cidade2;

        if (area_cidade1 > area_cidade2) {
            printf("Cidade 1 tem maior área.\n");
            vencedor = 1;
        } else if (area_cidade1 < area_cidade2) {
            printf("Cidade 2 tem maior área.\n");
            vencedor = 2;
        } else {
            printf("Houve um empate!\n");
            vencedor = 0;
        }
            break;

        case 3: 
        strcpy(nome_atributo, "PIB");

        valor_exibicao1_A = pib1;
        valor_exibicao2_A = pib2;

        if (pib1 > pib2) {
            printf("Cidade 1 tem maior PIB.\n");
            vencedor = 1;
        } else if (pib1 < pib2) {
            printf("Cidade 2 tem maior PIB.\n");
            vencedor = 2;
        } else {
            printf("Houve um empate!\n");
            vencedor = 0;
        }
            break;

        case 4: 
        strcpy(nome_atributo, "Número de Pontos Turísticos");

        valor_exibicao1_A = (float)numero_pontos_turisticos1;
        valor_exibicao2_A = (float)numero_pontos_turisticos2;

        if (numero_pontos_turisticos1 > numero_pontos_turisticos2) {
            printf("Cidade 1 tem maior número de pontos turísticos.\n");
            vencedor = 1;
        } else if (numero_pontos_turisticos1 < numero_pontos_turisticos2) {
            printf("Cidade 2 tem maior número de pontos turísticos.\n");
            vencedor = 2;
        } else {
            printf("Houve um empate!\n");
            vencedor = 0;
        }
            break;

        case 5: 
        strcpy(nome_atributo, "Densidade Demográfica");

        valor_exibicao1_A = densidade_populacional1;
        valor_exibicao2_A = densidade_populacional2;

        if (densidade_populacional2 > densidade_populacional1) {
            printf("Cidade 1 tem menor densidade populacional.\n");
            vencedor = 1;
        } else if (densidade_populacional2 < densidade_populacional1) {
            printf("Cidade 2 tem menor densidade populacional.\n");
            vencedor = 2;
        } else {
            printf("Houve um empate!\n");
            vencedor = 0;
        }
            break;

        case 6:
        strcpy(nome_atributo, "Super Poder");

        valor_exibicao1_A = super_poder1;
        valor_exibicao2_A = super_poder2;

        if (super_poder1 > super_poder2) {
            printf("Cidade 1 tem maior super poder.\n");
            vencedor = 1;
        } else if (super_poder1 < super_poder2) {
            printf("Cidade 2 tem menor super poder.\n");
            vencedor = 2;
        } else {
            printf("Houve um empate!\n");
            vencedor = 0;
        }
            break;

        default:
            printf("Opção inválida");
            return 0;
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    printf ("\nComparação de cartas (Atributo: %s):\n\n",nome_atributo);
    printf ("Carta 1 - %s (%s): %.2f\n", nome_cidade1, estado1, valor_exibicao1_A);
    printf ("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, valor_exibicao2_A);

    if (vencedor == 0 ) {
        printf ("Resultado: Empate!\n");
    } else if (vencedor == 1) {
        printf ("Resultado: Carta %i (%s) venceu!\n",vencedor, nome_cidade1);
    } else { 
        printf ("Resultado: Carta %i (%s) venceu!\n",vencedor, nome_cidade2);
    }

    return 0;
}
