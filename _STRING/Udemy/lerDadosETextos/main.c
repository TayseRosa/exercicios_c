#include <stdio.h>
#include <string.h>

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
fgets(buffer, length, stdin);
strtok(buffer, "\n");
}

int main(){
    char nome1[50], nome2[50];
    int idade1, idade2;

    printf("Digite o nome da pessoa 1: ");
    ler_texto(nome1, 50);//Substitui as 2 linhas de baixo

    printf("Digite a idade da pessoa 1: ");
    scanf("%d", &idade1);

    printf("Digite o nome da pessoa 2: ");
    limpar_entrada();
    ler_texto(nome2, 50);//Substitui as 2 linhas de baixo
    //fgets(nome2, 50, stdin);//Entrada de dados de texto com espaços
    //strtok(nome2, "\n");//Elimina a quebra de linha produzido pelo enter na execução do programa.

    printf("Digite a idade da pessoa 2: ");
    scanf("%d", &idade2);

    printf("NOME 1: = %s\n", nome1);
    printf("IDADE 1= %d\n", idade1);

    printf("NOME 2= %s\n", nome2);
    printf("IDADE 2= %d\n", idade2);

    return 0;
}
