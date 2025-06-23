/*Escreva um programa modularizado em linguagem C que preencha um array
unidimensional homogêneo de tamanho 1000 com inteiros aleatórios de 1 até 10 mil. Em
seguida, imprima o array e calcule e imprima o somatório de todos os inteiros contidos no
array. Cada processamento/tarefa, como o preenchimento do array, a impressão e o cálculo
do somatório deve ser feito cada um por uma função diferente. Somente o array deve ser
declarado com escopo global. A parametrização de arrays será estudada posteriormente na
disciplina Estruturas de Dados*/
#include <stdio.h>
#include <string.h>
#include <time.h> 
int x[1000];
    void gera_n (){
        srand(time(NULL));
        for (int i = 0; i <= 1000; i++) {
            x[i] = (rand() % 9999) +1 ;
        }
    }
    void imprime (){
        for (int i = 0; i <= 1000; i++) {
            printf("%d,\n", x[i]);
        }
    }
    int soma (){
        int s = 0;
        for (int i = 0; i <= 1000; i++) {
            s = (s + x[i]);
        }
        return s;
    }
    void imprime_soma (int s){
        printf("A soma dos numeros gerados é: %d", s);
    }
int main() {
    int s;
    gera_n();
    imprime();
    s = soma();
    imprime_soma(s);
    return 0;
}