/*Escreva um programa em linguagem C que leia uma frase qualquer e imprima essa
frase/string na vertical na tela, isto é, cada caractere em uma nova linha da tela. Dica: para
acessar cada caractere da string utilize a sintaxe: variável[posição].*/


#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    int i;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); 

    for (i = 0; frase[i] != '\0'; i++) {
            printf("%c\n", frase[i]);
    }

    return 0;
}