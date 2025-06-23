/*Escreva um programa em linguagem C que leia um número inteiro positivo e imprima todos
os números inteiros desde 1 até o número lido. Utilize uma estrutura do while.
*/
#include<stdio.h>
int main() {
    int i =1, fim;
    printf("Ate quando quer que repita: ");
    scanf("%d",&fim);
    do{
        printf("%d\n", i);
        i++;
    }
    while(i<=fim);
    return 0;
}