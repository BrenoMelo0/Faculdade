/* Escreva um programa em linguagem C que leia o número correspondente a um mês do ano e
imprima o nome do mês por extenso. Você deve escrever o programa três vezes, uma vez
para cada modelo de aninhamento de if dos exemplos abaixo.*/


#include <stdio.h>
#include<math.h> 
int main() {
    int mes;

    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes);

    if (mes >= 1 && mes <= 12) { 
        if (mes == 1) {
            printf("Janeiro\n");
        } else if (mes == 2) {
            printf("Fevereiro\n");
        } else if (mes == 3) {
            printf("Março\n");
        } else if (mes == 4) {
            printf("Abril\n");
        } else if (mes == 5) {
            printf("Maio\n");
        } else if (mes == 6) {
            printf("Junho\n");
        } else if (mes == 7) {
            printf("Julho\n");
        } else if (mes == 8) {
            printf("Agosto\n");
        } else if (mes == 9) {
            printf("Setembro\n");
        } else if (mes == 10) {
            printf("Outubro\n");
        } else if (mes == 11) {
            printf("Novembro\n");
        } else {
            printf("Dezembro\n");
        }
    } else { 
        printf("Mês inválido! Digite um valor entre 1 e 12.\n");
    }

    return 0;
}

/*O segundo codigo esta comentado a baixo*/

/*#include<stdio.h>
#include<math.h> 
int main(){
    int mes;
    printf("digite o um mes do ano de 1 a 12: ");
    scanf("%d", &mes);

    if (mes >= 1 && mes <= 12) {
        if (mes == 1) {
            printf("Janeiro\n");
        } else {
            if (mes == 2) {
                printf("Fevereiro\n");
            } else {
                if (mes == 3) {
                    printf("Março\n");
                } else {
                    if (mes == 4) {
                        printf("Abril\n");
                    } else {
                        if (mes == 5) {
                            printf("Maio\n");
                        } else {
                            if (mes == 6) {
                                printf("Jun0ho\n");
                            } else {
                                if (mes == 7) {
                                    printf("Julho\n");
                                } else {
                                    if (mes == 8) {
                                        printf("Agosto\n");
                                    } else {
                                        if (mes == 9) {
                                            printf("Setembro\n");
                                        } else {
                                            if (mes == 10) {
                                                printf("Outubro\n");
                                            } else {
                                                if (mes == 11) {
                                                    printf("Novembro\n");
                                                } else {
                                                    if (mes == 12) {
                                                        printf("Dezembro\n");
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        printf("Mes invalido");
    }
        return 0;
}
*/

/*O terceiro codigo esta comentado a baixo*/

/*#include<stdio.h>
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
*/


