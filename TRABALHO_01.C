
#include <stdio.h>

int main() {
    // Carta 1 - Fortaleza (CE)
    char estado1;
    char codigo1[8];
    char nome_Cidade1[50];
    int populacao1;
    float area1;
    float rendimento_1;
    int pontos_Turisticos1;
    float densidade1;
    float pib_per_capita1;

    // Carta 2 - São Paulo (SP)
    char estado2;
    char codigo2[8];
    char nome_Cidade2[50];
    int populacao2;
    float area2;
    float rendimento_2;
    int pontos_Turisticos2;
    float densidade2;
    float pib_per_capita2;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado ( COLOQUE AS SIGLAS DO ESTADO = letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Nome da Cidade: ");
    getchar(); // limpar buffer
    fgets(nome_Cidade1, sizeof(nome_Cidade1), stdin);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &rendimento_1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_Turisticos1);

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Estado ( COLOQUE AS SIGLAS DO ESTADO = letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf(" %3s", codigo2);

    printf("Nome da Cidade: ");
    getchar(); // limpar buffer
    fgets(nome_Cidade2, sizeof(nome_Cidade2), stdin);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &rendimento_2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_Turisticos2);

    // Cálculos para Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (rendimento_1 * 1000000000) / populacao1;

    // Cálculos para Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (rendimento_2 * 1000000000) / populacao2;

    // Impressão dos dados
    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", nome_Cidade1); // fgets inclui \n
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", rendimento_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_Turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", nome_Cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", rendimento_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_Turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
