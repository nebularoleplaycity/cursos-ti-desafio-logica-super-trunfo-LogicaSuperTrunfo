#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado1;
    int codigo1;
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int npt1;
    char estado2;
    int codigo2;
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int npt2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    //primeiro a apresentação
    printf("Seja Bem vindo(a) ao SuperTrunfo!\n");
    printf("Aqui vamos cadastrar 2 cartas de 2 cidades diferentes.\n");

    // agora começar a coletar os dados começando pela letra do estado utilizando %c para coletar 1 único caractere
    printf("\nDigite uma letra para o estado da sua primeira carta: ");
    scanf( " %c", &estado1);

    // utilizando %d para imprimir um numero inteiro e colocando o estado antes do código
    printf("Agora digite um código do estado: ");
    scanf(" %d", &codigo1);
    

    // utilizando %s que imprime uma cadeia de strings para coletar o nome
    printf("Agora digite o nome da cidade, caso tenha mais de 1 nome utilize apenas a primeira letra de cada nome (exemplo: São Roque = SR): ");
    scanf(" %s", nome1);

    // Agora utilizando %d imprimindo um numero inteiro em formato decimal 
    printf("Agora digite qual a população da primeira cidade: ");
    scanf(" %d", &populacao1);

    // Utilizando %f para coletar o numero de ponto flutuante no print e .2f no scan para printar o número com 2 casas decimais
    printf("Agora me diga qual a área em km² da primeira cidade?: ");
    scanf(" %f", &area1);

    // Utilizando %f para coletar o numero de ponto flutuante no print e .2f no scan para printar o número com 2 casas decimais
    printf("Qual o valor do PIB da primeira cidade?: ");
    scanf(" %f", &pib1);

    printf("Quantos pontos turísticos tem a primeira cidade?: ");
    scanf(" %d", &npt1);

    // agora começar a coletar os dados começando pela letra do estado utilizando %c para coletar 1 único caractere
    printf("\n");
    printf("Digite uma letra para o estado da sua segunda carta: ");
    scanf(" %c", &estado2);

    // utilizando %d para imprimir um numero inteiro e colocando o estado antes do código
    printf("Agora digite um código do estado: ");
    scanf(" %d", &codigo2);

    // utilizando %s que imprime uma cadeia de strings para coletar o nome
    printf("Agora digite o nome da cidade, caso tenha mais de 1 nome utilize apenas a primeira letra de cada nome (exemplo: São Roque = SR): ");
    scanf(" %s", nome2);

    // Agora utilizando %d imprimindo um numero inteiro em formato decimal 
    printf("Agora digite qual a população da segunda cidade: ");
    scanf(" %d", &populacao2);

    // Utilizando %f para coletar o numero de ponto flutuante no print e .2f no scan para printar o número com 2 casas decimais
    printf("Agora me diga qual a área em km² da segunda cidade?: ");
    scanf(" %f", &area2);

    // Utilizando %f para coletar o numero de ponto flutuante no print e .2f no scan para printar o número com 2 casas decimais
    printf("Qual o valor do PIB da segunda cidade?: ");
    scanf(" %f", &pib2);

    printf("Quantos pontos turísticos tem a segunda cidade?: ");
    scanf(" %d", &npt2);


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    // divida a populacao pela area e o pib pela populacao

    float densidade1 = populacao1 / area1;
    float pibcapit1 =  (pib1 * 100000000000) / populacao1;




    float densidade2 = populacao2 / area2;
    float pibcapit2 = (pib2 * 100000000000) / populacao2;



    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c0%d\n",  estado1, codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n",  npt1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibcapit1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c0%d\n",  estado2, codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n",  npt2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibcapit2);


    printf("\n");
    printf("População: Carta 1 venceu (%d)\n", resultadopopulacao);
    printf("Área: Carta 1 venceu (%d)\n", resultadoarea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadoapib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadonpt);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultadodensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadopibcapit);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder3);

    return 0;
}
