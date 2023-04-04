//Função que recebe um VETOR por parâmetro e calcula a soma dos valores do vetor.

#include <stdio.h>
#include <stdlib.h>

double functionPercorreVetor(double vet[], int n){
    //Percorrendo o vetor
    printf("\nVALORES: ");    
    for (int i = 0; i < n; i++){
        printf("%.1lf - ",vet[i]);
    }
}

double functionSomaValoresVetor(double vet[], int n){
    //Calculando a soma dos elementos do vetor
    double soma=0;
    for (int i = 0; i < n; i++){
        soma = soma + vet[i];
    }
    printf("SOMA = %.2lf\n", soma);
}

int main(){
    int n;
    double soma, media;

    printf("Quantos numeros vc vai digitar?\n");
    scanf("%d", &n);

    double vet[n];
    for (int i = 0; i < n; i++){
        printf("Digite um numero");
        scanf("%lf", &vet[i]);
    }

    functionPercorreVetor( &vet, n);
    printf("\n");

    functionSomaValoresVetor( &vet, n );   

    return 0;
}
