// Compartilhe uma solução para qualquer um dos exercícios postados na
// prática de autoestudo utilizando "um vetor de registro".
// Todos os alunos devem postar pelo menos um programa com solução diferente dos
// programas dos colegas já postados para verificar se estão corretos e produzem o resultado desejado.

/*
Uma pesquisa realizada pela ULBRA coletou informações sobre ascaracterísticas físicas de 10 alunos da instituição,
quais sejam:
gênero (F-feminino, M‐masculino),
idade,
peso e
altura.

Para facilitar o trabalho de tabulação, os alunos de Laboratório de Programação deverão desenvolver um programa para identificar:
a. a maior idade entre os alunos;
b. a porcentagem de mulheres e de homens;
c. o no de homens com menos de 1,70m;
d. o peso médio das mulheres.
*/

#include <stdio.h>

int main(){
    int n = 3;
    int i = 0;
    int olderAge = 0;
    int numberWomen = 0;
    int numberMen = 0;
    int shortMen = 0;
    int womenWeight = 0;
    float weightWomen = 0;


    struct Cad_student{
        char gender;
        int age;
        float weight;
        float height;
    };

    struct Cad_student student[n];

    // Cadastro dos dados dos aluno
    for (int i = 0; i < n; i++){
        printf(" --- Cadastre 3 alunos: ---\n");
        printf("Digite o gênero do aluno %d (F - Feminino, M - Masculino) ..........: ", i + 1);
        scanf("%c", &student[i].gender);

        printf("\nDigite a idade do aluno %d ..........: ", i + 1);
        scanf("%d", &student[i].age);

        printf("\nDigite o peso do aluno %d..........: ", i + 1);
        scanf("%f", &student[i].weight);

        printf("\nDigite a altura do aluno %d..........: ", i + 1);
        scanf("%.2f", &student[i].height);
    }
    // Maior idade entre os aluno
    for (int i = 0; i < n; i++)
    {
        if (student[i].age > olderAge)
        {
            olderAge = student[i].age;
        }
    }

    printf("\n---------- A maior idade entre os aluno é: %d ----------\n", olderAge);

    // Porcentagem de mulheres e de homens
    for (int i = 0; i < n; i++){
        if (student[i].gender == 'F'){
            numberWomen++;
        }else{
            numberMen++;
        }
    }

    float percentageWomen = ((float)numberWomen / n) * 100;
    float percentageMen = ((float)numberMen / n) * 100;
    printf("\n---------- Porcentagem de mulheres: %.2f%% ----------\n", percentageWomen);
    printf("\n---------- Porcentagem de homens: %.2f%%----------\n", percentageMen);

    // Número de homens com menos de 1,70m
    for (int i = 0; i < n; i++)
    {
        if (student[i].gender == 'M' && student[i].height < 1.7)
        {
            shortMen++;
        }
    }
    printf("\n----------Número de homens com menos de 1,70m: %d----------\n", shortMen);

    // Peso médio das mulheres
    for (int i = 0; i < n; i++){
        if (student[i].gender == 'F'){
            weightWomen += student[i].weight;
            womenWeight++;
        }
    }
    float weightAverageWomens = weightWomen / womenWeight;

    printf("\n----------Peso médio das mulheres: %.2f kg ----------\n", weightAverageWomens);
    return 0;
}