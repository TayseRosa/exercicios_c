#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char nome[21];
   fflush(stdin);
   printf("Digite seu nome: ");
   gets(nome);

   printf("Bem vindo, %s!\n\n", nome);
}
