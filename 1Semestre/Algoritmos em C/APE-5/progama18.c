/*Escreva um programa em linguagem C que imprima todos os números inteiros desde 1 até
20 na tela utilizando a estrutura do while.
*/
#include<stdio.h>
int main() {
    int i =1;

    do{
        printf("%d\n", i);
        i++;
    }
    while(i<=20);
    
    return 0;
}