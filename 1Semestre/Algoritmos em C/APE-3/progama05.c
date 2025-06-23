/*Escreva um programa em linguagem C que leia um número inteiro e imprima uma
mensagem dizendo se esse número é par ou ímpar.*/
#include<stdio.h>
#include<math.h> 
int main(){
    int x;
    printf("digite um numero: ");
    scanf("%d", &x);

    if((fmod(x,2)) == 1){
        printf("impar");
    }else{
        printf("par");
    }

    return 0;
}
