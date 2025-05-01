#include <stdio.h>

int main()
{
    unsigned long int populacao1, populacao2;

    int turistico1, turistico2 ,Atributo1, Atributo2 ; 
    int populacaoTotal, resultado1, resultado2;

    char estado1[10], estado2[10]; 
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];

    float pib1, pib2;
    float area1, area2;
    float densidadep1, densidadep2;
    float percapita1, percapita2;
    float calculodensidade1, calculodensidade2;
    

        calculodensidade1 =  (1 / densidadep1); // calculo do inverso da densidade
        calculodensidade2 =  (1 / densidadep2);
        densidadep1 = (populacao1 / area1); //operação de divisão densidade populacional
        percapita1  = (pib1 / populacao1);  // operação de divisão pib per capita
        densidadep2 =(populacao2 / area2);  //operação de divisão da densidade populacional
        percapita2  =(pib2 / populacao2);   // operação de divisão pib per capita

        printf("-----------CARTA 1-----------\n");
        printf("digite a letra do estado (de A a H):\n");
        scanf("%s", &estado1);  
        printf("digite o codigo do estado:\n");
        scanf("%s", &codigo1);
        printf("digite o nome da cidade:\n");
        scanf("%s", &cidade1);
        printf("digite o numero de habitantes:\n");
        scanf("%d", &populacao1);
        printf("digite a area:\n");
        scanf("%f", &area1);
        printf("digite o PIB:\n");
        scanf("%f", &pib1);
        printf("digite o numero de pontos turisticos:\n");
        scanf("%d", &turistico1);


        
        printf("-----------CARTA 2-----------\n");    
        printf("digite a letra do estado (de A a H):\n");
        scanf("%s", &estado2);
        printf("digite o codigo do estado (Ex: A01):\n");
        scanf("%s", &codigo2);
        printf("digite o nome da cidade:\n");
        scanf("%s", &cidade2);
        printf("digite o numero de habitantes:\n");
        scanf("%d", &populacao2);
        printf("digite a area:\n");
        scanf("%f", &area2);
        printf("digite o PIB:\n");
        scanf("%f", &pib2);
        printf("digite o numero de pontos turisticos:\n");
        scanf("%d", &turistico2);


        

        printf("-----------CARTA 1-----------\n");
        printf("-ESTADO:%s\n", estado1);
        printf("-CODIGO:%s%s\n",estado1, codigo1);
        printf("-CIDADE:%s\n",cidade1);
        printf("-POPULAÇÃO:%d habitantes\n",populacao1);
        printf("-AREA:%.2fKm²\n",area1);
        printf("-PIB:%.0f Bilhões Reais\n",pib1);
        printf("-NUMERO DE PONTOS TURISTICOS:%d\n",turistico1);
        printf("-DENSIDADE POPULACIONAL:%.3f hab/Km² \n", densidadep1); 
        printf("-PIB PER CAPITA:%.0f Bilhões Reais\n", percapita1);
        printf("-----------------------------\n");

        printf("-----------CARTA 2-----------\n");
        printf("-ESTADO:%s\n", estado2);
        printf("-CODIGO:%s%s\n",estado2, codigo2);
        printf("-CIDADE:%s\n",cidade2);
        printf("-POPULAÇÃO:%d habitantes\n",populacao2);
        printf("-AREA:%.2fKm²\n",area2);
        printf("-PIB:%.0f Reais\n",pib2);
        printf("-NUMERO DE PONTOS TURISTICOS:%d\n",turistico2);
        printf("-DENSIDADE POPULACIONAL:%.3f hab/Km²\n", densidadep2); 
        printf("-PIB PER CAPITA:%.0f Bilhões Reais\n", percapita2);
        printf("-----------------------------\n");

        
        printf("-----------COMPARAÇÃO DAS CARTAS-----------\n");    
        printf("opção de atributos para comparação\n");
        printf("1 :população\n");
        printf("2 :area\n");
        printf("3 :pib\n");
        printf("4 :numero de pontos turisticos\n");
        printf("5 :densidade populacional\n");
        printf("escolha o primeiro atributo para ser comparado\n");
        scanf("%d", &Atributo1);
        

        switch (Atributo1)
        {
          case 1: 
          resultado1 = populacao1 > populacao2?1:0;
          printf("voçê escolheu o atributo POPULAÇÃO\n ");  
          break ;
          case 2: 
          resultado1 = area1 > area2?1:0;
          printf("voçê escolheu o atributo AREA\n ");
          break;
          case 3: 
          resultado1 = pib1 > pib2?1:0;
          printf("voçê escolheu o atributo PIB\n");
          break;
          case 4: 
          resultado1 = turistico1 > turistico2?1:0;
          printf("voçê escolheu o atributo NUMERO DE PONTOS TURISTICO\n");
          break;
          case 5: 
          resultado1 = densidadep1 > densidadep2?1:0;
          printf("voçê escolheu o atributo DENSIDADE POPULACIONAL \n");
          break;
        default:
        printf("opção inválida!!\n");
            break;
        }
        printf("-----------------------------\n");

        printf("opção de atributos para comparação\n");
            printf("1 :população\n");
            printf("2 :area\n");
            printf("3 :pib\n");
            printf("4 :numero de pontos turisticos\n");
            printf("5 :densidade populacional\n");
            printf("!ATENÇÂO!\n");
            printf("!!!não pode repetir o mesmo atributo escohido no inicio!!!\n");
            printf("escolha o segundo atributo para ser comparado\n");
            scanf("%d", &Atributo2);
            

        if (Atributo1 != Atributo2){
            if (Atributo2){
            switch (Atributo2){
                case 1: 
                resultado2 = populacao2 > populacao1?1:0;
                printf("voçê escolheu o atributo POPULAÇÃO \n");  
                break ;
                case 2: 
                resultado2 = area2 > area1?1:0;
                printf("voçê escolheu o atributo AREA\n ");
                break;
                case 3: 
                resultado2 = pib2 > pib1?1:0;
                printf("voçê escolheu o atributo PIB\n ");
                break;
                case 4: 
                resultado2 = turistico2 > turistico1?1:0;
                printf("voçê escolheu o atributo NUMERO DE PONTOS TURISTICO\n");
                break;
                case 5: 
                resultado2 = densidadep2 > densidadep1?1:0;
                printf("voçê escolheu o atributo DENSIDADE POPULACIONAL \n");
                break;
              }             
        }    
        }else{
            printf("opção inválida!!\n");
            printf("voçê digitou o mesmo atributo!!\n");
        }
        printf("-----------------------------\n");

        switch (Atributo1)
        {
        case 1:
        printf("CIDADE CARTA 1: %s - CIDADE CARTA2: %s\n",cidade1,cidade2);
        printf("POPULAÇÂO - CARTA 1: %d - CARTA 2: %d\n", populacao1, populacao2);
        break;
        case 2:
        printf("CIDADE CARTA 1:%s - CIDADE CARTA2:%s\n",cidade1,cidade2);
        printf("ÁREA/KM² - CARTA 1: %.2f² - CARTA 2: %.2f\n", area1, area2);
        break;
        case 3:
        printf("CIDADE CARTA 1: %s - CIDADE CARTA2: %s\n",cidade1,cidade2);
        printf("PIB - CARTA 1: %.2f - CARTA 2: %.2f\n", pib1, pib2);
        break;
        case 4:
        printf("CIDADE CARTA 1: %s - CIDADE CARTA2: %s\n",cidade1,cidade2);
        printf("NÚMERO DE PONTOS TURÍSTICOS - CARTA 1: %d - CARTA 2: %d\n",turistico1, turistico2 );
        break;
        case 5:
        printf("CIDADE CARTA 1: %s - CIDADE CARTA2: %s\n",cidade1,cidade2);
        printf("DENSIDADE POPULACIONAL - CARTA 1: %.2f - CARTA 2: %.2f\n",densidadep1,densidadep2);
        break;
        default:
            break;
        }
        
        switch (Atributo2)
        {
        case 1:
        printf("POPULAÇÃO - CARTA 1: %d - CARTA 2: %d\n", populacao1, populacao2);
        break;
        case 2:
        printf("ÁREA/KM² - CARTA 1: %.2f - CARTA 2: %.2f\n", area1, area2);
        break;
        case 3:
        printf("PIB - CARTA 1: %.2f - CARTA 2: %.2f\n", pib1, pib2);
        break;
        case 4:
        printf("NÚMERO DE PONTOS TURÍSTICOS - CARTA 1: %d - CARTA 2: %d\n",turistico1,turistico2);
        break;
        case 5:
        printf("DENSIDADE POPULACIONAL - CARTA 1: %.2f - CARTA 2: %.2f\n",densidadep1,densidadep2);
        break;
        default:
            printf("Opção inválida!\n");
            break;
        }
         if (resultado1 >= resultado2){
                    printf("A carta 1 venceu!\n");
                } else if (resultado1 <= resultado2){
                    printf("A carta 2 venceu!\n");
                } else {
                    printf("Empatou!\n");
                }
        printf("------------------- FIM DO JOGO ------------------\n");
       
    return 0;
}