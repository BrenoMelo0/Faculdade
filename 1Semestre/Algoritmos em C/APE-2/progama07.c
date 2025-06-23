/*Escreva um programa em linguagem C que mostre a pergunta “Você já programou em
linguagem C antes da nossa disciplina?” e leia uma resposta do usuário que pode ser a letra
S ou s (para sim) ou a letra N ou n (para não). O programa deve converter o caractere lido
para um valor booleano e atribuir esse valor para uma nova variável da seguinte forma. Se o
usuário responder sim, a variável booleana deve receber o valor verdadeiro, caso contrário
deve receber o valor falso. Não é necessário imprimir o valor da variável booleana.*/
#include <stdio.h>
#include <stdbool.h>
int main(){
    char resp;
    bool std;

    printf("Ja etudou C antes dessa disciplina? \n(S para sim, N para nao): ");
    scanf(" %c", &resp);

    if(resp == 'S' || resp == 's') {
        std = true;
        printf("o valor atrbuido foi (1 para true 0 para false): %d", std);
    } else {
        if(resp == 'N' || resp == 'n') {
            std = false;
            printf("o valor atrbuido foi (1 para true 0 para false): %d", std);
        } else {
            printf("ERRO: valor digitado invalido!");
        }
    }

    return 0;
}