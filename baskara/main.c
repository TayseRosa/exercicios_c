//Bascara
//Ler a,b,c,
//Calcular o Delta (que não pode ser NEGATIVO);
//coeficiente a não pode ser zero
//Se tudo der certo, resultado de X1 e X2
//Se der algum problema, mostrar a mensagem "ESTA EQUAÇÃO NÃO POSSUI RAÍZES REAIS"

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//Para rodar = gcc main.c -lm
//Para rodar = ./a.out

int calcDelta(int a,int b,int c){
    return (b*b) - (4*a*c);
}

int main(){
    double a,b,c, delta, x1,x2;


    printf("\n Digite o coeficiente A: \n");
    scanf("%lf",&a);

    printf("\n Digite o coeficiente B: \n");
    scanf("%lf",&b);

    printf("\n Digite o coeficiente C: \n");
    scanf("%lf",&c);

    delta = calcDelta(a,b,c);
    

    if(a ==0 || delta < 0){
        printf("\nESTA EQUAÇÃO NÃO POSSUI RAÍZES REAIS\n");
    }else{
        x1 = (-b + sqrt(delta)) / 2*a ;
        x2 = (-b - sqrt(delta)) / 2*a ;

        printf("X1= %.4lf\n", x1);
        printf("X2= %.4lf\n", x2);
    }


    return 0;
}

