/*Escreva um programa em linguagem C que leia o ano de nascimento de uma pessoa, calcule
e imprima a idade atual dessa pessoa e também quantos anos ela terá em 2050. Utilize o
programa em linguagem C anexo (datahora.c) para aprender a capturar o ano a partir do
sistema operacional de seu computador.*/
#include<stdio.h>
#include<math.h>
#include <time.h>    
int main(){

    int nasc, id;
    time_t t;               
    struct tm *dataAtual;    
    time(&t);              
    dataAtual = localtime(&t); 
    
    printf("escreva o seu ano de nascimento: ");
    scanf("%d", &nasc);
    
    id=(dataAtual->tm_year + 1900)-nasc;

    printf("a sua idade neste ano e ou sera de: %d", id);

    return 0;
}