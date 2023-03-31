#include <stdio.h>
#include <stdlib.h>

//INFORMA QUANDO 2 NUMEROS SÃO CRESCENTE OU DECRESCENTE 
//E QUANDO DIGITAR 2 NUMEROS IGUAIS, O PROGRMAA PARA!

int calcCrescDecresc(int x,int y){
    while( x != y ){
        if(x < y){
            printf("CRESCENTE!\n");
        }else{
            printf("DECRESCENTE!\n");
        }
        printf("Digite outros 2 numeros: !\n");
        scanf("%d", &x);
        scanf("%d", &y);
    }
}

int main(){
    int x, y, res;

    printf("Digite 2 numeros: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    calcCrescDecresc(x,y);

    //return 0;
}
