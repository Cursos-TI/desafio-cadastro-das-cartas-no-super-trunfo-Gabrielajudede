#include <locale.h>
#include <stdio.h>

int main() {    
    char codigo[20];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;  
    
    setlocale(LC_NUMERIC, "pt-BR");

    //Pais 01
    printf("Pais01: Brasil\n");
    printf("Digite o codigo do Pais, Ex:P01\n");
    printf("DIgite o codigo: \n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    printf("Dodigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f trilhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Estado A
    printf("EstadoA: Ceara\n");
    printf("Digite o codigo do estado, Ex:A\n");
    printf("DIgite o codigo: \n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    printf("Dodigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade A01
    printf("Cidade1: Juazeiro do Norte\n");
    printf("Digite o codigo da cidade, ex:A01\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade A02
    printf("Cidade2: Barbalha\n");
    printf("Digite o codigo da cidade, ex:A02\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Cidade A03
    printf("Cidade3: Caririaçu\n");
    printf("Digite o codigo da cidade, ex:A03\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("DIgite o PIB:\n");
    scanf("%f", &PIB);
    printf("DIgite a quntidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);
    
    //Cidade A04
    printf("Cidade4: Crato\n");
    printf("Digite o codigo da cidade, Ex:A04\n");
    printf("DIgite o codigo:\n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("DIgite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Estado B
    printf("EstadoB: Piaui\n");
    printf("DIgite o codigo do Estado, Ex:B\n");
    printf("DIgite o codigo:\n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("DIgite a area:\n");
    scanf("%f", &area);
    printf("DIgite o PIB:\n");
    scanf("%f", &PIB);
    printf("DIgite a quntidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Cidade B01
    printf("Cidade1: Uruçui\n");
    printf("Digite o codigo da cidade, Ex:B01\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade B02
    printf("Cidade2: Santa Filomena\n");
    printf("Digite o codigo da cidade, Ex:B02\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade B03
    printf("Cidade3: Lagoa do Barro do Piaui\n");
    printf("Digite o codigo da cidade, Ex:B03\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade B04
    printf("Cidade4: Baixa Grande do Ribeiro\n");
    printf("Digite o codigo da cidade, Ex:B04\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Estado C
    printf("EstadoC: pernambuco\n");
    printf("DIgite o codigo do Estado, Ex:C\n");
    printf("DIgite o codigo:\n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("DIgite a area:\n");
    scanf("%f", &area);
    printf("DIgite o PIB:\n");
    scanf("%f", &PIB);
    printf("DIgite a quntidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Cidade C01
    printf("Cidade1: Recife\n");
    printf("Digite o codigo da cidade, Ex:C01\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

     //Cidade C02
    printf("Cidade2: Petrolina\n");
    printf("Digite o codigo da cidade, Ex:C02\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade C03
    printf("Cidade3: Caruaru\n");
    printf("Digite o codigo da cidade, Ex:C03\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade C04
    printf("Cidade4: Olinda\n");
    printf("Digite o codigo da cidade, Ex:C04\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Estado D
    printf("EstadoD: Rio Grande do Norte\n");
    printf("DIgite o codigo do Estado, Ex:D\n");
    printf("DIgite o codigo:\n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("DIgite a area:\n");
    scanf("%f", &area);
    printf("DIgite o PIB:\n");
    scanf("%f", &PIB);
    printf("DIgite a quntidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Cidade D01
    printf("Cidade1: Natal\n");
    printf("Digite o codigo da cidade, Ex:D01\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade D02
    printf("Cidade2: Mossoro\n");
    printf("Digite o codigo da cidade, Ex:D02\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade D03
    printf("Cidade3: Macaiba\n");
    printf("Digite o codigo da cidade, Ex:D03\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade D04
    printf("Cidade4: Caioco\n");
    printf("Digite o codigo da cidade, Ex:D04\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Estado E
    printf("EstadoE: Bahia\n");
    printf("DIgite o codigo do Estado, Ex:E\n");
    printf("DIgite o codigo:\n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("DIgite a area:\n");
    scanf("%f", &area);
    printf("DIgite o PIB:\n");
    scanf("%f", &PIB);
    printf("DIgite a quntidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Cidade E01
    printf("Cidade1: Abaiara\n");
    printf("Digite o codigo da cidade, Ex:E01\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade E02
    printf("Cidade2: Mucuri\n");
    printf("Digite o codigo da cidade, Ex:E02\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade E03
    printf("Cidade3: Salvador\n");
    printf("Digite o codigo da cidade, Ex:E03\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade E04
    printf("Cidade4: Paramirim\n");
    printf("Digite o codigo da cidade, Ex:E04\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Estado F
    printf("EstadoF: Maranhao\n");
    printf("DIgite o codigo do Estado, Ex:F\n");
    printf("DIgite o codigo:\n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("DIgite a area:\n");
    scanf("%f", &area);
    printf("DIgite o PIB:\n");
    scanf("%f", &PIB);
    printf("DIgite a quntidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Cidade F01
    printf("Cidade1: Açailandia\n");
    printf("Digite o codigo da cidade, Ex:F01\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade F02
    printf("Cidade2: Cantanhede\n");
    printf("Digite o codigo da cidade, Ex:F03\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade F03
    printf("Cidade3: Icatu\n");
    printf("Digite o codigo da cidade, Ex:F03\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade F04
    printf("Cidade4: Sambaiba\n");
    printf("Digite o codigo da cidade, Ex:F04\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Estado G
    printf("EstadoG: Paraiba\n");
    printf("DIgite o codigo do Estado, Ex:G\n");
    printf("DIgite o codigo:\n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("DIgite a area:\n");
    scanf("%f", &area);
    printf("DIgite o PIB:\n");
    scanf("%f", &PIB);
    printf("DIgite a quntidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Cidade G01
    printf("Cidade1: Agua Branca\n");
    printf("Digite o codigo da cidade, Ex:G01\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade G02
    printf("Cidade2: Picui\n");
    printf("Digite o codigo da cidade, Ex:G02\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade G03
    printf("Cidade3: Santa Cruz\n");
    printf("Digite o codigo da cidade, Ex:G03\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade G04
    printf("Cidade4: Vista Seraana\n");
    printf("Digite o codigo da cidade, Ex:G04\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Estado H
    printf("EstadoH: Alagoas\n");
    printf("DIgite o codigo do Estado, Ex:H\n");
    printf("DIgite o codigo:\n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("DIgite a area:\n");
    scanf("%f", &area);
    printf("DIgite o PIB:\n");
    scanf("%f", &PIB);
    printf("DIgite a quntidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Cidade H01
    printf("Cidade1: Maceio\n");
    printf("Digite o codigo da cidade, Ex:H01\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade H02
    printf("Cidade2: Arapiraca\n");
    printf("Digite o codigo da cidade, Ex:H02\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade H03
    printf("Cidade3: Rio Largo\n");
    printf("Digite o codigo da cidade, Ex:H03\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

    //Cidade H04
    printf("Cidade4: Penedo\n");
    printf("Digite o codigo da cidade, Ex:H04\n");
    printf("Digite o codigo:\n");
    scanf("%s", &codigo);
    printf("DIgite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quntdade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Pupulacao: %.2f milhao de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", PIB);
    printf("Pountos turisticos: %d\n", pontos_turisticos);

     //Pais 02
     printf("Pais02: Canada\n");
     printf("Digite o codigo do Pais, Ex:P02\n");
     printf("DIgite o codigo: \n");
     scanf("%s", &codigo);
     printf("Digite a populacao:\n");
     scanf("%d", &populacao);
     printf("Digite a area: \n");
     scanf("%f", &area);
     printf("Digite o PIB: \n");
     scanf("%f", &PIB);
     printf("Digite a quantidade de pontos turisticos: \n");
     scanf("%d", &pontos_turisticos);
     printf("Dodigo: %s\n", codigo);
     printf("Populacao: %.2d milhoes de habitantes\n", populacao);
     printf("Area: %.2f km²\n", area);
     printf("PIB: $ %.2f trilhoes(USD)\n", PIB);
     printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Estado A
    printf("EstadoA: Alberta\n");
    printf("Digite o codigo do estado, Ex:A\n");
    printf("DIgite o codigo: \n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    printf("Dodigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: C$ %.2f bilhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade A01
    printf("Cidade1: Calgary\n");
    printf("Digite o codigo da cidade, ex:A01\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade A02
    printf("Cidade2: Brooks\n");
    printf("Digite o codigo da cidade, ex:A02\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade A03
    printf("Cidade3: Lacombe\n");
    printf("Digite o codigo da cidade, ex:A03\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade A04
    printf("Cidade4: Medicine Hat\n");
    printf("Digite o codigo da cidade, ex:A04\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Estado B
    printf("EstadoB: Colúmbia Britânica\n");
    printf("Digite o codigo do estado, Ex:B\n");
    printf("DIgite o codigo: \n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    printf("Dodigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: C$ %.2f bilhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade B01
    printf("Cidade1: Penticton\n");
    printf("Digite o codigo da cidade, ex:B01\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade B02
    printf("Cidade2: Nanaimo\n");
    printf("Digite o codigo da cidade, ex:B02\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade B03
    printf("Cidade3: Chilliwack\n");
    printf("Digite o codigo da cidade, ex:B03\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade B04
    printf("Cidade4: Abbotsford\n");
    printf("Digite o codigo da cidade, ex:B04\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Estado C
    printf("EstadoC: Manitoba\n");
    printf("Digite o codigo do estado, Ex:C\n");
    printf("DIgite o codigo: \n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    printf("Dodigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: C$ %.2f bilhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade C01
    printf("Cidade1: Winnipeg\n");
    printf("Digite o codigo da cidade, ex:C01\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade C02
    printf("Cidade2: Brandon\n");
    printf("Digite o codigo da cidade, ex:C02\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade C03
    printf("Cidade3: Steinbach\n");
    printf("Digite o codigo da cidade, ex:C03\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade C04
    printf("Cidade4: Thompson\n");
    printf("Digite o codigo da cidade, ex:C04\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Estado D
    printf("EstadoD: Quebec\n");
    printf("Digite o codigo do estado, Ex:D\n");
    printf("DIgite o codigo: \n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    printf("Dodigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: C$ %.2f bilhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade D01
    printf("Cidade1: Laval\n");
    printf("Digite o codigo da cidade, ex:D01\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade D02
    printf("Cidade2: Gatineau\n");
    printf("Digite o codigo da cidade, ex:D02\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade D03
    printf("Cidade3: Lévis\n");
    printf("Digite o codigo da cidade, ex:D03\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade D04
    printf("Cidade4: Longueuil\n");
    printf("Digite o codigo da cidade, ex:D04\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Estado E
    printf("EstadoE: Ontario\n");
    printf("Digite o codigo do estado, Ex:E\n");
    printf("DIgite o codigo: \n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    printf("Dodigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: C$ %.2f bilhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade E01
    printf("Cidade1: Brampton\n");
    printf("Digite o codigo da cidade, ex:E01\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade E02
    printf("Cidade2: Hamilton\n");
    printf("Digite o codigo da cidade, ex:E02\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade E03
    printf("Cidade3: Ottawa\n");
    printf("Digite o codigo da cidade, ex:E03\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade E04
    printf("Cidade4: Toronto\n");
    printf("Digite o codigo da cidade, ex:E04\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Estado F
    printf("EstadoF: Nova Escócia\n");
    printf("Digite o codigo do estado, Ex:F\n");
    printf("DIgite o codigo: \n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    printf("Dodigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: C$ %.2f bilhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade F01
    printf("Cidade1: Halifax\n");
    printf("Digite o codigo da cidade, ex:F01\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d milhoes de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade F02
    printf("Cidade2: Colchester\n");
    printf("Digite o codigo da cidade, ex:F02\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade F03
    printf("Cidade3: Cape Breton\n");
    printf("Digite o codigo da cidade, ex:F03\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade F04
    printf("Cidade4: Kings\n");
    printf("Digite o codigo da cidade, ex:F04\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Estado G
    printf("EstadoG: Nova Brunswick\n");
    printf("Digite o codigo do estado, Ex:G\n");
    printf("DIgite o codigo: \n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    printf("Dodigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: C$ %.2f bilhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade G01
    printf("Cidade1: Saint John\n");
    printf("Digite o codigo da cidade, ex:G01\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade G02
    printf("Cidade2: Moncton\n");
    printf("Digite o codigo da cidade, ex:G02\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade G03
    printf("Cidade3: Fredericton\n");
    printf("Digite o codigo da cidade, ex:G03\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade G04
    printf("Cidade4: Dieppe\n");
    printf("Digite o codigo da cidade, ex:G04\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil  habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Estado H
    printf("EstadoH: Ilha do Príncipe Eduardo\n");
    printf("Digite o codigo do estado, Ex:H\n");
    printf("DIgite o codigo: \n");
    scanf("%s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    printf("Dodigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: C$ %.2f bilhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade H01
    printf("Cidade1: Charlottetown\n");
    printf("Digite o codigo da cidade, ex:H01\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade H02
    printf("Cidade2:  Summerside\n");
    printf("Digite o codigo da cidade, ex:H02\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade H03
    printf("Cidade3:  Stratford\n");
    printf("Digite o codigo da cidade, ex:H03\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //cidade H04
    printf("Cidade4: Belfast\n");
    printf("Digite o codigo da cidade, ex:H04\n");
    printf("Digite o codigo:\n");
    scanf(" %s", &codigo);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de ponts turisticos:\n");
    scanf("%d", &pontos_turisticos);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %.2d mil habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    

    return 0;
}
