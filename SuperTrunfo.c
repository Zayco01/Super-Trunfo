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
    printf("Digite o c�digo da carta 1: ");
    scanf("%s", codigo1);
    printf("Digite a cidade da carta 1: ");
    scanf("%s", cidade1);
    printf("Digite a popula��o da carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a �rea da carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o n�mero de pontos tur�sticos da carta 1: ");
    scanf("%d", &turismo1);

    printf("Digite a primeira letra do estado da carta 2: ");
    scanf("%s", estado2);
    printf("Digite o c�digo da carta 2: ");
    scanf("%s", codigo2);
    printf("Digite a cidade da carta 2: ");
    scanf("%s", cidade2);
    printf("Digite a popula��o da carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a �rea da carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o n�mero de pontos tur�sticos da carta 2: ");
    scanf("%d", &turismo2);

    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);

    printf("C�digo: %c%s\n", estado1[0], codigo1);

    printf("Cidade: %s\n", cidade1);
    printf("Popula��o: %d\n", populacao1);
    printf("�rea: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos tur�sticos: %d\n", turismo1);

    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("C�digo: %c%s\n", estado2[0], codigo2);

    printf("Cidade: %s\n", cidade2);
    printf("Popula��o: %d\n", populacao2);
    printf("�rea: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos tur�sticos: %d\n", turismo2);

    return 0;
}