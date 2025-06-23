/*Escreva um programa em linguagem C que leia dois números inteiros, calcule o produto
desses dois números e imprima o resultado no vídeo.*/

#include <stdio.h>
#include <locale.h>
int main(){

setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;

    printf("digite um numero: ");
        scanf("%d", &n1);

    printf("digite outro numero: ");
        scanf("%d", &n2);

    n3 = n1*n2 ;
        
    printf("o resultado da multiplicacao de %d e %d resulta em %d", n1,n2,n3);

    return 0;
}