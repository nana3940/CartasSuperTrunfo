#include 

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char nome[50];
    int populacao;
    float area;
    float pib;

    // Área para entrada de dados
    printf("Digite o nome da cidade: ");
    scanf("%s", nome);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);

    // Área para exibição dos dados da cidade
    printf("\n--- Informações da Cidade ---\n");
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);

    return 0;
}
