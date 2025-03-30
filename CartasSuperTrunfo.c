#include <stdio.h>
#include <locale.h>

int main(){
    //achei esse comando para ler os caracteres especiais.
    setlocale(LC_ALL,"Portuguese");
    // Declaração de variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;


    // Entrada de dados para a primeira carta
    printf("Digite o estado da primeira cidade (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta: ");
    scanf(" %s", &codigo1);
    printf("Digite o nome da primeira cidade: ");
    scanf(" %s", &nomeCidade1);
    printf("Digite a população da cidade: ");
    scanf(" %f", &populacao1);
    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta
    printf("\nDigite o estado da segunda cidade (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta: ");
    scanf(" %s", &codigo2);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %s", &nomeCidade2);
    printf("Digite a população da cidade: ");
    scanf(" %f", &populacao2);
    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

      // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %.3f\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.3f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

      // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %.3f\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.3f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
  }

