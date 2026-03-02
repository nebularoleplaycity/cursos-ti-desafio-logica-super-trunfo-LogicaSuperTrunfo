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

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }


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
    
    // Comparação de Cartas:

    // População: Carta 1 venceu (1)

    // Área: Carta 1 venceu (1)

    // PIB: Carta 1 venceu (1)

    // Pontos Turísticos: Carta 1 venceu (1)

    // Densidade Populacional: Carta 2 venceu (0)

    // PIB per Capita: Carta 1 venceu (1)

    // Super Poder: Carta 1 venceu (1)


    
    int opcao;
    int maiormenor;

    printf("Escolha qual atributo você quer comparar: \n");
    printf("Opção 1: População\n");
    printf("Opção 2: Área\n");
    printf("Opção 3: PIB\n");
    printf("Opção 4: Número de Pontos Turisticos\n");
    printf("Opção 5: Densidade demográfica\n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("Agora escolha 1 para maior ou 2 para menor", maiormenor);
            scanf("%d", &maiormenor);
            if (maiormenor == 1){
                printf("Parabéns Carta 1 venceu\n");
            }else{
                printf("Parabéns Carta 2 Venceu\n");
            }
        break;
        
        case 2:
            printf("Agora escolha 1 para maior ou 2 para menor", maiormenor);
            scanf("%d", &maiormenor);
            if (maiormenor == 1){
                printf("Parabéns Carta 1 venceu\n");
            }else{
                printf("Parabéns Carta 2 Venceu\n");
            }
        break;

        case 3:
            printf("Agora escolha 1 para maior ou 2 para menor", maiormenor);
            scanf("%d", &maiormenor);
            if (maiormenor == 1){
                printf("Parabéns Carta 1 venceu\n");
            }else{
                printf("Parabéns Carta 2 Venceu\n");
            }
        break;

        case 4:
            printf("Agora escolha 1 para maior ou 2 para menor", maiormenor);
            scanf("%d", &maiormenor);
            if (maiormenor == 1){
                printf("Parabéns Carta 1 venceu\n");
            }else{
                printf("Parabéns Carta 2 Venceu\n");
            }
        break;

        case 5:
            printf("Agora escolha 1 para maior ou 2 para menor", maiormenor);
            scanf("%d", &maiormenor);
            if (maiormenor == 1){
                printf("Parabéns Carta 2 venceu\n");
            }else{
                printf("Parabéns Carta 1 Venceu\n");
            }
        break;

    }



    int atributo1, atributo2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    float soma1, soma2;


    // Menu do primeiro atributo
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1-População\n");
    printf("2-Área\n");
    printf("3-PIB\n");
    printf("4-Pontos Turísticos\n");
    printf("5-Densidade Demográfica\n");
    printf("6-PIB per Capita\n");
    scanf("%d", &atributo1);

    // switch para capturar o primeiro atributo
    switch (atributo1) {
        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            break;
        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;
        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;
        case 4:
            valor1_carta1 = npt1;
            valor1_carta2 = npt2;
            break;
        case 5:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            break;
        case 6:
            valor1_carta1 = pibcapit1;
            valor1_carta2 = pibcapit2;
            break;
        default:
            printf("Opção inválida!\n");
    }

    // Menu do segundo atributo, fiz de um jeito para que não mostre o primeiro atributo escolhido

    printf("Escolha o segundo atributo para comparação:\n");

    if (atributo1 != 1) {
        printf("1-População\n");
    }else if (atributo1 != 2) {
        printf("2-Área\n");
    }else if (atributo1 != 3) {
        printf("3-PIB\n");
    }else if (atributo1 != 4) {
        printf("4-Pontos Turísticos\n");
    }else if (atributo1 != 5) {
        printf("5-Densidade Demográfica\n");
    }else if (atributo1 != 6) {
        printf("6-PIB per Capita\n");
    }

    scanf("%d", &atributo2);

    if (atributo2 == atributo1) {
        printf("Você não pode escolher o mesmo atributo duas vezes!\n");
    }

    // switch para capturar o segundo atributo
    switch (atributo2) {
        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            break;
        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;
        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;
        case 4:
            valor2_carta1 = npt1;
            valor2_carta2 = npt2;
            break;
        case 5:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            break;
        case 6:
            valor2_carta1 = pibcapit1;
            valor2_carta2 = pibcapit2;
            break;
        default:
            printf("Opção inválida!\n");
    }


    // Soma dos atributos
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    // divida a populacao pela area e o pib pela populacao

    printf("***** RESULTADO *****\n");
    printf("Cidade 1: %s\n", nome1);
    printf("Atributo 1: %.2f\n", valor1_carta1);
    printf("Atributo 2: %.2f\n", valor2_carta1);
    printf("Soma: %.2f\n", soma1);

    printf("Cidade 2: %s\n", nome2);
    printf("Atributo 1: %.2f\n", valor1_carta2);
    printf("Atributo 2: %.2f\n", valor2_carta2);
    printf("Soma: %.2f\n", soma2);

    // Resultado final com empate
    if (soma1 > soma2) {
        printf("A Carta vencedora é: %s\n", nome1);
    } else if (soma2 > soma1) {
        printf("A Carta vencedora é: %s\n", nome2);
    } else {
        printf("Deu empate!\n");
    }
    return 0;
}