#include <stdio.h>

// Desafio Super Trunfo - Países


int main() {
    

//variaveis carta 1
    char estado[50];
    char cod[20];
    char cidade[50];
    int populacao;
    int npt;
    float area;
    float pib;

//variaveis carta 2
    char estado2[50];
    char cod2[20];
    char cidade2[50];
    int populacao2;
    int npt2;
    float area2;
    float pib2;

 //Cadastro da primeira carta
 printf("Digite os dados da primeira carta\n");
 printf("\n");

    printf("digite o estado: ");
    scanf("%s", estado);
    
    printf("digite o código da carta: ");
    scanf("%s", cod);

    printf("digite a cidade: ");
    scanf("%s", cidade);

    printf("digite a população: ");
    scanf("%d", &populacao);

    printf("digite número de pontos turisticos: ");
    scanf("%d", &npt);

    printf("digite a area da cidade: ");
    scanf("%f", &area);

    printf("digite o PIB: ");
    scanf("%f",  &pib);


    printf("Digite agora os dados da segunda carta\n");
    printf("\n");
    

 //Cadastro da segunda carta

    printf("digite o estado: ");
    scanf("%s", estado2);
    
    printf("digite o código da carta: ");
    scanf("%s", cod2);

    printf("digite a cidade: ");
    scanf("%s", cidade2);

    printf("digite a população: ");
    scanf("%d", &populacao2);

    printf("digite número de pontos turisticos: ");
    scanf("%d", &npt2);

    printf("digite a area da cidade: ");
    scanf("%f", &area2);

    printf("digite o PIB: ");
    scanf("%f", &pib2);

    printf("\n");


  //Impressão da primeira carta
  printf("CARTA 1\n");
    printf("Estado é: %s\n", estado);
    printf("Código é: %s\n", cod);
    printf("Cidade é: %s\n", cidade);
    printf("População é: %d Habitantes\n", populacao);
    printf("Número de Pontos Turísticos é: %d\n", npt);
    printf("Área da cidade é: %.2f km²\n", area);
    printf("PIB é: R$ %.f Bilhões\n", pib);
    printf("\n");

    
 //Impressão da segunda carta
 printf("CARTA 2\n");
    printf("Estado é: %s\n", estado2);
    printf("Código é: %s\n", cod2);
    printf("Cidade é: %s\n", cidade2);
    printf("População é: %d Habitantes\n", populacao2);
    printf("Número de Pontos Turísticos é: %d\n", npt2);
    printf("Área da cidade é: %.2f km²\n", area2);
    printf("PIB é: R$ %.f Bilhões\n", pib2);
    printf("\n");

return 0;   
}
