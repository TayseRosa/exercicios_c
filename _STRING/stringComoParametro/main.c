#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void teste_senha( char d[], char m[] ){//ou char *d, char *m
    if( strcmp("inter", d) == 0 ){
        strcmp(m, "Senha Valida!");
    }else{
        strcpy(m, "Senha invalida!");
    }
};

int main(){
    char senha[10]="gremio";
    char msg[20];
    teste_senha(senha, msg);
    printf("\nSenha %s -> %s!  \n\n", senha, msg);//Senha gremio   -> senha invalida
    
    return 0;
}
