/*Escreva um programa em linguagem C que leia a idade de uma pessoa e imprima a
mensagem “Você pode tirar sua habilitação para dirigir” ou “Você não pode tirar sua
habilitação para dirigir”.
*/

#include<stdio.h>
#include<math.h> 
int main(){

    int idade =0;

    printf("digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18)
    printf("Você pode tirar sua habilitação para dirigir");
    else 
    printf("Você não pode tirar sua habilitação para dirigir");
 
    return 0;
}
