/*Escreva um programa em linguagem C que leia três números inteiros e imprima o maior
deles.*/
#include<stdio.h>
#include<math.h> 
int main(){
    int x, y ,z;
    
    printf("digite um numero: ");
    scanf("%d", &x);
    printf("digite outro numero: ");
    scanf("%d", &y);
    printf("digite outro numero: ");
    scanf("%d", &z);
    
    if (x > y && x > z)
        printf("%d  e o maior",x);
    else if (y > x && y > z)
        printf("%d  e o maior",y);
    else if (z > x && z > y)
        printf("%d  e o maior",z);
    return 0;
}