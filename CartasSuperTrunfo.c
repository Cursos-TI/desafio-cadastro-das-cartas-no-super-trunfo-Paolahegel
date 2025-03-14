#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Cria as variáveis que irão armazenar os valores das cartas 1 e 2
    char estadoTrunfo1,codigoDaCarta1, nomeDaCidade1;
    char estadoTrunfo2,codigoDaCarta2, nomeDaCidade2;

    int populacaoCidade1, quantidadePontosTuristicos1;
    int populacaoCidade2, quantidadePontosTuristicos2;

    float areaCidade1, pibCidade1;
    float areaCidade2, pibCidade2;

    // Solicita a letra do estado da carta 1 e 2 e armazena nas respectivas variáveis
    printf("CARTA 1 - Insira a letra do estado ('A' a 'H') que está na Carta 1: \n");
    scanf("%s", &estadoTrunfo1);
    printf("CARTA 2 - Insira a letra do estado ('A' a 'H') que está na Carta 2: \n");
    scanf("%s", &estadoTrunfo2);

    // Solicita o código da carta e armazena nas respectivas variáveis
    printf("CARTA 1 - Insira o código que está na Carta 1 (seguida da letra do estado e um número de 01 a 04): \n");
    scanf("%s", &codigoDaCarta1);
    printf("CARTA 2 - Insira o código que está na Carta 2 (seguida da letra do estado e um número de 01 a 04): \n");
    scanf("%s", &codigoDaCarta2);

    // Solicita o nome da cidade e armazena nas respectivas variáveis
    printf("CARTA 1 - Insira o nome da cidade: \n");
    scanf("%s", &nomeDaCidade1);
    printf("CARTA 2 - Insira o nome da cidade: \n");
    scanf("%s", &nomeDaCidade2);

    // Solicita o numero de habitantes e armazena nas respectivas variáveis
    printf("CARTA 1 - Insira o número de habitantes na cidade: \n");
    scanf("%d", &populacaoCidade1);
    printf("CARTA 2 - Insira o número de habitantes na cidade: \n");
    scanf("%d", &populacaoCidade2);

    // Solicita a área km2 da cidade e armazena nas resceptivas variáveis
    printf("CARTA 1 - Insira a área da cidade (km²): \n");
    scanf("%f", &areaCidade1);
    printf("CARTA 2 - Insira a área da cidade (km²): \n");
    scanf("%f", &areaCidade2);

    // Solicita o PIB da cidade e armazena nas resceptivas variáveis
    printf("CARTA 1 - Insira o valor do PIB cidade: \n");
    scanf("%f", &pibCidade1);
    printf("CARTA 2 - Insira o valor do PIB cidade: \n");
    scanf("%f", &pibCidade2);

    // Solicita o numero de pontos turísticos e armazena nas respectivas variáveis
    printf("CARTA 1 - Insira a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &quantidadePontosTuristicos1);
    printf("CARTA 2 - Insira a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &quantidadePontosTuristicos2);
    
    return 0;
}
