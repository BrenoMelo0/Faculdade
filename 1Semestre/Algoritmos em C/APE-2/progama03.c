/*Escreva um programa em linguagem C que calcule a potência de um número x elevado a um
número y, sendo x e y informados pelo usuário.
*/
#include<stdio.h>
#include<math.h>
int main(){
    double x,y,z;
    
    printf("digite um numero para base: ");
    scanf("%lf", &x);
    printf("digite um numero para o expoente: ");
    scanf("%lf", &y);

    z = pow(x,y);

    printf("o resultado de %.2lf ^ %.2lf = %.2lf",x,y,z);

    return 0;
}