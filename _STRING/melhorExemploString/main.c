#include <stdio.h>

main(){
    char nome[50];

    printf("\n ---------- Cadastro de aluno ---------- \n");

    printf("Digite o nome do aluno ..........: ");
    fgets(nome, 50, stdin);

    
    printf("\n ---------- Mostrando os dados na tela ----------\n");
    printf("Nome ..........: %s", nome);
        
    
    return 0;

}
