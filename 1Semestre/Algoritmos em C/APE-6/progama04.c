/*Escreva um programa em linguagem C que imprima todos os números inteiros desde 1 até
500 mil. A impressão dos números poderá ser encerrada pelo usuário somente se ele
pressionar a tecla ESC. A mensagem “Cancelado pelo usuário” ou a mensagem “Processo
concluído” deve ser mostrada.
kbhit() para detectar se uma tecla foi pressionada.
getch() para ler a tecla.
*/
#include <conio.h> 
#include <stdio.h>
int main(){
    
    int i = 0;
    
    for(i =0;1<=500000;i++){
        printf("\n%d", i);

        if(kbhit()){
            char tecla = getch();
            if (tecla == 27){
                printf("\nCancelado pelo usuario");
                return 0;
            } 
        }
    }
    printf("\nProcesso concluido");
    return 0;

}