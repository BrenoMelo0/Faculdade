/*) Escreva um programa em linguagem C que leia a idade de uma pessoa e imprima a
mensagem “Você pode tirar sua habilitação para dirigir” ou “Você não pode tirar sua
habilitação para dirigir”. A idade informada não pode ser zero e também não pode ser maior
do que 123 e, nesses casos, uma mensagem de advertência deve ser apresentada ao usuário.*/

#include<stdio.h>
#include<math.h> 
int main(){

    int idade =0;

    printf("digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18 && idade<=123)
    printf("Pode tirar carteira!");
    else if (idade < 18 && idade > 0)
    printf("Nao pode tirar carteira ainda!");
    else 
    printf("idade invalida");

    return 0;
}