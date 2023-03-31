//Ler 2 notas.
//Em seguida mostrar a nota final com uma casa decimal, junto com texto explicativo.
//Caso a nota seja MENOR  que 6, mostrar Reprovado.

#include <stdio.h>
#include <stdlib.h>

calculaNotas(double nota1, double nota2){
    double res = nota1 + nota2;
    return res;

}

int main(){
    double nota1=0, nota2=0, res=0, media=0;

    printf("Digite a nota 1: \n");
    scanf("%lf", &nota1);

    printf("Digite a nota 2: \n");
    scanf("%lf", &nota2);

    media = calculaNotas(nota1, nota2);
    printf("NOTA FINAL:  %.1lf \n", media);

    if( media < 60.0 ){
        printf("\n REPROVADO \n");
    }else{
        printf("\n APROVADO ! \n");
    }




    return 0;
}
