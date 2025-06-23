/*Escreva um programa em linguagem C que leia/receba o valor das três notas de um aluno,
calcule a média aritmética simples dessas notas e imprima a média do aluno.*/

#include <stdio.h>
int main(void){

    float n1,n2,n3,n4;

    printf("escreva a primeira nota: ");
        scanf("%f", &n1);

    printf("escreva a segunda nota: ");
        scanf("%f", &n2);

    printf("escreva a terceira nota: ");
        scanf("%f", &n3);

    n4 = (n1 + n2 +n3)/3;

    printf("com as notas %.2f, %.2f e %.2f a media final foi %.2f", n1, n2, n3, n4);
    
    return 0 ;
}