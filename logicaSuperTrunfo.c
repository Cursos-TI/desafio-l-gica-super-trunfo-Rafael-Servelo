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

    int opcao1 = 0, opcao2 = 0;
    float valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0;
    float soma1 = 0, soma2 = 0;

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Digite o número da opção: ");
    scanf("%d", &opcao1);

    // Verificação da primeira escolha
    if (opcao1 < 1 || opcao1 > 7)
    {
        printf("Opção inválida. Encerrando.\n");
        return 1;
    }

    // Escolha do segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");

    // Imprimir manualmente todas as opções, exceto a já escolhida
    if (opcao1 != 1)
        printf("1. População\n");
    if (opcao1 != 2)
        printf("2. Área\n");
    if (opcao1 != 3)
        printf("3. PIB\n");
    if (opcao1 != 4)
        printf("4. Pontos Turísticos\n");
    if (opcao1 != 5)
        printf("5. Densidade Populacional\n");
    if (opcao1 != 6)
        printf("6. PIB per Capita\n");
    if (opcao1 != 7)
        printf("7. Super Poder\n");

    printf("Digite o número da segunda opção: ");
    scanf("%d", &opcao2);

    // Verificação da segunda escolha
    if (opcao2 < 1 || opcao2 > 7 || opcao2 == opcao1)
    {
        printf("Segunda opção inválida ou repetida. Encerrando.\n");
        return 1;
    }

    // Obter os valores dos atributos selecionados

    switch (opcao1)
    {
    case 1:
        valor1_c1 = populacao_1;
        valor1_c2 = populacao_2;
        break;
    case 2:
        valor1_c1 = area_1;
        valor1_c2 = area_2;
        break;
    case 3:
        valor1_c1 = pib_1;
        valor1_c2 = pib_2;
        break;
    case 4:
        valor1_c1 = turistico_1;
        valor1_c2 = turistico_2;
        break;
    case 5:
        valor1_c1 = densidadePopulacional_1;
        valor1_c2 = densidadePopulacional_2;
        break;
    case 6:
        valor1_c1 = PIBPerCapita_1;
        valor1_c2 = PIBPerCapita_2;
        break;
    case 7:
        valor1_c1 = SuperPoder_1;
        valor1_c2 = SuperPoder_2;
        break;
    }

    switch (opcao2)
    {
    case 1:
        valor2_c1 = populacao_1;
        valor2_c2 = populacao_2;
        break;
    case 2:
        valor2_c1 = area_1;
        valor2_c2 = area_2;
        break;
    case 3:
        valor2_c1 = pib_1;
        valor2_c2 = pib_2;
        break;
    case 4:
        valor2_c1 = turistico_1;
        valor2_c2 = turistico_2;
        break;
    case 5:
        valor2_c1 = densidadePopulacional_1;
        valor2_c2 = densidadePopulacional_2;
        break;
    case 6:
        valor2_c1 = PIBPerCapita_1;
        valor2_c2 = PIBPerCapita_2;
        break;
    case 7:
        valor2_c1 = SuperPoder_1;
        valor2_c2 = SuperPoder_2;
        break;
    }

    // Aplicar regra: densidade populacional é melhor quanto menor
    soma1 += (opcao1 == 5) ? (1000000.0 / valor1_c1) : valor1_c1;
    soma1 += (opcao2 == 5) ? (1000000.0 / valor2_c1) : valor2_c1;

    soma2 += (opcao1 == 5) ? (1000000.0 / valor1_c2) : valor1_c2;
    soma2 += (opcao2 == 5) ? (1000000.0 / valor2_c2) : valor2_c2;

    // Mostrar os valores comparados
    printf("\nCarta 1 (%s): %.2f + %.2f = %.2f\n", cidade_1, valor1_c1, valor2_c1, soma1);
    printf("Carta 2 (%s): %.2f + %.2f = %.2f\n", cidade_2, valor1_c2, valor2_c2, soma2);

    // Mostrar resultado
    printf("\nResultado:\n");
    if (soma1 > soma2)
    {
        printf("Carta 1 (%s) venceu!\n", cidade_1);
    }
    else if (soma2 > soma1)
    {
        printf("Carta 2 (%s) venceu!\n", cidade_2);
    }
    else
    {
        printf("Empate!\n");
    }
}