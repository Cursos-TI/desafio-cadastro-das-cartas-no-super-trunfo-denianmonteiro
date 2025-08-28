#include <stdio.h>

int main() {
    char Estado1[20];
    char Codigo1[4];
    char Nomecidade1[20];
    int Populacao1;
    float area1;
    float Pib1;
    int pontosturisticos1;

    printf("Digite o estado: \n");
    scanf("%s", Estado1);

    printf("Digite o Codigo da carta: \n");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nomecidade1);

    printf("Digite a populacao: \n");
    scanf("%d", &Populacao1);

    printf("Digite o tamanho da area: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib1);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos1);

    
   
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Nomecidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", Pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);



return 0;

}
