/*) Escreva um programa em linguagem C que leia as três notas de um aluno de uma
universidade, calcule a sua média aritmética simples e imprima uma mensagem conforme a
tabela abaixo. A leitura de uma nota e o cálculo da média devem ser feitos cada um por uma
função diferente. A nota lida deve ser validada (nova válida de 0,0 até 10,0).
Média Mensagem
0,0 até 3,0 Reprovado
3,1 até 6,9 Exame
7,0 até 10,0 Aprovado*/
#include <stdio.h>
#include <stdbool.h>
float lenota (){
    bool valid =false;
    float n;
    while(valid==false){
        printf("digite uma nota: ");
        scanf("%f", &n);
        if(n>=0 && n<=10){
            valid = true;
        }else{
            printf("notainvalida, digite novamente.\n");
        }
    }
    return n;
}
float calcmedia (float n1, float n2, float n3){
    int m;
    m = (n1+n2+n3)/3;
    return m;
}
int main() {
    float n1, n2, n3;
    float m;
    n1 = lenota();
    n2 = lenota();
    n3 = lenota();
    m = calcmedia(n1,n2,n3);
    printf("A media obtida foi:%.2f",m);
    return 0;
}