/*Escreva um programa modularizado em linguagem C que leia um número inteiro e chame
uma outra função para imprimir este número.*/
#include<stdio.h>
void imprime_x (int n){
    printf("o valor do numero : %d",n);
}
int main(void){
    int x ;
    printf(" Digite um numero: ");
    scanf("%d", &x);
    imprime_x(x);
    return 0;
}

