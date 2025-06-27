#include <stdio.h>

   int main(){

    char estado[50];
    char cidade[50];
    char codigo[50];
    char TipoComparação;
    int população1, população2;
    int pontosturisticos;
    int Resultado;
    float pib;
    float area;
    float densidadepopulacional;
    float pibpercapital;
    float Superpoder1, Superpoder2;
    

    printf("digite seu estado: \n");
    scanf("%s", &estado);

    printf("nome da cidade: \n");
    scanf("%s", &cidade);

    printf("codigo: \n");
    scanf("%S", &codigo);

    printf("população: \n");
    scanf("%d", &população1);

    printf("pontosturisticos: \n");

    scanf("%d", &pontosturisticos);

    printf("pib: \n");
    scanf("%f", &pib);

    printf("area: \n");
    scanf("%f", &area);

    (população1/ area);
    (pib / população1);


    printf("carta 1! \n");
    printf("estado: %s \n", estado);
    printf("cidade: %s \n", cidade);
    printf("codigo: %s \n", codigo);
    printf("populaçao: %d \n", população1);
    printf("pontos turisticos: %d \n", pontosturisticos);
    printf("pib: %.2f \n", pib / população1);
    printf("area: %.2f \n", população1/ area);
    printf("densidade populacional km²: %f \n", população1 / area);
    printf("pib per capital: %.2f \n", pib / população1);
    printf("Super poder 1: %.2f \n", população1 + area + pib + pibpercapital + pontosturisticos);
    
     printf("digite seu estado: \n");
    scanf("%s", &estado);

    printf("nome da cidade: \n");
    scanf("%s", &cidade);

    printf("codigo: \n");
    scanf("%S", &codigo);

    printf("população: \n");
    scanf("%d", &população2);

    printf("pontosturisticos: \n");

    scanf("%d", &pontosturisticos);

    printf("pib: \n");
    scanf("%f", &pib);

    printf("area: \n");
    scanf("%f", &area);

    (população2/ area);
    (pib / população2);


    printf("carta 2! \n");
    printf("estado: %s \n", estado);
    printf("cidade: %s \n", cidade);
    printf("codigo: %s \n", codigo);
    printf("populaçao: %d \n", população2);
    printf("pontos turisticos: %d \n", pontosturisticos);
    printf("pib: %.2f \n", pib / população2);
    printf("area: %.2f \n", população2 / area);
    printf("densidade populacional km²: %f \n", população2 / area);
    printf("pib per capital: %.2f \n", pib / população2);
    printf("Super poder 2: %.2f \n", população2 + area + pib + pibpercapital + pontosturisticos);
    
    
    
switch (TipoComparação)
{
case 1:
  Resultado = população1 > população2 ? 1 : 0;
  break;
case 2:
  Resultado = população1 < população2 ? 1 : 0;
  break;

default:
  break;
}


  printf("A População  da carta 1 é: %d e o do carta 2 é: %d\n", população1, população2);

  if (Resultado = população1 >= população2)
 {
  printf("Parabens carta 1 venceu!\n");
 } else
 {
  printf("Parabens carta 2 venceu!\n");
 }
 
 
  

    return 0;


   printf("Novocommit\n");



   
}
