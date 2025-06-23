/*Desafio: Sabe-se que:
 1 pé = 12 polegadas
 1 jarda = 3 pés
 1 milha = 1.760 jardas
 Escreva um programa em linguagem C que leia uma só medida em pés, faça as devidas
 conversões e imprima o resultado em:
 a) polegadas;
 b) jardas;
 c) milhas.*/
#include <stdio.h>
int main(void){

    float pe,pol,jar,mil;
    printf("digite uma medida em pes: ");
        scanf("%f", &pe);

    pol = pe*12;
    jar = pe/3;
    mil = jar /1760;

    printf("%.2f pes convertido e:\n  - %.2f polegadas;\n  - %.2f jardas;\n  - %.10f milhas.", pe,pol,jar,mil);

    return 0;
}