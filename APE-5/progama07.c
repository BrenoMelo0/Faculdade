/*Escreva um programa em linguagem C que leia uma palavra e imprima essa palavra na tela
20 vezes utilizando qualquer uma das três estruturas de repetição.
*/
#include<stdio.h>
int main() {
    int i =1;
    while(i<=20){
        printf("%d - ola\n", i);
        i++;
    };
    return 0;
}