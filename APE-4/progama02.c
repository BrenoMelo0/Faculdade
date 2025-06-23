/*Escreva um programa em linguagem C que leia o número correspondente a um mês do ano e
imprima o nome do mês por extenso. Você deve utilizar somente estruturas de decisão (if)
compostas e aninhadas.*/

#include<stdio.h>
#include<math.h> 
int main(){

    int mes;
    printf("digite o um mes do ano de 1 a 12: ");
    scanf("%d", &mes);

    if(mes == 1){
        printf("Jan{eiro");
        } else if(mes == 2){
            printf("fevereiro");
            } else if(mes == 3){
                printf("Março");
                } else if(mes == 4){
                    printf("Abril");
                    } else if(mes == 5){
                        printf("Maio");
                        } else if(mes == 6){
                            printf("Junho");
                            } else if(mes == 7){
                                printf("Julho");
                                } else if(mes == 8){
                                    printf("Agosto");
                                    } else if(mes == 9 ){
                                        printf("Setembro");
                                        } else if(mes == 10){
                                            printf("Outubro");
                                            } else if(mes == 11){
                                                printf("Novembro");
                                                } else if(mes == 12)
                                                    printf("Dezembro");
    return 0;
}
