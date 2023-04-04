#include <stdio.h>

int main(){

    //Valor que é a variavel que sera apontada pelo ponteiro
    int valor = 27;

    //Declaraão da variavel ponteiro
    int *ptr;

    //Atribuindo o endereço da variavel VALOR ao PONTEIRO
    ptr = &valor;


    printf("Conteudo da variavel valor: %d \n\n ", valor);
    printf("Endereco da variavel valor: %x \n\n ", &valor);
    printf("Conteudo da variavel ponteiro ptr: %x \n\n: ", ptr);

    

    return 0;
}

