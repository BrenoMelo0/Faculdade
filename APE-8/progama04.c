/*Escreva um programa modularizado em linguagem C que leia dois números inteiros e
chame uma outra função para calcular a soma desses números. A impressão deve ser feita
pela função main.
*/
#include<stdio.h>
int somar(int x1, int y1){
    int s;
    s = x1+y1;
    return s;
}
int main(void){
    int x, y ,s;
    printf(" Digite um numero: ");
    scanf("%d", &x);
    printf(" Digite outro numero: ");
    scanf("%d", &y);
    s = somar(x, y);
    printf("o valor da soma foi: %d",s);
    return 0;
}

