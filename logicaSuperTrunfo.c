#include <stdio.h>

int main() {

    // cda = código da carta;
    // ndc = nome da cidade;
    // akm2 = área em km²;
    // npt = número de pontos turisticos;
    //dp = densidade populacional;
    //ppc = PIB per capita;
    //sp = super poder;
    char estado1, estado2;
    char cda1[10], cda2[10];
    char ndc1[20], ndc2[20];
    unsigned long int populacao1, populacao2;
    float akm21, akm22;
    float pib1, pib2;
    int  npt1, npt2;
    float dp1;
    float ppc1;
    float dp2;
    float ppc2;
    float sp1;
    float sp2;


    printf("Carta 1: \n");

    printf("Insira o nome do estado:\n");
    scanf("%c", &estado1);

    printf("Insira o codigo da carta:\n");
    scanf("%s", &cda1);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &ndc1);

    printf("Insira a populacao:\n");
    scanf("%d", &populacao1);

    printf("Insira a area em km2:\n");
    scanf("%f", &akm21);

    printf("Insira o PBI:\n");
    scanf("%f", &pib1);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &npt1);

    dp1 = populacao1 / akm21;
    ppc1 = pib1 / populacao1;
    sp1 = (float) populacao1 + akm21 + pib1 + npt1 + dp1 + ppc1;


    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cda1);
    printf("Nome da Cidade: %s\n", ndc1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", akm21);
    printf("PIB: %f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", npt1);
    printf("Densidade Populacional %f\n", dp1);
    printf("PIB per capita: %f\n", ppc1);
    printf("Super poder: %f\n", sp1);



    printf("Carta 2: \n");

    printf("Insira o nome do estado:\n");
    scanf("\n%c", &estado2);

    printf("Insira o codigo da carta:\n");
    scanf("%s", &cda2);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &ndc2);

    printf("Insira a populacao:\n");
    scanf("%d", &populacao2);

    printf("Insira a area em km2:\n");
    scanf("%f", &akm22);

    printf("Insira o PBI:\n");
    scanf("%f", &pib2);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &npt2);

    dp2 = populacao2 / akm22;
    ppc2 = pib2 / populacao2;
    sp2 = (float) populacao2 + akm22 + pib2 + npt2 + dp2 + ppc2;


    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", cda2);
    printf("Nome da Cidade: %s\n", ndc2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", akm22);
    printf("PIB: %f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", npt2);
    printf("Densidade Populacional %f\n", dp2);
    printf("PIB per capita: %f\n", ppc2);
    printf("Super poder: %f\n\n\n", sp2);

    printf("Populacao:\n");
    printf("Carta 1 - %s: %d\n", ndc1, populacao1);
    printf("Carta 2 - %s: %d\n", ndc2, populacao2);
    
    if(populacao1 > populacao2){
        printf("Carta 1 venceu!\n\n");
    }else {
        printf("Carta 2 venceu!\n\n");
    }

    printf("Area por km2:\n");
    printf("Carta 1 - %s: %f\n", ndc1, akm21);
    printf("Carta 2 - %s: %f\n", ndc2, akm22);
    
    if(akm21 > akm22){
        printf("Carta 1 venceu!\n\n");
    }else {
        printf("Carta 2 venceu!\n\n");
    }


    printf("PBI:\n");
    printf("Carta 1 - %s: %f\n", ndc1, pib1);
    printf("Carta 2 - %s: %f\n", ndc2, pib2);
    
    if(pib1 > pib2){
        printf("Carta 1 venceu!\n\n");
    }else {
        printf("Carta 2 venceu!\n\n");
    }


    printf("Numero de pontos turisticos:\n");
    printf("Carta 1 - %s: %d\n", ndc1, npt1);
    printf("Carta 2 - %s: %d\n", ndc2, npt2);
    
    if(npt1 > npt2){
        printf("Carta 1 venceu!\n\n");
    }else {
        printf("Carta 2 venceu!\n\n");
    }


    printf("Densidade populacional:\n");
    printf("Carta 1 - %s: %f\n", ndc1, dp1);
    printf("Carta 2 - %s: %f\n", ndc2, dp2);
    
    if(dp1 < dp2){
        printf("Carta 1 venceu!\n\n");
    }else {
        printf("Carta 2 venceu!\n\n");
    }


    printf("PIB per capta:\n");
    printf("Carta 1 - %s: %f\n", ndc1, ppc1);
    printf("Carta 2 - %s: %f\n", ndc2, ppc2);
    
    if(ppc1 > ppc2){
        printf("Carta 1 venceu!\n\n");
    }else {
        printf("Carta 2 venceu!\n\n");
    }


    printf("Super Poder:\n");
    printf("Carta 1 - %s: %f\n", ndc1, sp1);
    printf("Carta 2 - %s: %f\n", ndc2, sp2);
    
    if(sp1 > sp2){
        printf("Carta 1 venceu!\n\n");
    }else {
        printf("Carta 2 venceu!\n\n");
    }


    return 0;
}