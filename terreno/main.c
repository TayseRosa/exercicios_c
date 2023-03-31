#include<stdio.h>
//Esta função foi desenvolvida para calcular a área de um terreno, e com base nesse valor, calcular o valor do terreno.

float calcAreaTerreno( float largura, float comprimento, float valor ){
    return largura*comprimento;
}

float calcPrecoTerreno( float area, float valor ){
    return area*valor;
}

main(){

float largura=0, comprimento=0, valor=0, area=0, preco=0, areaTerreno=0, precoTerreno=0;

printf("\n Digite a largura do terreno: \n");
scanf("%f", &largura);

printf("\n Digite o comprimento do terreno: \n");
scanf("%f", &comprimento);

printf("\n Digite o valor do metro quadrado: \n");
scanf("%f", &valor);

areaTerreno=calcAreaTerreno( largura, comprimento, valor );
precoTerreno=calcPrecoTerreno( areaTerreno, valor );

printf("\n ÁREA do terreno %.2lf\n", areaTerreno);
printf("\n PREÇO do terreno %.2lf\n", precoTerreno);
}
