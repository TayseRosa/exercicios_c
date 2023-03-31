#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 51

int contador_palavras( char *lin ){//recebe a frase
    int i, cont=0;

    for (int i = 0; i < strlen(lin); i++){//Ate o fim da frase
        if (lin[i] != ' ' ){//Achou palavra
            while (lin[i] != ' ' && lin[i] != '\0' ){
                i++;
                cont++;
            }
        return cont;
        }
        
    }
}

int main(){
    char linha[TAM];
    fflush(stdin);
    printf("DIGITE UMA FRASE[50]: \n");
    gets(linha);
    printf("\nNúmero de palavras: %i\n", contador_palavras(linha));





    return 0;
}
