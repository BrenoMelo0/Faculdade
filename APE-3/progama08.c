/*Escreva um programa em linguagem C que leia um número inteiro que corresponda ao
código de uma estação do ano e imprima o nome da estação do ano, conforme a tabela a
seguir:
*/
#include<stdio.h>
#include<math.h> 
int main(){
    int x;
    printf("digite um numero de 1 a 4 para saber qual e a estaçao do ano: ");
    scanf("%d", &x);
    if (x == 1)
        printf("Primavera");
    else if (x == 2)
        printf("Verao");
    else if (x == 3)
        printf("Outono");
    else if (x == 4)
        printf("Inverno");
    else 
        printf("Codigo invalido");
    return 0;
}
