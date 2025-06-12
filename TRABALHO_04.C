#include <stdio.h>

// Protótipo da função
float getValor(int escolha, int pop, float area, float pib, int pontos, float densidade, float ppc);

// Função que retorna o valor do atributo escolhido
float getValor(int escolha, int pop, float area, float pib, int pontos, float densidade, float ppc) {
    switch (escolha) {
        case 1: return (float)pop;
        case 2: return area;
        case 3: return pib;
        case 4: return (float)pontos;
        case 5: return densidade;
        case 6: return ppc;
        default: return 0;
    }
}

int main() {
    // Carta 1
    char estado1;
    char codigo1[8];
    char nome_Cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;

    // Carta 2
    char estado2;
    char codigo2[8];
    char nome_Cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (sigla de A a H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta: ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    getchar();
    fgets(nome_Cidade1, sizeof(nome_Cidade1), stdin);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km^2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (sigla de A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta: ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    getchar();
    fgets(nome_Cidade2, sizeof(nome_Cidade2), stdin);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km^2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calculos
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    int escolha1, escolha2;
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n6. PIB per Capita\n");
    scanf("%d", &escolha1);

    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &escolha2);
    } while (escolha2 == escolha1);

    float valor1_1 = getValor(escolha1, populacao1, area1, pib1, pontos_turisticos1, densidade1, pib_per_capita1);
    float valor2_1 = getValor(escolha1, populacao2, area2, pib2, pontos_turisticos2, densidade2, pib_per_capita2);

    float valor1_2 = getValor(escolha2, populacao1, area1, pib1, pontos_turisticos1, densidade1, pib_per_capita1);
    float valor2_2 = getValor(escolha2, populacao2, area2, pib2, pontos_turisticos2, densidade2, pib_per_capita2);

    float soma1 = valor1_1 + valor1_2;
    float soma2 = valor2_1 + valor2_2;

    printf("\nComparando as cartas:\n");
    printf("Cidade 1: %s", nome_Cidade1);
    printf("Cidade 2: %s", nome_Cidade2);
    printf("\nAtributo %d: %.2f (Carta 1) vs %.2f (Carta 2)", escolha1, valor1_1, valor2_1);
    printf("\nAtributo %d: %.2f (Carta 1) vs %.2f (Carta 2)", escolha2, valor1_2, valor2_2);
    printf("\n\nSoma dos atributos:\nCarta 1: %.2f\nCarta 2: %.2f\n", soma1, soma2);

    if (soma1 > soma2) {
        printf("\nResultado: Carta 1 venceu!\n");
    } else if (soma2 > soma1) {
        printf("\nResultado: Carta 2 venceu!\n");
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
