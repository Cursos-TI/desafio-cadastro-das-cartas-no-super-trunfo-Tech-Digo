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

void calcular_atributos(Cidade* cidade) {
    cidade->densidade_populacional = cidade->populacao / cidade->area;
    cidade->pib_per_capita = cidade->pib / cidade->populacao;
}

int main ()
{
    Cidade cidades[] = {
        {"BA", "001", "Salvador",  2886698, 692.818, 63750.00, 30},
        {"SP", "002", "São Paulo", 12300000, 1521.11, 714000.00, 50},
        {"SE", "003", "Aracaju", 602757, 181.9, 27364.00, 12},
        {"RJ", "004", "Rio de Janeiro", 6211223, 1200.329, 35963.00, 30}
    };
    int num_cidades = 4;

    for (int i = 0; i < num_cidades; i++) {
        calcular_atributos(&cidades[i]);
    }

    printf("Escolha um atributo para comparar (1- População, 2- Área, 3- PIB, 4- Densidade Populacional, 5- PIB per capita): ");
    int escolha;
    scanf("%d", &escolha);

    Cidade vencedora = cidades[0];
    for (int i = 1; i < num_cidades; i++) {
        int vitoria = 0;
        switch (escolha) {
            case 1: // População
                if (cidades[i].populacao > vencedora.populacao)
                    vitoria = 1;
                break;
            case 2: // Área
                if (cidades[i].area > vencedora.area)
                    vitoria = 1;
                break;
            case 3: // PIB
                if (cidades[i].pib > vencedora.pib)
                    vitoria = 1;
                break;
            case 4: // Densidade Populacional (menor vence)
                if (cidades[i].densidade_populacional < vencedora.densidade_populacional)
                    vitoria = 1;
                break;
            case 5: // PIB per capita
                if (cidades[i].pib_per_capita > vencedora.pib_per_capita)
                    vitoria = 1;
                break;
            default:
                printf("Escolha inválida!\n");
                return 1;
        }
        if (vitoria) {
            vencedora = cidades[i];
        }
    }

    printf("A carta vencedora é: \n");
    printf("Nome: %s\n", vencedora.nome);
    printf("Estado: %s\n", vencedora.estado);
    printf("Código da carta: %s\n", vencedora.codigoCidade);
    printf("População: %d\n", vencedora.populacao);
    printf("Área: %.2f\n", vencedora.area);
    printf("PIB: %.2f\n", vencedora.pib);
    printf("Pontos Turísticos: %d\n", vencedora.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", vencedora.densidade_populacional);
    printf("PIB per capita: %.2f\n", vencedora.pib_per_capita);

    return 0;

}