#include <stdio.h>

   int main(){

    char estado[50];
    char cidade[50];
    char codigo[50];
    int população;
    int pontosturisticos;
    float pib;
    float area;
    float densidadepopulacional;
    float pibpercapital;

    printf("digite seu estado: \n");
    scanf("%s", &estado);

    printf("nome da cidade: \n");
    scanf("%s", &cidade);

    printf("codigo: \n");
    scanf("%S", &codigo);

    printf("população: \n");
    scanf("%d", &população);

    printf("pontosturisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("pib: \n");
    scanf("%f", &pib);

    printf("area km²: \n");
    scanf("%f", &area);

    (população/ area);
    (pib / população);

    printf("carta 1! \n");
    printf("estado: %s \n", estado);
    printf("cidade: %s \n", cidade);
    printf("codigo: %s \n", codigo);
    printf("populaçao: %d \n", população);
    printf("pontos turisticos: %d \n", pontosturisticos);
    printf("pib: %f \n", pib);
    printf("area km²: %f \n", area);
    printf("densidade populacional km²: %f \n", população / area);
    printf("pib per capital: %f \n", pib / população);

    printf("digite seu estado: \n");
    scanf("%s", &estado);

    printf("nome da cidade: \n");
    scanf("%s", &cidade);

    printf("codigo: \n");
    scanf("%S", &codigo);

    printf("população: \n");
    scanf("%d", &população);

    printf("pontosturisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("pib: \n");
    scanf("%f", &pib);

    printf("area km²: \n");
    scanf("%f", &area);


    printf("carta 2! \n");
    printf("estado: %s \n", estado);
    printf("cidade: %s \n", cidade);
    printf("codigo: %s \n", codigo);
    printf("populaçao: %d \n", população);
    printf("pontos turisticos: %d \n", pontosturisticos);
    printf("pib: %f \n", pib);
    printf("area km²: %f \n", area);
    printf("densidade populacional km²: %f\n", população / area);
    printf("pib per capital: %f \n", pib / população);


    return 0;

    printf("novo comit\n");

}
