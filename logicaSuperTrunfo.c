#include <stdio.h>

int main() {

    char estado1[20], cod1[20], cidade1[20], estado2[20], cod2[20], cidade2[20];
    float population1, area1, PIB1, population2, area2, PIB2, densidade1, densidade2;
    int touristPoint1, touristPoint2, card1, card2;


    //cadastro das primeiras cartas e propriedades
    printf("Digite o código da primeira cidade: \n");
    scanf("%s", &cod1);
    printf("Digite o estado: \n");
    scanf("%s", &estado1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);
    printf("Digite a população da cidade: \n");
    scanf("%f", &population1);
    printf("Digite a Área da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);
    printf("Digite a quantidade de pontos turístidos: \n");
    scanf("%d", &touristPoint1);
    printf("Digite a densidade populacional da cidade: \n");
    scanf("%f", &densidade1);
    
    //cadastro da segunda carta e propriedades
    printf("Digite o código da segunda cidade: \n");
    scanf("%s", &cod2);
    printf("Digite o estado: \n");
    scanf("%s", &estado2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);
    printf("Digite a população da cidade: \n");
    scanf("%f", &population2);
    printf("Digite a Área da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);
    printf("Digite a quantidade de pontos turístidos: \n");
    scanf("%d", &touristPoint2);
    printf("Digite a densidade populacional da cidade: \n");
    scanf("%f", &densidade2);
    
    //Lógica de comparação entre duas cartas
    if (population1 > population2){
        printf("A cidade 1 tem maior população.\n");
    } else {
        printf("A cidade 2 tem maior população.\n");
    }

    if (area1 > area2){
        printf("A cidade 1 tem uma área maior. \n");
    } else {
        printf("A cidade 2 tem uma área maior. \n");
    }

    if (PIB1 > PIB2){
        printf("A cidade 1 tem um PIB maior. \n");
    } else {
        printf("A cidade 2 tem um PIB maior. \n");
    }

    if (touristPoint1 > touristPoint2){
        printf("A cidade 1 tem mais pontos turísticos. \n");
    } else {
        printf("A cidade 2 tem mais pontos turísticos. \n");
    }

    if (densidade1 < densidade2){
        printf("A cidade 1 tem uma menor densidade. \n");
    } else {
        printf("A cidade 2 tem uma menor densidade. \n");
    }

    if (card1 > card2){
        printf("A cidade 1 Ganhou");
    } else {
        printf("A cidade 2 Ganhou");
    }


    return 0;
}
