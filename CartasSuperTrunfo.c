#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas - Nivel Novato

int main() {

    // Variáveis para armazenamento dos valor da Carta 1
    char estado_carta1;
    char codigo_carta1[50];
    char cidade_carta1[100];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;

    //Variáveis para armazenamento dos valor da Carta 2
    char estado_carta2;
    char codigo_carta2[50];
    char cidade_carta2[100];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;

    // Entrada de dados para a Carta 1
    printf("DADOS PARA CADASTRO DA CARTA 1: \n");
    printf("Digite uma letra(A-H) que representa o estado da Carta 1: ");
    scanf(" %c", &estado_carta1);

    printf("Digite o código (letra do estado + número de 1-4) da Carta 1: ");
    scanf(" %s", codigo_carta1);

    getchar(); // Limpa o '\n' deixado pelo scanf anterior

    printf("Digite o nome da cidade da Carta 1: ");
    fgets(cidade_carta1, 100, stdin); // stdin é a entrada padrão do input(teclado)

    printf("Digite o número de habitantes da cidade da Carta 1: ");
    scanf(" %d", &populacao_carta1);

    printf("Digite a área da cidade em km2 da Carta 1: ");
    scanf(" %f", &area_carta1);

    printf("Digite o pib da cidade da Carta 1: ");
    scanf(" %f", &pib_carta1);

    printf("Digite o número de pontos turísticos da cidade da Carta 1: ");
    scanf(" %d", &pontos_turisticos_carta1);

    printf("\n \n");

    // Entrada de dados para a Carta 2
    printf("DADOS PARA CADASTRO DA CARTA 2: \n");
    printf("Digite uma letra(A-H) que representa o estado da Carta 2: ");
    scanf(" %c", &estado_carta2);

    printf("Digite o código (letra do estado + número de 1-4) da Carta 2: ");
    scanf(" %s", codigo_carta2);
    
    getchar();
    printf("Digite o nome da cidade Carta 2: ");
    fgets(cidade_carta2, 100, stdin);

    printf("Digite o número de habitantes da cidade da Carta 2: ");
    scanf(" %d", &populacao_carta2);

    printf("Digite a área da cidade em km2 da Carta 2: ");
    scanf(" %f", &area_carta2);

    printf("Digite o pib da cidade da Carta 2: ");
    scanf(" %f", &pib_carta2);

    printf("Digite o número de pontos turísticos da cidade da Carta 2: ");
    scanf(" %d", &pontos_turisticos_carta2);

    printf("\n \n");

    // Impressão no console das Cartas 1 e 2.
    printf("CARTA 1: \n");
    printf("Estado: %c \n", estado_carta1);
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da cidade: %s", cidade_carta1);
    printf("População: %d habitantes\n", populacao_carta1);
    printf("Área: %f km² \n", area_carta1);
    printf("PIB: %f \n", pib_carta1);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos_carta1);

    printf("\n \n");

    printf("CARTA 2: \n");
    printf("Estado: %c \n", estado_carta2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da cidade: %s", cidade_carta2);
    printf("População: %d habitantes\n", populacao_carta2);
    printf("Área: %f km² \n", area_carta2);
    printf("PIB: %f \n", pib_carta2);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos_carta2);

    return 0;
}