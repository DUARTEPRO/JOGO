#include <stdio.h>
#include <stdlib.h>

int main() {

  //MENU PRE JOGO
      int menuInterativo, opcao;
    printf("***JOGO DO SUPER-TRUNFO***\n");
    printf("escolha uma das opções de jogo:\n");
    printf("1.iniciar jogo\n");
    printf("2.regras do jogo\n");
    printf("3.como jogar\n");
    printf("escolha uma das opções:\n");
    scanf("%d", &opcao);

    switch (menuInterativo, opcao)
    {
          case 1:
      break;
          case 2:
      printf("Cada um escolhera um pais e ira colocar as identificações do dele, o que mais tiver maior lucro e movimento entre outros, vence!\n");
      break;
          case 3:
      printf("escolha a opção 1 (iniciar jogo), la voce ira colocar os dado da primeira carta, e depois os da segunda carta, e os jogo ira decidir o vencedor!\n");
      break;
    
    default:
      break;
    }


  // dados da carta 1
    char estado;//estado
    char codigoEstado[3];//codigo de estado
    char nomeCidade[50];// nome da cidade
    unsigned long int populaçao;//numero de populaçoes
    float area;//perimetro de area
    float pib;//pib variavel 
    float numerosPontosTuristicos;//numeros de pontos turisticos
    float densidadePopulacional;//densidade populacional
    float pibPercapita;// PIB-percapita
    int carta1;
    carta1 == populaçao, area, pib, numerosPontosTuristicos, densidadePopulacional,pibPercapita;


    printf("digite abaixo os dados da carta 1\n");

    // cadastramento da carta 1-------------------------------------
    printf("Estado:\n");
    scanf(" %c" , &estado);
    printf("Codigo de estado:\n");
    scanf("%s" , codigoEstado);
    printf("nome da cidade:\n");
    scanf("%s" , &nomeCidade);
    printf("numero de população:\n");
    scanf("%d" , &populaçao);
    printf("area (em km²):\n");
    scanf("%f" , &area);
    printf("informe o PIB:\n");
    scanf("%f" , &pib);
    printf("Numero de pontos turisticos:\n");
    scanf("%f" , &numerosPontosTuristicos);

    densidadePopulacional = (float) populaçao / area;
    pibPercapita = (float) pib / populaçao;
    
    printf(".---\n");//para pular linha e separar melhor

    // daqui pra baixo mostra a pessoa os dados colocados na carta 1! 
    printf("\nDados da carta 1:\n");
    printf("Estado: %c\n" , estado);
    printf("codigo de estado: %s\n" , codigoEstado);
    printf("nomde da cidade: %s\n" , nomeCidade);
    printf("numero de população: %i\n" , populaçao);
    printf("area (em km²) %f\n" , area);
    printf("numero do PIB: %e\n" , pib);
    printf("numeros de pontos turisticos: %e\n" , numerosPontosTuristicos);
    printf("Densidade Populacional: %f\n" , densidadePopulacional);
    printf("PIB per Capita: %f\n" , pibPercapita);
    

 // tudo sobre a carta 2 -----------------------------------
    char estado2;//estado
    char codigoEstado2[3];//codigo de estado
    char nomeCidade2[50];// nome da cidade
    unsigned long int populaçao2; //numero de populaçoes
    float area2; //perimetro de area
    float pib2; //pib variavel 
    float numerosPontosTuristicos2; //numeros de pontos turisticos
    float densidadePopulacional2;// densidade populacional da carta 2
    float pibPercapita2;//pib-percapita da carta 2
    int carta2;

    carta2 == populaçao2, area2, pib2, numerosPontosTuristicos2, densidadePopulacional2, pibPercapita2;


    printf(".---\n");//so par separar e ficar mais bonito!

    // cadrastamento de cartas 2
    printf("Proximo jogador!\n");
    printf("digite abaixo os dados da carta 2!\n");
    printf("Estado:\n");
    scanf(" %c" , &estado2);
    printf("Codigo de estado:\n");
    scanf("%s" , codigoEstado2);
    printf("nome da cidade:\n");
    scanf("%s" , &nomeCidade2);
    printf("numero de população:\n");
    scanf("%d" , &populaçao2);
    printf("area (em km²):\n");
    scanf("%f" , &area2);
    printf("informe o PIB:\n");
    scanf("%e" , &pib2);
    printf("Numero de pontos turisticos:\n");
    scanf("%e" , &numerosPontosTuristicos);


    //conta para calcular a densidade populacionar e o PIB-percapita!
     densidadePopulacional2 = (float) populaçao / area;
    pibPercapita2 = (float) pib / populaçao;


    printf(".---\n");//par pular linha e ficar mais bonito!


    // amostra dos dados inseridos da carta 2!
    printf("\nDados da carta 2:\n");
    printf("Estado: %c\n" , estado2);
    printf("codigo de estado: %s\n" , codigoEstado2);
    printf("nomde da cidade: %s\n" , nomeCidade2);
    printf("numero de população: %i\n" , populaçao2);
    printf("area (em km²) %f\n" , area2);
    printf("numero do PIB: %e\n" , pib2);
    printf("numeros de pontos turisticos: %e\n" , numerosPontosTuristicos2);
    printf("Densidade Populacional: %f\n" , densidadePopulacional2);
    printf("PIB per Capita: %f\n" , pibPercapita2);
    

    printf("---\n");//Para pular linha e ficar mais bonito


    int resultado1, resultado2de1, resultado2, resultado2de2;
    char opcoesDeJogo , opcoesCartas;
    
   // menu para escolher habilidade de cartas para comparação
    printf("qual elementos o jogador da carta 1 deseja escolher para fazer comparação?\n");  
    printf("1.População\n" );
    printf("2.Area\n");
    printf("3.Pib\n");
    printf("4.Numero de Pontos Turisticos\n");
    printf("5.Densidade Populacional\n");
    printf("6.Pib-Percapita\n");

    scanf("%d" , &resultado1);
    scanf("%d" , &resultado2de1);

    printf("jogador 2 escolha dois atributo para comparar\n");
    scanf("%d" , &resultado2);
    scanf("%d" , &resultado2de2);
    
    switch ( opcoesCartas, resultado2de1, resultado2,resultado2de2)
    {
        case 1:
      printf("População:" , &populaçao, &populaçao2);
      break;
        case 2:
      printf("Area", &area, &area2);
      break;
        case 3:
      printf("Pib", &pib, &pib2);
      break;
        case 4:
      printf("Numero de Pontos Turisticos", &numerosPontosTuristicos, &numerosPontosTuristicos2);
      break;
        case 5:
      printf("Densidade Populacional", &densidadePopulacional , &densidadePopulacional2);
      break;
              case 6:
      printf("Pib-Percapita", &pibPercapita, &pibPercapita2);
      break;
      
      default:
      printf("opção invalida, escolhe um dos numero sitados na tela!");
      break;
       }

       //menu para escolher que tipo de comparação sera realizada.
    printf("agora escolha qual tipo de comparação voce deseja fazer!\n");

    printf("A. ataque (escolha um atributo de valor alto para superar o adversario)\n");
    printf("D. defensiva (escolha um atributo menor e tente ganhar na desvantagem )\n");
    scanf("%f", &opcoesCartas);

    switch (opcoesDeJogo)
    {
    case 'A':
    case 'a':
    printf("que venca a Maior carta!\n");
    resultado1 && resultado2de1 >= resultado2 && resultado2de2 ? 1 : 0;
      break;

    case 'D':
    case 'd':
    printf("que venca a Menor carta!\n");
    resultado1 && resultado2de1 <= resultado2 && resultado2de2 ? 1 : 0;
      break;
    
    default:
    printf("opção invalida, escolha 'A' para ataque ou 'D' para defensiva\n");
      break;
    }


    printf("---\n");// so par pular linha e fiicar mais bonito


    //RESULTADOS DOS JOGADORES:
    printf("***CARTA VENCEDORA!!!***\n");


     if (resultado1 && resultado2de1 >= resultado2 && resultado2de2 ? 1 : 0) {
        printf("O estado de %s venceu!!\n" , &nomeCidade);
        printf("O atributo escolhido %d e %d é maior que o do jogador 2:\n" , &resultado1, &resultado2de1);
        printf("jogador 1 venceu!\n");

       }else if (resultado1 && resultado2de1 <= resultado2 && resultado2de2 ? 1 : 0) {
        printf("O estado de %s venceu!!\n" , &nomeCidade2);
        printf("o atributo escolhido %d  e %D é maior que do jogador 1:\n" , &resultado2, &resultado2de2);
        printf("jogador 2 venceu!!!\n");
       }

       else if(resultado1 && resultado2de1 == resultado2 && resultado2de2 ? 1 : 1){
        printf("Parabens, os dois estados %s,%s empatara!\n", &nomeCidade, &nomeCidade2);
        printf("resultado do jogador 1 que é: %d e %D, é igual ao do jogador 2 que é:%d e %D\n", &resultado1, &resultado2de1, &resultado2,&resultado2de2 );

       }else if((densidadePopulacional < densidadePopulacional2) || 
               (densidadePopulacional > densidadePopulacional2))
               {
        printf("O estado de %s venceu!!\n" , &nomeCidade);
        printf("jogador 1 venceu\n");
        printf("o atributo escolhido %d e %d é maior que da carta 2\n", &resultado1, &resultado2de1);
       }
       
       else {
        printf("O estado de %s venceu!!\n" , &nomeCidade2);
        printf("jogador 1 venceu\n");
        printf("o atributo escolhido %d e %D é maior que da carta 2\n", &resultado2, &resultado2de2);
       }
    return 0;
    }