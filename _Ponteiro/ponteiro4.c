#include <stdio.h>

int teste( char *p1, char *p2 ){
    int x;
    for (;*p1!='\0' && *p2!='\0';p1++, p2++)
    if(*p1==*p2)
    ++x;
    return x;
}

main(){
    int retorno;
    retorno = teste("bocona", "botina");
    printf("%d", retorno);


    return 0;
}

