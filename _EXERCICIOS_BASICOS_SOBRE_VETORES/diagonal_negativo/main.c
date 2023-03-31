#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j, n, qtdNegativos;
    printf("Qual a ordem da matriz?\n");
    scanf("%d", &n);

    //Criar uma matriz
    int mat[n][n];

    for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
            printf("Elemento [%d, %d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }    
    }
    
    printf("Diagonal Principal da Matriz! \n");
    for (int i = 0; i < n; i++){
        printf("%d ", mat[i][i]);
    }

    qtdNegativos = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(mat[i][j] < 0 ){
                qtdNegativos++;
            }
        }   
    }    

    printf("\nQuantidade de numeros negativos! %d\n", qtdNegativos);
    




    return 0;
}
