/*Escreva um programa em linguagem C que leia o número correspondente a um mês do ano e
imprima o nome do mês por extenso.*/
#include<stdio.h>
#include<math.h> 
int main(){
    int mes;

    printf("Digite o número de um mes (1 a 12): ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:  printf("Janeiro"); break;
        case 2:  printf("Fevereiro"); break;
        case 3:  printf("Março"); break;
        case 4:  printf("Abri"); break;
        case 5:  printf("Maio"); break;
        case 6:  printf("Junho"); break;
        case 7:  printf("Julho"); break;
        case 8:  printf("Agosto"); break;
        case 9:  printf("Setembro"); break;
        case 10: printf("Outubro"); break;
        case 11: printf("Novembro"); break;
        case 12: printf("Dezembro"); break;
        default: printf("Número inválido! Digite um valor entre 1 e 12.\n");
    }

    
    return 0;
}
