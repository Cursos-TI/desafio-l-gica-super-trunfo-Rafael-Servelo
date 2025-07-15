#include <stdio.h>
#include <windows.h>

int main()
{
    // Configuração do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);
    int opcao;

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

    printf("Escolha um atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Digite o número da opção desejada:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: // Comparar População
        printf("Comparação: População\n");
        printf("%s: %lu habitantes\n", cidade_1, populacao_1);
        printf("%s: %lu habitantes\n", cidade_2, populacao_2);
        printf("Resultado da comparação:\n");
        if (populacao_1 > populacao_2)
        {
            printf("A Carta 1 (%s) tem mais população.\n", cidade_1);
        }
        else if (populacao_1 < populacao_2)
        {
            printf("A Carta 2 (%s) tem mais população.\n", cidade_2);
        }
        else
        {
            printf("As duas cartas têm a mesma população.\n");
        }
        break;
    case 2: // Comparar Área
        printf("Comparação: Área\n");
        printf("%s: %.2f km²\n", cidade_1, area_1);
        printf("%s: %.2f km²\n", cidade_2, area_2);
        printf("Resultado da comparação:\n");
        if (area_1 > area_2)
        {
            printf("A Carta 1 (%s) tem uma área maior.\n", cidade_1);
        }
        else if (area_1 < area_2)
        {
            printf("A Carta 2 (%s) tem uma área maior.\n", cidade_2);
        }
        else
        {
            printf("As duas cartas têm a mesma área.\n");
        }
        break;
    case 3: // Comparar PIB
        printf("Comparação: PIB\n");
        printf("%s: %.2f bilhões de reais\n", cidade_1, pib_1);
        printf("%s: %.2f bilhões de reais\n", cidade_2, pib_2);
        printf("Resultado da comparação:\n");
        if (pib_1 > pib_2)
        {
            printf("A Carta 1 (%s) tem um PIB maior.\n", cidade_1);
        }
        else if (pib_1 < pib_2)
        {
            printf("A Carta 2 (%s) tem um PIB maior.\n", cidade_2);
        }
        else
        {
            printf("As duas cartas têm o mesmo PIB.\n");
        }
        break;
    case 4: // Comparar Número de Pontos Turísticos
        printf("Comparação: Número de Pontos Turísticos\n");
        printf("%s: %d pontos turísticos\n", cidade_1, turistico_1);
        printf("%s: %d pontos turísticos\n", cidade_2, turistico_2);
        printf("Resultado da comparação:\n");
        if (turistico_1 > turistico_2)
        {
            printf("A Carta 1 (%s) tem mais pontos turísticos.\n", cidade_1);
        }
        else if (turistico_1 < turistico_2)
        {
            printf("A Carta 2 (%s) tem mais pontos turísticos.\n", cidade_2);
        }
        else
        {
            printf("As duas cartas têm o mesmo número de pontos turísticos.\n");
        }
        break;
    case 5: // Comparar Densidade Populacional
        printf("Comparação: Densidade Populacional\n");
        printf("%s: %.2f hab/km²\n", cidade_1, densidadePopulacional_1);
        printf("%s: %.2f hab/km²\n", cidade_2, densidadePopulacional_2);
        printf("Resultado da comparação:\n");
        if (densidadePopulacional_1 < densidadePopulacional_2)
        {
            printf("A Carta 1 (%s) tem uma densidade populacional menor.\n", cidade_1);
        }
        else if (densidadePopulacional_1 > densidadePopulacional_2)
        {
            printf("A Carta 2 (%s) tem uma densidade populacional menor.\n", cidade_2);
        }
        else
        {
            printf("As duas cartas têm a mesma densidade populacional.\n");
        }
        break;
    case 6: // Comparar PIB per Capita
        printf("Comparação: PIB per Capita\n");
        printf("%s: %.2f reais\n", cidade_1, PIBPerCapita_1);
        printf("%s: %.2f reais\n", cidade_2, PIBPerCapita_2);
        printf("Resultado da comparação:\n");
        if (PIBPerCapita_1 > PIBPerCapita_2)
        {
            printf("A Carta 1 (%s) tem um PIB per capita maior.\n", cidade_1);
        }
        else if (PIBPerCapita_1 < PIBPerCapita_2)
        {
            printf("A Carta 2 (%s) tem um PIB per capita maior.\n", cidade_2);
        }
        else
        {
            printf("As duas cartas têm o mesmo PIB per capita.\n");
        }
        break;
    case 7: // Comparar Super Poder
        printf("Comparação: Super Poder\n");
        printf("%s: %.2f\n", cidade_1, SuperPoder_1);
        printf("%s: %.2f\n", cidade_2, SuperPoder_2);
        printf("Resultado da comparação:\n");
        if (SuperPoder_1 > SuperPoder_2)
        {
            printf("A Carta 1 (%s) tem um Super Poder maior.\n", cidade_1);
        }
        else if (SuperPoder_1 < SuperPoder_2)
        {
            printf("A Carta 2 (%s) tem um Super Poder maior.\n", cidade_2);
        }
        else
        {
            printf("As duas cartas têm o mesmo Super Poder.\n");
        }
        break;
    default:
        printf("Opção inválida. Por favor, escolha um número de 1 a 7.\n");
        break;
    }
}