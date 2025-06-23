#include <stdio.h>
#include <string.h>
int main(){

char nome[100], email[100] ;
int qtdlivros ;
float salario ;

    printf("digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("digite seu e-mail: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = 0;

    printf("digite a quantidade de livros que leu este ano: ");
    scanf("%d", &qtdlivros);

    printf("digite o salario: ");
    scanf("%f", &salario);


    printf("os dados coletados sao:\n nome: %s \n email: %s \n livros: %d \n salario: %.2f", nome, email, qtdlivros, salario);

    return 0;
}