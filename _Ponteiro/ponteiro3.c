//O professor de Introdução à Computação precisa de um sistema para armazenar informações sobre o desempenho dos alunos do vestibular. 
//É importante armazenar os seguintes dados: 
//nome do aluno, 
//código do curso e 
//nota geral (de 0 a 100). 
//Além de cadastrar, o sistema deve oferecer as opções de lista geral (por ordem decrescente da nota) e 
//lista por curso (nesta última opção, totalizar o número de alunos no curso selecionado). 
//Utilizar um menu de opções para implementar a solução.

#include <stdio.h>

int main(){

    //Valor que é a variavel que sera apontada pelo ponteiro
    char nomeAluno[50];
    int codCurso;
    float notaGeral;

    //Atribuindo o endereço da variavel VALOR ao PONTEIRO
    char ponteiroNome = &nomeAluno;
    int ponteiroCod = &codCurso;
    int ponteiroNota = &notaGeral;

    printf("\n ---------- Cadastro de aluno ---------- \n");

    printf("Digite o nome do aluno ..........: ");
    fgets(nomeAluno, 50, stdin);
    
    printf("Digite o codigo do curso ..........: ");
    scanf("%d", &codCurso);
    
    printf("Digite a nota geral do aluno ..........: ");
    scanf("%lf", &notaGeral);

    printf("\n ---------- Mostrando os dados na tela ----------\n");
    printf("Nome do aluno ..........: %s", nomeAluno);
    printf("Posição na memória ..........: %x \n\n", &ponteiroNome);

    printf("Codigo do curso ..........: %i\n", codCurso);
    printf("Posição na memória ..........: %x \n\n", &ponteiroCod);

    printf("Nota geral  ..........: %f\n", &notaGeral);
    printf("Posição na memória ..........: %x \n\n", &ponteiroNota);

    return 0;
}

