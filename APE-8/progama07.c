/*Escreva um programa modularizado em linguagem C que leia um número inteiro positivo e,
através de uma função, imprima todos os números inteiros desde o número 1 até o número
lido.
*/
#include<stdio.h>
void contar(int x){
    int i = 1 ;
    while(i<= x){
        printf("%d\n", i);
        i++;
    }
}
int main(){
    int x;
    printf("digite um numero: ");
    scanf("%d", &x);
    contar(x);
    return 0;
}