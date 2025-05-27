#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
 
    char estado;
    int codigo;
    char nome[50];
    int populacao;
    float area, pib;
    int pontosTuristicos;
    float area em km;

    printf("Digite o nome do estado");
    scanf("%s", &estado);

    printf("Digite o código da cidade: ");
    scanf("%d", &codigodacidade);

    printf("Digite o nome da cidade:");
    scanf(" %s", &cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    
    printf("estado: %s\n", estado);
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}

