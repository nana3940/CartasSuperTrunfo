#include 

int main() {
    int populacao, area, pontos_turisticos;
    float PIB;

    printf("Digite a populacao e a area: \n");
    scanf("%d %d", &populacao, &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("População: %d - Área: %d - PIB: %.2f - Pontos Turísticos: %d\n", populacao, area, PIB, pontos_turisticos);

    return 0;
}

