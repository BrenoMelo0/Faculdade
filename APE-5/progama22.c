/*Escreva um programa em linguagem C que leia um número inteiro positivo e imprima todos
os números inteiros desde 1 até o número lido. Utilize uma estrutura for.
*/
#include<stdio.h>
int main() {
    int fim;
    printf("Ate quando quer que repita: ");
    scanf("%d",&fim);

    for(int i = 1; i <= fim; i++){
        printf("%d\n", i);
    }
    
    return 0;
}