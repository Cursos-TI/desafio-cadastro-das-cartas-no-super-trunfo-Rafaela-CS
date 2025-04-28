#include <stdio.h>

int main() {
    printf("Super-Trunfo  \n");
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float per1;

    //A segunda carta...
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float per2;

    //Printando as INFOS da CARTA1...
    printf("Cadastro da Carta 1\n");
    printf("Digite o Estado (A-H):  ");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta(Ex:A01,B03): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a População: ");
    scanf(" %d", &populacao1);
    printf("Digite a Área em km²: ");
    scanf(" %f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    //Printando as INFOS da CARTA2...
    printf("\nCadastro da Carta 2\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta(Ex:A01,B03): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Área em Km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    //Calculando os dados da CARTA1...
    densidade1 = populacao1 / area1;
    per1 = (pib1 * 10000000000) /populacao1;

    //Calculando os dados da CARTA2...
    densidade2 = populacao2 / area2;
    per2 = (pib2 * 10000000000) /populacao2;


    //Exibição da CARTA1...
    printf("\nCarta1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", per1);

    //Exibição da CARTA2...
    printf("\nCarta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", per2);

    return 0;
}