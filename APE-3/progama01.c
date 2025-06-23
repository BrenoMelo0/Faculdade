/*Escreva um programa em linguagem C que leia dois números inteiros, calcule a razão entre
eles a imprima o resultado.
*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h> 
int main(){
    system("color 86");

    int n1,n2;
    double r;
    printf("digite o quociente: ");
    scanf("%d", &n1);

    printf("digite o divisor: ");
    scanf("%d", &n2);

    r = (float) n1/n2;

    printf("a razao entre eles: %.2f",r);
    
    
    return 0;
}
