/*Escreva um programa em linguagem C que leia três números inteiros, calcule o somatório
desses números e imprima o resultado no vídeo.
*/

#include <stdio.h>
int main(void){

    int n1,n2,n3,n4;

    printf("digite um numero: ");
    scanf("%d", &n1);

    printf("digite outro numero: ");
    scanf("%d", &n2);

    printf("digite outro numero: ");
    scanf("%d", &n3);

    n4 = n1 + n2 + n3;

    printf("a soma de %d, %d e %d e igual a %d .", n1,n2,n3,n4);
    return 0; 
}