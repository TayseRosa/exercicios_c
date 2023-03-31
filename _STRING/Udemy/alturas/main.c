#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, nMenores;
    double soma, media, percentualMenores;

    printf("Quantas pessoas serão digitadas?\n");
    scanf("%d", &n);

    //Criar os vetores
    char nomes[n][50];
    int idades[n];
    double alturas[n];

    for (int i = 0; i < n; i++){
        printf("Dados da %d º pessoa\n", i + 1);
        printf("\nNome: \n");
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);

        printf("\nIdade: \n");        
        scanf("%d", &idades[i]);

        printf("\nAltura: \n");
        scanf("%lf", &alturas[i]);
    }

    soma = 0;
    for (int i = 0; i < n; i++){
        soma = soma + alturas[i];
    }
    
    media = soma / n;
    printf("Altura média: %.2lf\n", media);

    nMenores = 0;
    for (int i = 0; i < n; i++){
        if(idades[i] < 16){
            nMenores = nMenores + 1;
        }
    }

    percentualMenores = nMenores * 100.0 / n;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", percentualMenores);
    
    for (int i = 0; i < n; i++){
        if(idades[i] < 16){
            printf("%s\n", nomes[i]);
        }
    }
    

    return 0;
}
