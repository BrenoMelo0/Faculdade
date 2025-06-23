/*Escreva um programa em linguagem C que leia o raio de um círculo e calcule e imprima a
sua área. Crie uma constante utilizando o qualificador const da linguagem C para armazenar
o valor de PI = 3,141592.*/
#include <stdio.h>
int main(){
    const float PI = 3.14;
    float raio = 0; 
    printf("digite o raio de um circulo: ");
    scanf("%f", &raio);

    float area = 2*PI*(raio*raio);

    printf("a area do seu circulo é %.2f", area);
    return 0; 
}