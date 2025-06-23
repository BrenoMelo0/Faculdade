/*Escreva um programa em linguagem C que leia as três notas de um aluno de uma
universidade, calcule a sua média aritmética simples e imprima uma mensagem conforme a
tabela abaixo.
Média Mensagem
0,0 até 3,0 Reprovado
3,1 até 6,9 Exame
7,0 até 10,0 Aprovado
*/
#include<stdio.h>
#include<math.h> 
int main(){
    float n1,n2,n3, mb = 0;

    printf("digite a n1: ");
    scanf("%f", &n1);
    printf("digite a n2: ");
    scanf("%f", &n2);
    printf("digite a n3: ");
    scanf("%f", &n3);

    mb = (n1 + n2 + n3)/3;

    if (mb >= 0 && mb <= 3)
        printf("Reprovado");
    else if ( mb>3 && mb < 7)
        printf("Exame");
    else if (mb>= 7 && mb<=10)
        printf("Aprovado");
    else 
        printf("nota invalida");
    
    return 0;
}
