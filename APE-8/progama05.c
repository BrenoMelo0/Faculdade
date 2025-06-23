/*Escreva um programa modularizado em linguagem C que leia um número inteiro e verifique
e imprima se este número é par ou ímpar.
*/
#include<stdio.h>
const char* impar_par (int x){
    if((x % 2) == 0){
        return "par";
    } else {
        return "impar";
    };
}
int main(void){
    int x ;
    const char* r;
    printf(" Digite um numero: ");
    scanf("%d", &x);
    r = impar_par(x);
    printf("o numero digitado e : %s ",r);
    return 0;
}
