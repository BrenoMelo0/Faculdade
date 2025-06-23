/*Escreva um programa em linguagem C que leia um número inteiro, calcule e imprima a
média de todos os números inteiros existentes desde o número 1 até o número lido.
*/
#include <stdio.h>

int main() {
    int i = 1, r = 0, fim;
    float media;
    printf("Digite um numero: ");
    scanf("%d", &fim);
    do {
        r += i; 

        if (i < fim) {
            printf("%d + ", i);
        } else if (i == fim) {
            printf("%d = %d", i, r);
        }

        i++;
    } while (i <= fim);
    media = (float)r/10;
    printf("\n %d/%d\nmedia = %.2f", r, fim, media);
    return 0;
}