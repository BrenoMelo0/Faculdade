/*Escreva um programa em linguagem C que leia um número inteiro dentro de uma estrutura
de repetição while e finalize a repetição somente se o usuário digitar zero.
*/
#include<stdio.h>
int main() {
    
    int n = 1;

    while(n != 0){
         printf("digite um numero: ");
         scanf("%d", &n);
    };

    return 0;
}