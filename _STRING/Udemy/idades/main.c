//Fazer um programa para ler o nome e a idade de 2 pessoas.
//Ao final mostrar uma mensagem com os nomes e a idade media entre essas pessoas,
//com uma casa decimal, conforme exemplo:

#include <stdio.h>
#include <stdlib.h>

float calculaIdadeMedia ( idade1, idade2 ){
    float res = idade1 + idade2 / 2;
    return res;
}

int main(){
    char nome1[50], nome2[50];
    float idadeMedia=0, idade1=0, idade2=0, res=0;

    printf("\n ### Dados da PRIMEIRA pessoa: ### \n");
    printf("Nome da 1º pessoa: \n");
    fgets(nome1, 50, stdin);
    printf("Idade da pessoa 1: \n");
    scanf("%f", &idade1);
    getchar();

    printf("\n ### Dados da SEGUNDA pessoa: ### \n");
    printf("Nome da 2º pessoa: \n");
    fgets(nome2, 50, stdin);

    printf("Idade da pessoa 2: \n");
    scanf("%f", &idade2);

    idadeMedia = calculaIdadeMedia(idade1, idade2);

    printf("A idade media de %s e %s eh de %f", nome1, nome2,idadeMedia, " anos");
    strtok(nome1, "\n", strtok(nome2, "\n"), idadeMedia);

    return 0;
}
