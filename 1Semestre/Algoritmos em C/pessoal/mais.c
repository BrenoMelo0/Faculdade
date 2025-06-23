/*escreva um progama que leia o raio de um crculo, calcule e imprima sua area. 
crie uma constante utilizando o qualificador const  da linguagem c para armazenar o valor de pi.*/
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