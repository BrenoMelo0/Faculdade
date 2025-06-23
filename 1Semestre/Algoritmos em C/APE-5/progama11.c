/*Escreva um programa em linguagem C que imprima o seu primeiro nome infinitamente na
tela utilizando a estrutura for.
*/
#include<stdio.h>
int main() {
    char nome[15];

    printf("Escreva seu primeiro nome: ");
    scanf("%s", nome);
   
    
    for (; 1; ) {
        printf("%s\n", nome);
    };
    
    return 0;
}