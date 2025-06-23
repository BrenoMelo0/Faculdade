/*Escreva um programa em linguagem C que imprima todos os números inteiros desde 1 até x
utilizando a estrutura for, sendo x um número inteiro positivo informado pelo usuário.*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h> 
int main(){
    int i = 1, x = 0;
    printf("digite ate qual numero quer ver: ");
    scanf("%d", &x);

    for(i=1;i<=x;i++){
        printf("\n %d",i);
    }
    return 0;
}
