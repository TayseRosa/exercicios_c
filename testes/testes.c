//

#include <stdio.h>
#include <stdlib.h>

int funcaoNumerosNegativos(int vet[], int n){
    for (int i = 0; i < n; i++){
        if (vet[i] < 0){
            return vet[i];
        }else{
            return 0;
        }
    }
}

int main(){
    int n;
    int vet[n];

    printf("Quantos numeros voce vai digitar?\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNumeros negativos\n\n");
    int res = funcaoNumerosNegativos(&vet, n);
    printf("%d\n", res);

    return 0;
}
