#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
double functionCalcArea(float base, float altura ){
    return base*altura;
}
*/

int main()
{
    double base=0, altura=0,area=0, perimetro=0, diagonal=0;

    printf("\n Digite a base do retângulo: \n");
    scanf("%lf", &base);

    printf("\n Digite a altura do retângulo: \n");
    scanf("%lf", &altura);

    area =  base*altura;
    perimetro = 2 * (base+altura);
    diagonal = base * base + altura * altura;

    printf("AREA: %.4lf\n", area);
    printf("PERIMETRO = %.4lf\n", perimetro);
    printf("DIAGONAL = %.4lf\n", diagonal);

    return 0;
}
