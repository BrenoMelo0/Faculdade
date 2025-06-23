/*Escreva um programa em linguagem C que leia uma palavra e um número inteiro positivo e
imprima a palavra lida esse número de vezes utilizando a estrutura for.
*/
#include<stdio.h>
int main() {
    int numero;
    char palavra[20];
    printf("Escreva uma palavra: "); 
    scanf("%s", palavra);
    printf("Escreva um numero: "); 
    scanf("%d", &numero);
    
    for (int i = 1; i <= numero; i++) {
        printf("%d - %s\n", i, palavra);
    };
    
    return 0;
}