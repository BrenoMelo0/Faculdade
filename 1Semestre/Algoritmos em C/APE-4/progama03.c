/*Escreva um programa em linguagem C que leia o número correspondente a um mês do ano e
imprima o nome do mês por extenso. Você deve utilizar o comando switch.*/

#include<stdio.h>
#include<math.h> 
int main(){

    int mes;
    printf("digite o um mes do ano de 1 a 12: ");
    scanf("%d", &mes);
   
    switch (mes){
        case  1:
            printf("Janeiro");
            break;
        case 2:
           printf("fevereiro");
           break;
        case 3:
           printf("Março");
           break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        case 12:
            printf("Dezembro");
        default:
            printf("mes invalido");   
    }


    return 0;
}