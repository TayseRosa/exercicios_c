//Escrever um programa que leia um vetor de 5 posições de inteiros 
//e crie a partir deste um segundo vetor (cópia do primeiro), 
//substituindo os valores zeros do primeiro vetor, sempre que aparecerem, por 1. 
//Mostrar os dois vetores.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define pos 5

int main(){
    int m,n, i,j;

    printf("Qual a quantidade de linhas da matriz?\n");
    scanf("%d", &m);

    printf("Qual a quantidade de colunas da matriz?\n");
    scanf("%d", &n);

    //Criar uma matriz
    double mat[n][n];
    double vet[m];

    for ( i = 0; i < m; i++){
        printf("Digite os elementos da %d linha\n", i+1);
        for ( j = 0; j < n; j++){
            scanf("%lf", &mat[i][j]);
        }    
    }
    
    for ( i = 0; i < m; i++){
        vet[i] = 0;
        for (j = 0;j < n;j++){
            vet[i] = vet[i] + mat[i][j];
        }
    }
    printf("VETOR GERADO: \n");
    for ( i = 0; i < m; i++){
        printf("%.1lf\n", vet[i]);
    }
    

    return 0;
}
