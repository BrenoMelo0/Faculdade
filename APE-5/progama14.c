/* Escreva um programa em linguagem C que leia a idade de uma pessoa dentro de uma
estrutura de repetição do-while e finalize a repetição somente se o usuário digitar uma idade
válida, ou seja, uma idade de 1 até 123. Sempre que o usuário digitar uma idade inválida a
mensagem “Idade inválida” deve ser mostrada.
*/
#include<stdio.h>
int main() {
    int idade = 1;

    do{
        if(idade < 1 || idade > 123){ 
            printf("idade invalida1\n");
        }
        printf("digite sua idade: ");
        scanf("%d", &idade);
    }
    while(idade < 1 || idade > 123);
    
    return 0;
}