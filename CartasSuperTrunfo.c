#include <stdio.h>




int main(){
    char Estado[20];
    char Codigo[10];
    char Nome_da_cidade[20];
    int Populacao;
    float Area;
    float PIB;
    int Pontos_turisticos;
    float Densidade_populacional;
    float PIB_per_capita;

    //Estado 1
    printf("Cidade:Juazeiro do Norte \n");
    printf("Digite o Estado: \n");
    scanf("%s", &Estado);
    printf("Digite o Codigo, Ex:A\n");
    scanf("%s", &Codigo);
    printf("Digite o Nome da cidade: \n");
    scanf("%s", &Nome_da_cidade);
    printf("Digite a Populacao: \n");
    scanf(" %d", &Populacao);
    printf("Digite a Area: \n");
    scanf(" %f", &Area);
    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);
    printf("Digite pontos turisticos: \n");
    scanf(" %d", &Pontos_turisticos);
    
    printf("Carta 1: \n");
    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Nome_da_cidade);
    printf("Populacao: %.3d Mil habitantes\n", Populacao);
    printf("Area: %.2f km²\n", Area);
    printf("PIB: R$ %.2f Milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", Pontos_turisticos);
    
    Densidade_populacional =(float) (Populacao / Area);
    PIB_per_capita =(float) (PIB / Populacao);
    printf("Dencidade populacional: R$ %.2f Milhoes\n", Densidade_populacional);
    printf("PIB per capita: %.2f Milhoes\n", PIB_per_capita);

    
    //Estado 2
    printf("Cidade:Fortaleza \n");
    printf("Digite o Estado: \n");
    scanf("%s", &Estado);
    printf("Digite o Codigo, Ex:A\n");
    scanf("%s", &Codigo);
    printf("Digite o Nome da cidade: \n");
    scanf("%s", &Nome_da_cidade);
    printf("Digite a Populacao: \n");
    scanf(" %d", &Populacao);
    printf("Digite a Area: \n");
    scanf(" %f", &Area);
    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);
    printf("Digite pontos turisticos: \n");
    scanf(" %d", &Pontos_turisticos);
    
    printf("Carta 1: \n");
    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Nome_da_cidade);
    printf("Populacao: %.2d Milhoes de habitantes\n", Populacao);
    printf("Area: %.2f km²\n", Area);
    printf("PIB: R$ %.2f Milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", Pontos_turisticos);
    
    Densidade_populacional =(float) (Populacao / Area);
    PIB_per_capita =(float) (PIB / Populacao);
    printf("Dencidade populacional: R$ %.2f Milhoes\n", Densidade_populacional);
    printf("PIB per capita: %.2f Milhoes\n", PIB_per_capita);
    





    return 0;
}