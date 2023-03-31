#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];

    int idade = 20;
    double salario = 5800.5;
    double altura = 1.58;
    char genero = 'F';
    strcpy(nome, "Tayse Rosa");
    
    printf("idade = %d\n", idade);
    printf("salario = %.2lf\n", salario);
    printf("altura = %.2lf\n", altura);
    printf("genero = %c\n", genero);
    printf("nome = %s\n", nome);
    
    return 0;
}