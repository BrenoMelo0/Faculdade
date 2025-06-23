/*Escreva um programa em linguagem C que leia um número real, calcule e imprima a raiz
quadrada desse número.*/
#include<stdio.h>
#include<math.h>
int main(){

    double n, r;

    printf("escreva um numero para que seja calculada sua raiz: ");
    scanf("%lf",&n);

    r = sqrt(n);

    printf("A raiz quadrada de %.2lf resulta em %.2lf", n, r);

    return 0;
}