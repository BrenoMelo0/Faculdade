/*Escreva um programa em linguagem C que leia um número real e imprima esse número das
 seguintes formas:
 a) Arredondado para cima.
 b) Arredondado para baixo.
 c) Imprima somente a parte inteira do número.
 d) Imprima somente a parte decimal do número.*/
#include<stdio.h>
#include <math.h>
int main(){

    double n, pfrac,inte;
    int np , nm;

    printf("escreva um nuumero: ");
    scanf("%lf", &n);

    np = ceil(n);
    nm =  floor(n);
    pfrac = modf(n, &inte);
    
    printf("o numero %.2f resulta em: \n",n);
    printf("a) Arredondado para cima = %d \n",np);
    printf("b) Arredondado para baixo = %d \n",nm);
    printf("c) Imprima somente a parte inteira do número = %.0f \n",inte);
    printf("d) Imprima somente a parte decimal do número = %.2f \n",pfrac);
    return 0;
}