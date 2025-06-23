/*Escreva um programa em linguagem C que leia o raio de um círculo, calcule e imprima a ua
área. Utilize a constante PI específica da biblioteca math.h da linguagem C.
*/
#include <stdio.h>
#include<math.h>
    int main(){

        float raio = 0; 
        printf("digite o raio de um circulo: ");
        scanf("%f", &raio);
    
        float area = 2*M_PI*(raio*raio);
    
        printf("a area do seu circulo é %.2f", area);
        return 0; 
    }
