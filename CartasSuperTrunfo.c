#include <stdio.h>

int main() {

    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turisticos: %d\n", pontosTuristicos);

    return 0;
}