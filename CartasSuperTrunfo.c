#include <stdio.h>

//Aluno: Eduardo Costa
// Feito pelo VS CODE

int main() {
    char nome [20], nome2 [20],nome3 [20],nome4 [20];
    unsigned long int populacao,populacao2,populacao3,populacao4;
    float area,area2,area3,area4;
    unsigned long int PIB,PIB2,PIB3,PIB4;
    int atracoes,atracoes2,atracoes3,atracoes4;
    float pibpercapa1,pibpercapa2,pibpercapa3,pibpercapa4;
    float densidade1,densidade2,densidade3,densidade4;
    float poder1,poder2,poder3,poder4;
    int pop,ar,pi,atr,perc,pod,dens;

// inserir dados
    
    printf("Informe os dados da cidade A01 abaixo:\n");

    printf("Nome da cidade:\n");
    scanf("%s", &nome);

    printf("Informe o número de habitantes da cidade:\n");
    scanf("%u", &populacao);

    printf("Informe a área da cidade em km²:\n");
    scanf("%f", &area);

    printf("Informe o PIB da cidade:\n");
    scanf("%u", &PIB);

    printf("Informe o número de pontos turisticos da cidade:\n");
    scanf("%d", &atracoes);

    pibpercapa1 = PIB/populacao;
    densidade1 = populacao/area;
    poder1= (populacao+area+PIB+atracoes) + (1/densidade1);

    printf("Informe os dados da cidade A02 abaixo:\n");

    printf("Nome da cidade:\n");
    scanf("%s", &nome2);

    printf("Informe o número de habitantes da cidade:\n");
    scanf("%u", &populacao2);

    printf("Informe a área da cidade em km²:\n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade:\n");
    scanf("%u", &PIB2);

    printf("Informe o número de pontos turisticos da cidade:\n");
    scanf("%d", &atracoes2);




 //resultados

    printf("Dados Super Trunfo A01:\n");
    printf("Nome da cidade: %s\n", nome);
    printf("Quantidade de habitantes: %.u\n", populacao);
    printf("Área da cidade: %.3f\n", area);
    printf("PIB:%u\n", PIB);
    printf("Quantidade de pontos turisticos:%d\n", atracoes);
    printf("O PIB per Capita da cidade é de %f:\n",pibpercapa1);
    printf("A densidade Populacional da cidade é de %f:\n",densidade1);
    printf("Super poder da carta:%.2f\n",poder1);

    printf("\n");
    printf("\n");

    pibpercapa2 = PIB2/populacao2;
    densidade2 = populacao2/area2;
    poder2= (populacao2+area2+PIB2+atracoes2) + (1/densidade2);


    printf("Dados Super Trunfo A02:\n");
    printf("Nome da cidade: %s\n", nome2);
    printf("Quantidade de habitantes: %.u\n", populacao2);
    printf("Área da cidade: %.3f\n", area2);
    printf("PIB:%u\n", PIB2);
    printf("Quantidade de pontos turisticos:%d\n", atracoes2);
    printf("O PIB per Capita da cidade é de %f:\n",pibpercapa2);
    printf("A densidade Populacional da cidade é de %f:\n",densidade2);
    printf("Super poder da carta:%.2f\n",poder2);

    printf("\n");
    printf("\n");
    
 // resultados das comparações

    printf("Comparação de cartas\n");
    printf("Carta 1 = 1 e Carta 2 = 0\n");

    pop = populacao > populacao2;
    ar= area > area2;
    pi= PIB > PIB2,
    atr=atracoes > atracoes2;
    perc= pibpercapa1 > pibpercapa2;
    pod= poder1 > poder2;
    dens= 1/densidade1 > 1/densidade2;
    
    printf("População: Carta %d venceu\n",pop);
    printf("Área: Carta %d venceu\n",ar);
    printf("PIB: Carta %d venceu\n",pi);
    printf("Pontos Turisticos: Carta %d venceu\n",atr);
    printf("PIB per Capita: Carta %d venceu\n",pi);
    printf("Densidade populacional: Carta %d venceu\n",dens);
    printf("Poder da carta: Carta %d venceu\n",pod);






    



return 0;

    
    //

}
