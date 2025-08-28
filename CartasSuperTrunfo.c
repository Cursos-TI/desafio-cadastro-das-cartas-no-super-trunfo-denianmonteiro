#include <stdio.h>

int main() {
    // Carta 1
    char Estado1[20];
    char Codigo1[4];
    char NomeCidade1[30];
    int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;

    // Carta 2
    char Estado2[20];
    char Codigo2[4];
    char NomeCidade2[30];
    int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;

    // Cadastro da primeira carta 
    printf("Cadastro da Primeira Carta:\n");
    printf("Digite o estado: ");
    scanf("%s", Estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", NomeCidade1); // <-- aceita nomes com espaço

    printf("Digite a populacao: ");
    scanf("%d", &Populacao1);

    printf("Digite o tamanho da area: ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &Pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &PontosTuristicos1);

    // Cadastro da segunda carta 
    printf("\nCadastro da Segunda Carta:\n");
    printf("Digite o estado: ");
    scanf("%s", Estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", NomeCidade2); // <-- aceita nomes com espaço

    printf("Digite a populacao: ");
    scanf("%d", &Populacao2);

    printf("Digite o tamanho da area: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &Pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &PontosTuristicos2);

    // --- Exibindo os dados ---
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", NomeCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f\n", Pib1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", NomeCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f\n", Pib2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);

    return 0;
}