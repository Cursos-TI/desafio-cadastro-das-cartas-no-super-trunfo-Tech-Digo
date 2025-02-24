#include <stdio.h>

typedef struct supertunfo
{ 
    char estado[3];
    char codigoCidade[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Cidade;

int main ()
{
    Cidade salvador = {"BA", "001", "Salvador",  2886698, 692.818, 63750.00, 30};
    Cidade sao_paulo = {"SP", "002","São Paulo", 12300000, 1521.11, 714000.00, 50};
    Cidade aracaju = {"SE", "003", "Aracaju", 602757, 181.9, 27364.00, 12 };
    Cidade rio_de_janeiro = {"RJ", "004","Rio de Janeiro", 6211223, 1200.329, 35963.00, 30};

    salvador.densidade_populacional = 2886698/692.818;
    salvador.pib_per_capita = 63750.00/2886698;

    sao_paulo.densidade_populacional = 12300000/1521.11;
    sao_paulo.pib_per_capita = 714000.00/12300000;
    
    aracaju.densidade_populacional = 602757/ 181.9;
    aracaju.pib_per_capita = 27364.00/602757;

    rio_de_janeiro.densidade_populacional = 6211223/1200.329;
    rio_de_janeiro.pib_per_capita = 35963.00/6211223;

    printf("Dados da carta de Salvador: \n");
    printf ("Estado: %s\n", salvador.estado);
    printf("Código da carta: %s\n", salvador.codigoCidade);
    printf("Nome: %s\n", salvador.nome);
    printf("População: %d\n", salvador.populacao);
    printf("Área: %.2f\n", salvador.area);
    printf("PIB: %.2f\n", salvador.pib);
    printf("Pontos Turísticos: %d\n", salvador.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", salvador.densidade_populacional);
    printf("PIB per capita: %.2f\n\n", salvador.pib_per_capita);

    printf("Dados da carta de São Paulo: \n");
    printf ("Estado: %s\n", sao_paulo.estado);
    printf("Código da carta: %s\n", sao_paulo.codigoCidade);
    printf("Nome: %s\n", sao_paulo.nome);
    printf("População: %d\n", sao_paulo.populacao);
    printf("Área: %.2f\n", sao_paulo.area);
    printf("PIB: %.2f\n", sao_paulo.pib);
    printf("Pontos Turísticos: %d\n", sao_paulo.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", sao_paulo.densidade_populacional);
    printf("PIB per capita: %.2f\n\n", sao_paulo.pib_per_capita);

    printf("Dados da carta de Aracaju: \n");
    printf ("Estado: %s\n", aracaju.estado);
    printf("Código da carta: %s\n", aracaju.codigoCidade);
    printf("Nome: %s\n", aracaju.nome);
    printf("População: %d\n", aracaju.populacao);
    printf("Área: %.2f\n", aracaju.area);
    printf("PIB: %.2f\n", aracaju.pib);
    printf("Pontos Turísticos: %d\n", aracaju.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", aracaju.densidade_populacional);
    printf("PIB per capita: %.2f\n\n", aracaju.pib_per_capita);

    printf("Dados da carta do Rio de janeiro: \n");
    printf ("Estado: %s\n", rio_de_janeiro.estado);
    printf("Código da carta: %s\n", rio_de_janeiro.codigoCidade);
    printf("Nome: %s\n", rio_de_janeiro.nome);
    printf("População: %d\n", rio_de_janeiro.populacao);
    printf("Área: %.2f\n", rio_de_janeiro.area);
    printf("PIB: %.2f\n", rio_de_janeiro.pib);
    printf("Pontos Turísticos: %d\n", rio_de_janeiro.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", rio_de_janeiro.densidade_populacional);
    printf("PIB per capita: %.2f\n\n", rio_de_janeiro.pib_per_capita);
return 0;
}