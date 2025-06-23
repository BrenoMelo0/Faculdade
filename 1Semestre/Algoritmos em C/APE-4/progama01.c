/*Escreva um programa em linguagem C que leia o número correspondente a um mês do ano e
imprima o nome do mês por extenso. Você deve utilizar somente estruturas de decisão (if)
simples (sem else).;
*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h> 
int main(){
    int mes;
    printf("digite o um mes do ano de 1 a 12: ");
    scanf("%d", &mes);
    
    if(mes == 1)
        printf("Janeiro");
    if(mes == 2)
        printf("fevereiro");
    if(mes == 3)
        printf("Março");
    if(mes == 4)
        printf("Abril");
    if(mes == 5)
        printf("Maio");
    if(mes == 6)
        printf("Junho");
    if(mes == 7)
        printf("Julho");
    if(mes == 8)
        printf("Agosto");
    if(mes == 9 )
        printf("Setembro");
    if(mes == 10)
        printf("Outubro");
    if(mes == 11)
        printf("Novembro");
    if(mes == 12)
        printf("Dezembro");
    
    return 0;
}
