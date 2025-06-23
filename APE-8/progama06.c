/*Escreva um programa modularizado em linguagem C que leia três números inteiros e
imprima o maior deles.
*/
#include <stdio.h>
int maior (int x1, int x2, int x3){
    int r = x1;
    if(x2>r){
        r = x2;
    }if(x3 > r){
        r = x3;
    }
    return r;
}
int main(void) {
    int x[3];
    int i =1;
    int r;
    while(i<=3){
        printf("digite o numero %d: ", i);
        scanf("%d", &x[i]);
        i++;
    }
    r = maior(x[1],x[2], x[3]);
    printf("o maior numero digitado foi: %d", r);
    return 0;
}