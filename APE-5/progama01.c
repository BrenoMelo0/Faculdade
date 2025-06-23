/*Escreva um programa em linguagem C que imprima uma palavra qualquer 20 vezes na tela
utilizando a estrutura while.
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