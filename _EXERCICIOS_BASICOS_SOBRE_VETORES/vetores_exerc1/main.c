//Escrever um programa que leia um vetor de 10 posições de inteiros e
//apresente o somatório e 
//a média aritmética de todos os valores.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define pos 3

int main(){
    int i;
    int vet[pos];
    int soma = 0;
    float media=0;

    for ( i = 0; i < pos; i++){
        printf("\n LENDO DOS VALORES DO VETOR: \n vet[%i]: ", i);        
        scanf("%i", &vet[i]);
        soma = soma + vet[i];
    }
    printf("\n\n");
    printf("SOMA = %i", soma);
    printf("\n\n");
    media = (double)soma / pos;
    printf("MEDIA = %.2lf\n\n", media);

    return 0;
}