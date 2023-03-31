#include <stdio.h>
#include <stdlib.h>

void functionMontaNome(char nome[50], char sexo,double salario,int idade){
    return printf("\nA funcionaria %s sexo %c ganha %.2lf de salário e tem %i anos \n\n",nome,sexo, salario, idade);

}

int main(){
    char nome[50];
    char sexo;
    double salario;
    int idade;
    int res;


    strcpy(nome, "Maria Silva");
    sexo = 'F';
    salario = 4560.9;
    idade = 32;

    functionMontaNome(nome, sexo, salario, idade);

    return 0;

}
