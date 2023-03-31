#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, x, soma;

    printf("Quantos numeros serão digitados?");
    scanf("%d", &n);

    soma=0;

    for (i = 1; i<=n; i++){
        printf("Digite um número: ");
        scanf("%d", &x);
        soma = soma + x;
    }

    printf("SOMA = %d\n", soma);
    return 0;
}
