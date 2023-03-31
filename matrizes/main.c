#include <stdio.h>
#include <stdlib.h>

int functionMontaMatriz(int m, int n, int i, int j){
    int mat[m][n];

    for(i = 0; i< m; i++){
        for(j = 0; j< n; j++){
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j] );
        }
    }


    printf("\n Matriz digitada: \n");
    for(i=0; i<m;i++){
        for(j=0; j<n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

}

int main(){

    int m, n, i, j;

    printf("Quantas linhas vai ter a matriz?\n");
    scanf("%d",&m );

    printf("Quantas colunas vai ter a matriz?\n");
    scanf("%d",&n );

    functionMontaMatriz(m,n,i,j);

    return 0;
}
