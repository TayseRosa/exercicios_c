#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;

    printf("Quantos números você vai digitar para salvar no VETOR? ");
    scanf("%d", &N);

    double vet[N];

    for (int i = 0; i<N; i++ ){
        printf("Digite um número");
        scanf("%lf", &vet[i] );
    }

    printf("\nNúmeros digitados: \n");
    for(i=0; i<N; i++){
        printf("%.1lf\n", vet[i]);
    }

    return 0;
}

