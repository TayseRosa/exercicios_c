#include <stdio.h>
#include <stdlib.h>

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
    //Percorrendo o vetor
    printf("\nVALORES: ");    
    for (int i = 0; i < n; i++){
        printf("%.1lf ",vet[i]);
    }
    printf("\n");

    //Calculando a soma dos elementos do vetor
    soma=0;
    for (int i = 0; i < n; i++){
        soma = soma + vet[i];
    }
    printf("SOMA = %.2lf\n", soma);
    
    media = soma / n;
    printf("MEDIA = %.2lf\n\n", media);

    return 0;
}
