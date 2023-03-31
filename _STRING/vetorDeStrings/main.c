#include <stdio.h>
#include <stdlib.h>

#define NUM 6
#define TAM 30

int main(){
    int i;
    char nomes[NUM][TAM] = {
        "Tayse Rosa",
        "Théo Leite",
        "Diego de Souza Leite",
        "Pipoka Leite",
        "Mayk Leite"
    };
    
    for (int i = 0; i < NUM; i++){
        printf("%s\n", nomes[i]);
    }
    

    
    return 0;
}
