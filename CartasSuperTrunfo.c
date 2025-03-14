#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
//NOVATO 

int main ()
{
    char estado1;            // LETRA DO ESTADO
    char codigo1[50];        // CODIGO DA CARTA DO ESTADO
    char NdC1[50];           // NOME DO ESTADO
    int população1;          // NUMERO DE PESSOA NO ESTADO
    float area1;             // TAMANHO DO ESTADO EM KM
    float pib1;              // VALOR DO PRODUTO INTERNO BRUTO DO ESTADO
    int point1;              // NÚMERO DE PONTOS TURÍSTICO DO ESTADO

    char estado2;            // LETRA DO ESTADO
    char codigo2[50];        // CODIGO DA CARTA DO ESTADO
    char NdC2[50];           // NOME DO ESTADO
    int população2;          // NUMERO DE PESSOA NO ESTADO
    float area2;             // TAMANHO DO ESTADO EM KM
    float pib2;              // VALOR DO PRODUTO INTERNO BRUTO DO ESTADO
    int point2;              // NÚMERO DE PONTOS TURÍSTICO DO ESTADO

    // COMEÇA FALANDO QUAL E O NOME DO JOGO ESTAMOS A JOGAR
    printf("JOGO DO SUPER TRUNFO\n"); 

    // ENVIA TEXTO PARA COMEÇAR A SALVAR INFORMÇÕES DA SEGUNDA CARTA
    printf("COMEÇAR O SALVAMENTO DA PRIMERA CARTA\n");
    
    // ENVIA UM TEXTO PARA IDENTIFICAR ESTADO 
    printf("Digite o Estado da Carta 1: \n");
    scanf(" %c", &estado1);
    
    // ENVIA UM TEXTO PARA IDENTIFICAR CODIGO DO ESTADO 
    printf("Digite o Codigo da Carta 1: \n");
    scanf("%s", &codigo1);

    // ENVIA TEXTO PARA IDENTIFICAR NOME DA CIDADE 
    printf("digite o Nome da Cidade: \n");
    scanf("%s", &NdC1);

    // ENVIA TEXTO PARA INDETIFICAR QUANTIDADE DE POPULAÇÃO 
    printf("Digite a quantiade da populçao: \n");
    scanf("%d", &população1);

    // ENVIA TEXTO PARA IDENTIFICAR TAMANHO DO ESTADO 
    printf("Digite o tamanho do Estado: \n");
    scanf("%f", &area1);

    // ENVIA TEXTO PARA IDENTIFICAR PIB DO ESTADO
    printf("Digite o PIB do Estado: \n");
    scanf("%f", &pib1);

    // ENVIA TEXTO PARA IDENTIFICAR PONTOS TURISTICOS DO ESTADO
    printf("Digite a Quantidade de Pontos Turisticos: \n");
    scanf("%d", &point1);

    // IMPRESSÃO DAS INFORMAÇÕES DA PRIMEIRA CARTA

    printf("ESTADO 1: %c\n", estado1);
    printf("CODIGO DA CARTA 1: %s\n", codigo1);
    printf("NOME DA CIDADE 1: %s\n", NdC1);
    printf("POPLAÇÃO 1: %d\n", população1);
    printf("ÁREA 1: %f KM\n", area1);
    printf("PIB 1: %f Bilhões\n",pib1);
    printf("PONTOS TURÍSTICOS 1: %d\n",point1);

    // ENVIA TEXTO PARA COMEÇAR A SALVAR INFORMÇÕES DA SEGUNDA CARTA
    printf("COMEÇAR O SALVAMENTO DA SEGUNDA CARTA\n");

    // ENVIA UM TEXTO PARA IDENTIFICAR ESTADO 
    printf("Digite o Estado da Carta 2: \n");
    scanf(" %c", &estado2);

    // ENVIA UM TEXTO PARA IDENTIFICAR CODIGO DO ESTADO 
    printf("Digite o Codigo da Carta 2: \n");
    scanf("%s", &codigo2);

    // ENVIA TEXTO PARA IDENTIFICAR NOME DA CIDADE 
    printf("digite o Nome da Cidade 2: \n");
    scanf("%s", &NdC2);

    // ENVIA TEXTO PARA INDETIFICAR QUANTIDADE DE POPULAÇÃO 
    printf("Digite a quantiade da populçao 2: \n");
    scanf("%d", &população2);

    // ENVIA TEXTO PARA IDENTIFICAR TAMANHO DO ESTADO 
    printf("Digite o tamanho do Estado 2: \n");
    scanf("%f", &area2);

    // ENVIA TEXTO PARA IDENTIFICAR PIB DO ESTADO
    printf("Digite o PIB do Estado 2: \n");
    scanf("%f", &pib2);

    // ENVIA TEXTO PARA IDENTIFICAR PONTOS TURISTICOS DO ESTADO
    printf("Digite a Quantidade de Pontos Turisticos 2: \n");
    scanf("%d", &point2);

    // IMPRESSÃO DAS INFORMAÇÕES DA SEGUNDA CARTA

    printf("ESTADO 2: %c\n", estado2);
    printf("CODIGO DA CARTA 2: %s\n", codigo2);
    printf("NOME DA CIDADE 2: %s\n", NdC2);
    printf("POPLAÇÃO 2: %d\n", população2);
    printf("ÁREA 2: %f KM\n", area2);
    printf("PIB 2: %f Bilhões\n",pib2);
    printf("PONTOS TURÍSTICOS 2: %d\n",point2);
}


