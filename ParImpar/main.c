/*
1. Crie uma função que receba, por parâmetro, um inteiro e retorne 1 se este
for par ou 0 caso seja ímpar. Na função main(), escreva por extenso o
resultado do teste (par ou ímpar).
*/

#include <stdio.h>

int main(){
    int n, valor;


        printf("Digite um numero: ");
        scanf("%d", &valor);

        if (valor == 0) {
            printf("NULO\n");
        }
        else {
            if (valor % 2 == 0) {
                printf("PAR");
            }
            else {
                printf("IMPAR");
            }

        }


	return 0;
}
