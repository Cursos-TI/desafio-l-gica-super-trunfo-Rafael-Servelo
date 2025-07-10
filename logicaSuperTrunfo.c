#include <stdio.h>
#include <windows.h>

int main()
{
    // Configuração do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);

    // Definição das variáveis para armazenar as propriedades das cidades
    // Variaveis da Carta 1
    char estado_1 = 'A', codigo_1[4] = "A01", cidade_1[50] = "São Paulo";
    int turistico_1 = 50;
    unsigned long int populacao_1 = 12325000;
    float area_1 = 1521.11, pib_1 = 699.28, densidadePopulacional_1, PIBPerCapita_1, SuperPoder_1;

    // Variaveis da Carta 2
    char estado_2 = 'B', codigo_2[4] = "B02", cidade_2[50] = "Rio de Janeiro";
    int turistico_2 = 30;
    unsigned long int populacao_2 = 6748000;
    float area_2 = 1200.25, pib_2 = 300.50, densidadePopulacional_2, PIBPerCapita_2, SuperPoder_2;

    // Tratamento para calcular a Densidade Populacional e o PIB per Capita da Carta 1
    densidadePopulacional_1 = populacao_1 / area_1;
    PIBPerCapita_1 = (pib_1 * 1000000000) / populacao_1;
    // Cálculo de Super Poder baseado na soma de atributos
    SuperPoder_1 =
        (populacao_1 / 100000) +
        (area_1 / 10) + (pib_1 * 1000) +
        (float)turistico_1 + (PIBPerCapita_1 / 1000) +
        (1.0 / densidadePopulacional_1 * 100);

    // Tratamento para calcular a Densidade Populacional e o PIB per Capita da Carta 2
    densidadePopulacional_2 = populacao_2 / area_2;
    PIBPerCapita_2 = (pib_2 * 1000000000) / populacao_2;
    // Cálculo de Super Poder baseado na soma de atributos
    SuperPoder_2 =
        (populacao_2 / 100000) +
        (area_2 / 10) + (pib_2 * 1000) +
        (float)turistico_2 + (PIBPerCapita_2 / 1000) +
        (1.0 / densidadePopulacional_2 * 100);

    // Exibindo os dados cadastrados de forma organizada
    printf("\nDados das Cartas Cadastradas:\n\n");

        // Exibição dos Dados da Carta 1:
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %lu\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", turistico_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional_1);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita_1);
    printf("Super Poder: %.2f\n\n", SuperPoder_1);

    // Exibição dos Dados da Carta 2:
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %lu\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", turistico_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional_2);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita_2);
    printf("Super Poder: %.2f\n\n", SuperPoder_2);

    // Comparação das Cartas:
    printf("Comparação das Cartas:\n\n");

    // Comparação dos Atributos de Populaçâo
    printf("Atributo (População):\n");
    printf("Carta 1 - (%s): %lu\n", cidade_1, populacao_1);
    printf("Carta 2 - (%s): %lu\n", cidade_2, populacao_2);

    if (populacao_1 > populacao_2)
    {
        printf("Resultado: Carta 1 (%s) tem maior população.\n\n", cidade_1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) tem maior população.\n\n", cidade_2);
    }

    // Comparação dos Atributos de Área
    printf("Atributo (Área):\n");
    printf("Carta 1 - (%s): %.2f\n", cidade_1, area_1);
    printf("Carta 2 - (%s): %.2f\n", cidade_2, area_2);

    if (area_1 > area_2)
    {
        printf("Resultado: Carta 1 (%s) tem maior área.\n\n", cidade_1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) tem maior área.\n\n", cidade_2);
    }

    // Comparação dos Atributos de PIB
    printf("Atributo (PIB):\n");
    printf("Carta 1 - (%s): %.2f bilhões de reais\n", cidade_1, pib_1);
    printf("Carta 2 - (%s): %.2f bilhões de reais\n", cidade_2, pib_2);

    if (pib_1 > pib_2)
    {
        printf("Resultado: Carta 1 (%s) tem maior PIB.\n\n", cidade_1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) tem maior PIB.\n\n", cidade_2);
    }

    // Comparação dos Atributos de Pontos Turísticos
    printf("Atributo (Número de Pontos Turísticos):\n");
    printf("Carta 1 - (%s): %d\n", cidade_1, turistico_1);
    printf("Carta 2 - (%s): %d\n", cidade_2, turistico_2);

    if (turistico_1 > turistico_2)
    {
        printf("Resultado: Carta 1 (%s) tem mais pontos turísticos.\n\n", cidade_1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) tem mais pontos turísticos.\n\n", cidade_2);
    }

    // Comparação dos Atributos de Densidade Populacional
    printf("Atributo (Densidade Populacional):\n");
    printf("Carta 1 - (%s): %.2f hab/km²\n", cidade_1, densidadePopulacional_1);
    printf("Carta 2 - (%s): %.2f hab/km²\n", cidade_2, densidadePopulacional_2);

    if (densidadePopulacional_1 < densidadePopulacional_2)
    {
        printf("Resultado: Carta 1 (%s) tem menor densidade populacional.\n\n", cidade_1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) tem menor densidade populacional.\n\n", cidade_2);
    }

    // Comparação dos Atributos de PIB per Capita
    printf("Atributo (PIB per Capita):\n");
    printf("Carta 1 - (%s): %.2f reais\n", cidade_1, PIBPerCapita_1);
    printf("Carta 2 - (%s): %.2f reais\n", cidade_2, PIBPerCapita_2);

    if (PIBPerCapita_1 > PIBPerCapita_2)
    {
        printf("Resultado: Carta 1 (%s) tem maior PIB per Capita.\n\n", cidade_1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) tem maior PIB per Capita.\n\n", cidade_2);
    }

    // Comparação dos Atributos de Super Poder
    printf("Atributo (Super Poder):\n");
    printf("Carta 1 - (%s): %.2f\n", cidade_1, SuperPoder_1);
    printf("Carta 2 - (%s): %.2f\n", cidade_2, SuperPoder_2);

    if (SuperPoder_1 > SuperPoder_2)
    {
        printf("Resultado: Carta 1 (%s) tem maior Super Poder.\n\n", cidade_1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) tem maior Super Poder.\n\n", cidade_2);
    }

    return 0;
}
