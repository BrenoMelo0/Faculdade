/*Escreva um programa em linguagem C que leia a idade de uma pessoa dentro de uma
estrutura de repetição do-while e finalize a repetição somente se o usuário digitar uma idade
válida, ou seja, uma idade de 1 até 123.*/
#include<stdio.h>
int main() {
    int idade;

    do{
        printf("digite sua idade: ");
         scanf("%d", &idade);
    }
    while(idade < 0 || idade > 124);
    
    return 0;
}