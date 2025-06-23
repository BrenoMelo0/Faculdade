/*Escreva um programa em linguagem C que preencha um array unidimensional homogêneo
de tamanho 10 com números inteiros informados pelo usuário. Em seguida, imprima todos
os números contidos no array.*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h> 
int main(){
    int i, n[10];
    for(i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%d", &n[i]);
    }
    for(i=0;i<10;i++){
        printf("n%.2d - %d\n",i,n[i]);
    }
    return 0;
}
