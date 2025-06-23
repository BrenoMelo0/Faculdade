/*Escreva um programa em linguagem C que leia dois números inteiros e imprima o maior
deles. Se os números forem iguais o programa deve imprimir a mensagem “Os números são
iguais”.
*/

#include<stdio.h>
#include<math.h> 
int main(){
    int x, y ;
    
    printf("digite um numero: ");
    scanf("%d", &x);
    printf("digite outro numero: ");
    scanf("%d", &y);
    
    if (x == y)
        printf("os numeros sao iguais");
    else if (x > y)
        printf("x = %d e o maior", x);
    else 
        printf("y = %d e o maior",y);
    
    return 0;
}
