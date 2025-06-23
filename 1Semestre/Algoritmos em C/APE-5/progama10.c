/*Escreva um programa em linguagem C que imprima o seu primeiro nome infinitamente na
tela utilizando a estrutura do-while.
*/
#include<stdio.h>
int main() {
    char nome[15];

    printf("Escreva seu primeiro nome: ");
    scanf("%s", nome);

    do{
        printf("%s\n", nome);
    }
    while(1);
    
    return 0;
}