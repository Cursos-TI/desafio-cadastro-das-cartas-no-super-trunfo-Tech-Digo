#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    Cidade sao_paulo = {"SP", "002", "São Paulo", 12300000, 1521.11, 714000.00, 50};
    Cidade aracaju = {"SE", "003", "Aracaju", 602757, 181.9, 27364.00, 12};
    Cidade rio_de_janeiro = {"RJ", "004", "Rio de Janeiro", 6211223, 1200.329, 35963.00, 30};

    salvador.densidade_populacional = salvador.populacao / salvador.area;
    salvador.pib_per_capita = salvador.pib / salvador.populacao;

    sao_paulo.densidade_populacional = sao_paulo.populacao / sao_paulo.area;
    sao_paulo.pib_per_capita = sao_paulo.pib / sao_paulo.populacao;
    
    aracaju.densidade_populacional = aracaju.populacao / aracaju.area;
    aracaju.pib_per_capita = aracaju.pib / aracaju.populacao;

    rio_de_janeiro.densidade_populacional = rio_de_janeiro.populacao / rio_de_janeiro.area;
    rio_de_janeiro.pib_per_capita = rio_de_janeiro.pib / rio_de_janeiro.populacao;

    printf("Jogador 1, escolha uma cidade (1- Salvador, 2- São Paulo, 3- Aracaju, 4- Rio de Janeiro):\n ");
    int escolha1;
    scanf("%d", &escolha1);

    Cidade jogador1;
    if (escolha1 == 1) jogador1 = salvador;
    else if (escolha1 == 2) jogador1 = sao_paulo;
    else if (escolha1 == 3) jogador1 = aracaju;
    else if (escolha1 == 4) jogador1 = rio_de_janeiro;
    else {
        printf("Escolha inválida!\n");
        return 1;
    }

    printf("Jogador 2, escolha uma cidade (1- Salvador, 2- São Paulo, 3- Aracaju, 4- Rio de Janeiro): \n");
    int escolha2;
    scanf("%d", &escolha2);

    Cidade jogador2;
    if (escolha2 == 1) jogador2 = salvador;
    else if (escolha2 == 2) jogador2 = sao_paulo;
else if (escolha2 == 3) jogador2 = aracaju;
    else if (escolha2 == 4) jogador2 = rio_de_janeiro;
    else {
        printf("Escolha inválida!\n");
        return 1;
    }

    printf("Jogador 3, escolha uma cidade (1- Salvador, 2- São Paulo, 3- Aracaju, 4- Rio de Janeiro): \n");
    int escolha3;
    scanf("%d", &escolha3);

     Cidade jogador3;
    if (escolha3 == 1) jogador3 = salvador;
    else if (escolha3 == 2) jogador3 = sao_paulo;
else if (escolha3 == 3) jogador3 = aracaju;
    else if (escolha3 == 4) jogador3 = rio_de_janeiro;
    else {
        printf("Escolha inválida!\n");
        return 1;
    }

     printf("Jogador 4, escolha uma cidade (1- Salvador, 2- São Paulo, 3- Aracaju, 4- Rio de Janeiro): \n");
    int escolha4;
    scanf("%d", &escolha4);

     Cidade jogador4;
    if (escolha4 == 1) jogador4 = salvador;
    else if (escolha4 == 2) jogador4 = sao_paulo;
else if (escolha4 == 3) jogador4 = aracaju;
    else if (escolha4 == 4) jogador4 = rio_de_janeiro;
    else {
        printf("Escolha inválida!\n");
        return 1;
    }


if (salvador.pib_per_capita > aracaju.pib_per_capita){
 printf("PIB per capita de salvador é maior \n !!");
   } else {
   printf(" Salvador tem o menor PIB comparado a Aracaju!!\n ");
}


if (rio_de_janeiro.pib_per_capita > sao_paulo.pib_per_capita ){
 printf("PIB per capita do Rio de Janeiro é maior \n !!");
   } else {
   printf(" Rio de Janeiro tem o menor PIB comparado a São Paulo!!\n ");
}


    Cidade vencedora = salvador;

    if (sao_paulo.populacao > vencedora.populacao) {
        vencedora = sao_paulo;
    }
    if (aracaju.populacao > vencedora.populacao) {
        vencedora = aracaju;
    }
    if (rio_de_janeiro.populacao > vencedora.populacao) {
        vencedora = rio_de_janeiro;
    }

    printf("A carta vencedora com base na população é: \n");
    printf("Nome: %s\n", vencedora.nome);
    printf("População: %d\n", vencedora.populacao);


    return 0;
}