#include <stdio.h>
#include <string.h>

int main ()
{  
    char estado1;                      // LETRA DO ESTADO
    char codigo1[50];                  // CODIGO DA CARTA DO ESTADO
    char NdC1[50];                     // NOME DA CIDADE 
    unsigned long int populacao1;      // NUMERO DE PESSOA NO ESTADO
    float area1;                       // TAMANHO DO ESTADO EM KM
    float pib1;                        // VALOR DO PRODUTO INTERNO BRUTO DO ESTADO
    int point1;                        // NÚMERO DE PONTOS TURÍSTICO DO ESTADO
    float CDP1;                        // CALCULA DENSIDADE POULACIONAL
    float PIBpC1;                       // CALCULA PIB PER CAPITA
    float SPC1;                        // CALCULA O SUPER PODER 
   
    char estado2;                      // LETRA DO ESTADO 2
    char codigo2[50];                  // CODIGO DA CARTA DO ESTADO 2
    char NdC2[50];                     // NOME DO ESTADO 2
    unsigned long int populacao2;      // NUMERO DE PESSOA NO ESTADO 2
    float area2;                       // TAMANHO DO ESTADO EM KM 2
    float pib2;                        // VALOR DO PRODUTO INTERNO BRUTO DO ESTADO 2
    int point2;                        // NÚMERO DE PONTOS TURÍSTICO DO ESTADO 2
    float CDP2;                        // CALCULA DENSIDADE POULACIONAL 2
    float PIBpC2;                      // CALCULA PIB PER CAPITA 2
    float SPC2;                        // CALCULA SUPER PODER DA CARTA 2

    int opcao1, opcao2;                // usado no menu 
    int resultado1, resultado2;        // usado para dalvar a comparação
    char atributo1[50], atributo2[50];

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
    scanf("%d", &populacao1);

    // ENVIA TEXTO PARA IDENTIFICAR TAMANHO DO ESTADO 
    printf("Digite o tamanho do Estado: \n");
    scanf("%f", &area1);

    // ENVIA TEXTO PARA IDENTIFICAR PIB DO ESTADO
    printf("Digite o PIB do Estado: \n");
    scanf("%f", &pib1);

    // ENVIA TEXTO PARA IDENTIFICAR PONTOS TURISTICOS DO ESTADO
    printf("Digite a Quantidade de Pontos Turisticos: \n");
    scanf("%d", &point1);

    // FAZ O CALCULO DA DIVISÃO DENSIDADE POPULACIONAL
    CDP1 = populacao1 / area1;

    // FAZ O CALCULO DA DIVISÃO
    PIBpC1 = pib1 / populacao1;
    
    // IMPRESSÃO DAS INFORMAÇÕES DA PRIMEIRA CARTA

    printf("ESTADO 1: %c\n", estado1);
    printf("CODIGO DA CARTA 1: %s\n", codigo1);
    printf("NOME DA CIDADE 1: %s\n", NdC1);
    printf("POPLAÇÃO 1: %d\n", populacao1);
    printf("ÁREA 1: %f KM\n", area1);
    printf("PIB 1: %f Bilhões\n",pib1);
    printf("PONTOS TURÍSTICOS 1: %d\n",point1);
    printf("Densidade Populacional: %f hab/km²\n", CDP1);
    printf("PIB per Capita: %f reais\n",PIBpC1);

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
    scanf("%d", &populacao2);

    // ENVIA TEXTO PARA IDENTIFICAR TAMANHO DO ESTADO 
    printf("Digite o tamanho do Estado 2: \n");
    scanf("%f", &area2);

    // ENVIA TEXTO PARA IDENTIFICAR PIB DO ESTADO
    printf("Digite o PIB do Estado 2: \n");
    scanf("%f", &pib2);

    // ENVIA TEXTO PARA IDENTIFICAR PONTOS TURISTICOS DO ESTADO
    printf("Digite a Quantidade de Pontos Turisticos 2: \n");
    scanf("%d", &point2);

    // FAZ O CALCULO DA DIVISÃO DENSIDADE POPULACIONAL
    CDP2 = populacao2 / area2;

    // FAZ O CALCULO DA DIVISÃO
    PIBpC2 = pib2 / populacao2;

    // IMPRESSÃO DAS INFORMAÇÕES DA SEGUNDA CARTA

    printf("ESTADO 2: %c\n", estado2);
    printf("CODIGO DA CARTA 2: %s\n", codigo2);
    printf("NOME DA CIDADE 2: %s\n", NdC2);
    printf("POPLAÇÃO 2: %d\n", populacao2);
    printf("ÁREA 2: %f KM\n", area2);
    printf("PIB 2: %f Bilhões\n",pib2);
    printf("PONTOS TURÍSTICOS 2: %d\n",point2);
    printf("Densidade Populacional: %f hab/km²\n", CDP2);
    printf("PIB per Capita: %f reais\n",PIBpC2);

    // CALCULA O PODER DAS CARTAS 

    SPC1 = (populacao1 + area1 + pib1 + point1 + PIBpC1); // CALCULO DO PODER 1

    printf("Carta 1 (%s) tem o valor de poder: %.2f\n", NdC1, SPC1); // TEXTO DE IMPRESSÃO DO PODER DA CARTA 1

    SPC2 = (populacao2 + area2 + pib2 + point2 + PIBpC2); // CALCULO DO PODER 2

    printf("Carta 2 (%s) tem o valor de poder: %.2f\n", NdC2, SPC2); // TEXTO DE IMPRESSÃO DO PODER DA CARTA 2

    // Menu Switch

    printf("### Escolha os Atributos PARA COMPARAÇÃO CARTA 1 ###");
    printf("A comparação sera ente carta1: %s e carta2 : %s\n", NdC1, NdC2);
    printf("1. Populção\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha a Opção:");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
        case 1:
        
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        strcpy(atributo1, "populção");

        break;
        case 2:

        resultado1 = area1 > area2 ? 1 : 0;
        strcpy(atributo1, "Area");

        break;
        case 3:

        resultado1 = pib1 > pib2 ? 1 : 0;
        strcpy(atributo1, "PIB");

        break;
        case 4:

        resultado1 = point1 > point2 ? 1 : 0;
        strcpy(atributo1, "Ponto_Turisticos");
            
        break;  
        case 5:

        resultado1 = CDP1 < CDP2 ? 1 : 0;
        strcpy(atributo1, "Densidade_Demografica");
           
        break;       
    }

    printf("### Escolha os Atributos PARA COMPARAÇÃO CARTA 2 ###");
    printf("A comparação sera ente carta1: %s e carta2 : %s\n", NdC1, NdC2);
    printf("1. Populção\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha a Opção:");
    scanf("%d", &opcao1);


    if(opcao1 == opcao2) 
    {
        printf("Você escolheu o mesmo Atributo\n");
    }
    else
    {
        switch (opcao2)
        {
            case 1:
            
            resultado2 = populacao1 < populacao2 ? 1 : 0;
            strcpy(atributo2, "populção");
              
            break;
            case 2:
    
            resultado2 = area1 < area2 ? 1 : 0;
            strcpy(atributo2, "area");
                
            break;
            case 3:
    
            resultado2 = pib1 < pib2 ? 1 : 0;
            strcpy(atributo2, "PIB");
               
            break;
            case 4:
    
            resultado2 = point1 < point2 ? 1 : 0;
            strcpy(atributo2, "Pontos_Turisticos");
                
            break;  
            case 5:
    
            resultado2 = CDP1 > CDP2 ? 1 : 0;
            strcpy(atributo2, "Densidade_Demografica");
               
            break;       
        }
    }

    if( resultado1 && resultado2)
    {
        printf("Parabens, Você Ganhou usando as cartas (%s) e (%s)\n", NdC1, NdC2);
        printf("Usando o Atributo da carta 1 (%s) e o Atributo da Carta 2 (%s)", atributo1, atributo2);
  
    }else if (resultado1 != resultado2){
        printf("###EMPATE###\n");
        printf("Usando o Atributo da carta 1 (%s) e o Atributo da Carta 2 (%s)", atributo1, atributo2);
    }else{
        printf("Você Perdeu\n");
    }

  
} 
