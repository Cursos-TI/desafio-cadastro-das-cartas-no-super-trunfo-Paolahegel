#include <stdio.h>
#include <string.h>


int main() {
    // Corrigindo as declarações das strings
    char estadoTrunfo1[2], codigoDaCarta1[5], nomeDaCidade1[50];
    char estadoTrunfo2[2], codigoDaCarta2[5], nomeDaCidade2[50];

    int populacaoCidade1, quantidadePontosTuristicos1;
    int populacaoCidade2, quantidadePontosTuristicos2;

    float areaCidade1, pibCidade1;
    float areaCidade2, pibCidade2;

    // Solicita as informações da CARTA 1
    printf("CARTA 1 - Insira a letra do estado ('A' a 'H') que está na Carta 1: \n");
    scanf("%1s", estadoTrunfo1);
    printf("CARTA 1 - Insira o código da Carta 1, é letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%3s", codigoDaCarta1);

    getchar(); // Consume '\n' do scanf anterior

    // Permite a entrada de nome composto da variável
    printf("CARTA 1 - Insira o nome da cidade: \n");
    fgets(nomeDaCidade1, sizeof(nomeDaCidade1), stdin);
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = 0; // Remove o '\n' final

    printf("CARTA 1 - Insira o número de habitantes na cidade: \n");
    scanf("%d", &populacaoCidade1);
    printf("CARTA 1 - Insira a área da cidade (km²): \n");
    scanf("%f", &areaCidade1);
    printf("CARTA 1 - Insira o valor do PIB da cidade: \n");
    scanf("%f", &pibCidade1);
    printf("CARTA 1 - Insira a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &quantidadePontosTuristicos1);

    getchar();

    // Solicita as informações da CARTA 2
    printf("\nCARTA 2 - Insira a letra do estado ('A' a 'H') que está na Carta 2: \n");
    scanf("%1s", estadoTrunfo2);
    printf("CARTA 2 - Insira o código da Carta 2, é letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%3s", codigoDaCarta2);

    getchar();

    printf("CARTA 2 - Insira o nome da cidade: \n");
    fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin);
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = 0;

    printf("CARTA 2 - Insira o número de habitantes na cidade: \n");
    scanf("%d", &populacaoCidade2);
    printf("CARTA 2 - Insira a área da cidade (km²): \n");
    scanf("%f", &areaCidade2);
    printf("CARTA 2 - Insira o valor do PIB da cidade: \n");
    scanf("%f", &pibCidade2);
    printf("CARTA 2 - Insira a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &quantidadePontosTuristicos2);

    // Exibição das informações da CARTA 1
    printf("\n========= CARTA 1 =========\n");
    printf("Estado: %s\n", estadoTrunfo1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacaoCidade1);
    printf("Área: %.2f km²\n", areaCidade1);
    printf("PIB: %.2f bilhões de reais\n", pibCidade1);
    printf("Número de Pontos Turísticos: %d\n", quantidadePontosTuristicos1);

    // Exibição das informações da CARTA 2
    printf("\n========= CARTA 2 =========\n");
    printf("Estado: %s\n", estadoTrunfo2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacaoCidade2);
    printf("Área: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f\n", pibCidade2);
    printf("Número de Pontos Turísticos: %d\n", quantidadePontosTuristicos2);

    return 0;
}
