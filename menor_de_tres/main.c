#include <stdio.h>
#include <stdlib.h>

int functionMenorDeTres(int a, int b, int c){
    int menor;

    if(a < b && a < c){
        return menor = a;
    }else if ( b < c){
        return menor = b;
    }else{
        return menor = c;
    }
}

int main(){
    int a,b,c,menor, res;

    printf("Primeiro valor: ");
    scanf("%d", &a);

    printf("Segundo valor: ");
    scanf("%d", &b);

    printf("Terceiro valor: ");
    scanf("%d", &c);
    
    res = functionMenorDeTres(a,b,c);

    printf("O MENOR DE TRÊS EH: %d \n", res);
    
    
    
}
