#include <stdio.h>


int main(){

    int nCarta, nPontosTuristicos, populacao;
    char estado[10];
    char nomeCidade [10];
    char codigo[10];
    float areaKm;
    float pib;
    int nCarta2, nPontosTuristicos2, populacao2;
    char estado2[10];
    char nomeCidade2 [10];
    char codigo2[10];
        float areaKm2;
    float pib2;
    
    printf ("Digite o número da carta:\n ");
    scanf ("%d", &nCarta);

    printf ("Digite o estado da carta: \n ");
    scanf ("%s", &estado);

    printf ("Digite o código da carta:\n ");
    scanf ("%s", &codigo);

    printf ("Digite o nome da cidade:\n ");
    scanf ("%s", &nomeCidade);

    printf ("Digite qual o tamanho da população:\n");
    scanf ("%d",  &populacao);

    printf ("Digite a área em km² dessa cidade:\n ");
    scanf("%f", &areaKm);

    printf ("Digite o PIB dessa cidade:\n ");
    scanf("%f", &pib);

    printf ("Digite o número de pontos turísticos da cidade:\n ");
    scanf ("%d", &nPontosTuristicos);

    printf("Carta %d\n", nCarta);
    printf("Estado: %s\n", estado);
    printf("Código: %s%s\n", estado,codigo);
    printf("Nome da Cidade: %s\n",nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", areaKm);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf ("Número de Pontos Turísticos: %d\n", nPontosTuristicos);

    printf ("---------------------------------------------------------------------\n");

    printf ("Digite o número da carta:\n ");
    scanf ("%d", &nCarta2);

    printf ("Digite o estado da carta:\n ");
    scanf ("%s", &estado2);

    printf("Digite o código da carta:\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nomeCidade2);
    
    printf ("Digite qual o tamanho da população:\n ");
    scanf ("%d", &populacao2);

    printf ("Digite a área em km² dessa cidade:\n ");
    scanf ("%f", &areaKm2);

    printf ("Digite o PIB dessa cidade:\n ");
    scanf("%f", &pib2);

    printf ("Digite o número de pontos turísticos da cidade:\n ");
    scanf ("%d", &nPontosTuristicos2);

    printf("Carta %d\n", nCarta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2,codigo2);
    printf("Nome da Cidade: %s\n",nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", nPontosTuristicos2);

    
    return 0;

}