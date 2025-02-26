#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int carta1 = 1;
    int carta2 = 2;

    char estado1[20], estado2[20];
    char codigo1[6], codigo2[6];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;

    printf("Digite a primeira letra do estado da carta 1: ");
    scanf("%s", estado1);
    printf("Digite o código da carta 1: ");
    scanf("%s", codigo1);
    printf("Digite a cidade da carta 1: ");
    scanf("%s", cidade1);
    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &turismo1);

    printf("Digite a primeira letra do estado da carta 2: ");
    scanf("%s", estado2);
    printf("Digite o código da carta 2: ");
    scanf("%s", codigo2);
    printf("Digite a cidade da carta 2: ");
    scanf("%s", cidade2);
    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &turismo2);

    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);

    printf("Código: %c%s\n", estado1[0], codigo1);

    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", turismo1);
    printf("Densidade populacional: %f\n", populacao1 / area1);
    printf("PIB per capita: %f\n", pib1 / populacao1);

    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %c%s\n", estado2[0], codigo2);

    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);
    printf("Densidade populacional: %f\n", populacao2 / area2);
    printf("PIB per capita: %f\n", pib2 / populacao2);

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;
    float super_poder1 = populacao1 + area1 + pib1 + turismo1 + pib_per_capita1 + (1 / densidade1);
    float super_poder2 = populacao2 + area2 + pib2 + turismo2 + pib_per_capita2 + (1 / densidade2);

    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (turismo1 > turismo2) ? 1 : 2, (turismo1 > turismo2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2));

    return 0;
}
