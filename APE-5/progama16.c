/* Escreva um programa em linguagem C que imprima o seu nome completo na tela
infinitamente na tela. O programa poderá ser encerrado pelo usuário somente se ele
pressionar a tecla ESC. Dica: peça ao professor para explicar as funções kbhit e getch.*/

#include <stdio.h>
#include <conio.h> 
int main() {
    char nome[15];

    printf("Escreva seu primeiro nome: ");
    scanf("%s", nome);

    while (1) {
        printf("%s\n", nome);
        if (kbhit()) {
            char tecla = getch(); 
            if (tecla == 27) {    
                break;           
            }
        }
    }

    return 0;
}