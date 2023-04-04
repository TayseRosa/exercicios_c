#include <stdio.h>

int main(){

    //Valor que é a variavel que sera apontada pelo ponteiro
    int pontX = 30;
    int pontY = 20;
    int pontZ = 10;

    //Atribuindo o endereço da variavel VALOR ao PONTEIRO
    int ponteiroX = &pontX;
    int ponteiroY = &pontY;

    printf("--------- RESULTADOS DE X ----------\n");
    printf(" Valor de X: %i \n\n ", pontX);
    printf("Endereco de memoria de X: %i \n\n ", &pontX);
    
    printf("--------- RESULTADOS DE Y ----------\n");
    printf(" Valor de Y: %i \n\n ", pontY);
    printf("Endereco de memoria de Y: %i \n\n ", &pontY);

    printf("--------- RESULTADOS DE Z ----------\n");
    printf(" Valor de Z: %i \n\n ", pontZ);
    printf("Endereco de memoria de Z: %i \n\n ", &pontZ);

    return 0;
}

