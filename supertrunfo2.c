#include <stdio.h>
#include <string.h>

typedef struct supertunfo {
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

void compararAtributo(int atributo, Cidade jogador1, Cidade jogador2) {
    printf("\n--- Comparação ---\n");
    printf("Cidade 1: %s\n", jogador1.nome);
    printf("Cidade 2: %s\n", jogador2.nome);

    switch (atributo) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d\n", jogador1.nome, jogador1.populacao);
            printf("%s: %d\n", jogador2.nome, jogador2.populacao);
            if (jogador1.populacao > jogador2.populacao)
                printf("Vencedor: %s\n", jogador1.nome);
            else if (jogador1.populacao < jogador2.populacao)
                printf("Vencedor: %s\n", jogador2.nome);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f\n", jogador1.nome, jogador1.area);
            printf("%s: %.2f\n", jogador2.nome, jogador2.area);
            if (jogador1.area > jogador2.area)
                printf("Vencedor: %s\n", jogador1.nome);
            else if (jogador1.area < jogador2.area)
                printf("Vencedor: %s\n", jogador2.nome);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", jogador1.nome, jogador1.pib);
            printf("%s: %.2f\n", jogador2.nome, jogador2.pib);
            if (jogador1.pib > jogador2.pib)
                printf("Vencedor: %s\n", jogador1.nome);
            else if (jogador1.pib < jogador2.pib)
                printf("Vencedor: %s\n", jogador2.nome);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", jogador1.nome, jogador1.pontos_turisticos);
            printf("%s: %d\n", jogador2.nome, jogador2.pontos_turisticos);
            if (jogador1.pontos_turisticos > jogador2.pontos_turisticos)
                printf("Vencedor: %s\n", jogador1.nome);
            else if (jogador1.pontos_turisticos < jogador2.pontos_turisticos)
                printf("Vencedor: %s\n", jogador2.nome);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade populacional
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f\n", jogador1.nome, jogador1.densidade_populacional);
            printf("%s: %.2f\n", jogador2.nome, jogador2.densidade_populacional);
            if (jogador1.densidade_populacional < jogador2.densidade_populacional)
                printf("Vencedor: %s\n", jogador1.nome);
            else if (jogador1.densidade_populacional > jogador2.densidade_populacional)
                printf("Vencedor: %s\n", jogador2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Atributo inválido!\n");
    }
}

int main() {
    Cidade salvador = {"BA", "001", "Salvador", 2886698, 692.818, 63750.00, 30};
    Cidade sao_paulo = {"SP", "002", "São Paulo", 12300000, 1521.11, 714000.00, 50};
    Cidade aracaju = {"SE", "003", "Aracaju", 602757, 181.9, 27364.00, 12};
    Cidade rio_de_janeiro = {"RJ", "004", "Rio de Janeiro", 6211223, 1200.329, 35963.00, 30};

    // Calcula densidade populacional e PIB per capita
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
    Cidade jogador1 = (escolha1 == 1) ? salvador :
                      (escolha1 == 2) ? sao_paulo :
                      (escolha1 == 3) ? aracaju :
                      (escolha1 == 4) ? rio_de_janeiro : (Cidade){"", "", "", 0, 0, 0, 0};

    printf("Jogador 2, escolha uma cidade (1- Salvador, 2- São Paulo, 3- Aracaju, 4- Rio de Janeiro):\n ");
    int escolha2;
    scanf("%d", &escolha2);
    Cidade jogador2 = (escolha2 == 1) ? salvador :
                      (escolha2 == 2) ? sao_paulo :
                      (escolha2 == 3) ? aracaju :
                      (escolha2 == 4) ? rio_de_janeiro : (Cidade){"", "", "", 0, 0, 0, 0};

    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    int atributo;
    scanf("%d", &atributo);

    compararAtributo(atributo, jogador1, jogador2);

    return 0;
}
