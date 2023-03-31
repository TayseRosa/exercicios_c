#include <stdio.h>

main(){
    //Definiçao da struct - Tipo de dado
    struct ficha_aluno{
        char nome[50];
        int numero;
        float nota;
    };

    //Criar a ariavel
    struct ficha_aluno aluno;    

    printf("\n ---------- Cadastro de aluno ---------- \n");

    printf("Digite o nome do aluno ..........: ");
    fgets(aluno.nome, 50, stdin);

    printf("Digite o numero do aluno ..........: ");
    scanf("%d", &aluno.numero);
    
    printf("Digite a nota do aluno ..........: ");
    scanf("%f", &aluno.nota);

    printf("\n ---------- Lendo os dados da struct ----------\n");
    printf("Nome ..........: %s", aluno.nome);
    printf("Numero ..........: %d\n", aluno.numero);
    printf("Nota ..........: %.2f\n", aluno.nota);
        
    
    return 0;

}
