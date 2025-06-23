/*Escreva um programa em linguagem C que leia dois dois números inteiros, calcule e
imprima o resto da divisão do primeiro número pelo segundo número.
*/

#include<stdio.h>
#include<math.h> 
int main(){
    int x, y;
    float resto;
    printf("digite um numero: ");
    scanf("%d", &x);

    
    printf("digite outro  numero: ");
    scanf("%d", &y);
    
    resto = x % y;
    printf("o resto da dividsao %d por %d = %.2f",x,y,resto);
    return 0;
}
