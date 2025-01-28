#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
        //Declaracao de variaveis, estado, cidade e codcarta sao strings, populacao e pturisticos sao inteiros, pib e area sao floats
    char estado[20], codcarta[10], cidade[20];
    int populacao, pturisticos;
    float pib, area;
    
    //Entrada de dados
    printf("Bem-Vindo ao jogo Trunfo!\n");
    printf("Informe o estado:\n");
    scanf("%s", &estado);

    printf("Informe a cidade:\n");
    scanf("%s", &cidade);

    printf("Informe o código da carta:\n");
    scanf("%s", &codcarta);

    printf("Informe a população:\n");
    scanf("%d", &populacao);

    printf("Informe o PIB:\n");
    scanf(" %f", &pib);

    printf("Informe a área:\n");
    scanf("%f", &area);

    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pturisticos);

    //Saida de dados
    printf("Estado: %s\nCidade: %s\nCódigo da carta: %s\nPopulação: %d\nPIB: %.2f\nÁrea: %.2f\nPontos turísticos: %d\n", estado, cidade, codcarta, populacao, pib, area, pturisticos);

    return 0;
}
