//Crie uma função que receba, por parâmetro, um inteiro e retorne 1 se este
//for par ou 0 caso seja ímpar. Na função main(), escreva por extenso o
//resultado do teste (par ou ímpar).

#include <stdio.h>

float calcularProduto(float valorProducao, float comissao, float margemLucro) {
    float custoProducao = valorProducao;
    float precoVenda = custoProducao * (1 + (comissao + margemLucro) / 100);
    float lucro = precoVenda - custoProducao;

    return lucro;
}

int main() {
    float valorProducao, comissao, margemLucro;
    float lucro;

    printf("Digite o valor de producao do produto: R$");
    scanf("%f", &valorProducao);

    printf("Digite a comissao da loja em porcentagem: ");
    scanf("%f", &comissao);

    printf("Digite a margem de lucro desejada em porcentagem: ");

    scanf("%f", &margemLucro);

    lucro = calcularProduto(valorProducao, comissao, margemLucro);

    printf("Lucro obtido: R$%.2f\n", lucro);

    return 0;
}
