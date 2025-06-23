/*Escreva um programa em linguagem C que leia a base e a altura de um triângulo e calcule e
imprima a área desse triângulo.*/
#include <stdio.h>
int main(void){

    float base, altura, area;

    printf("para calcular a area de um triangulo diga qual o tamanho da base(em centimetros): ");
        scanf("%f", &base);

    printf("digite tambem a altura(em centimetros): ");
        scanf("%f", &altura);

        area = (base*altura)/2;

    printf("a area de um triangulo de base %.2fcm e altura %.2fcm e %.2fcm2.", base, altura, area);
    return 0;
}