/*Escreva um programa em linguagem C que imprima uma palavra qualquer 20 vezes na tela
utilizando a estrutura while.
*/
#include<stdio.h>
int main() {
    int i =1;

    do{
        printf("%d - ola\n", i);
        i++;
    }
    while(i<=20);
    
    return 0;
}