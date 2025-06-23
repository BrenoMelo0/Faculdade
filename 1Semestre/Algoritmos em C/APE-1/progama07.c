/* Escreva um programa em linguagem C que leia o salário de um funcionário e leia também
uma porcentagem de aumento de salário. Em seguida, calcule e imprima o novo salário do
funcionário e o valor que o funcionário receberá de aumento.
*/
#include <stdio.h>
int main(void){

    float s1,au,s2,aur;

    printf("digite seu salario atual: ");
        scanf("%f", &s1);

    printf("digite o percentual de aumento: ");
        scanf("%f", &au);

    aur = (s1*au)/100;
    s2 = s1 + aur;

    printf("voce recebera um aumento real de R$%.2f e o salario bruto sera de R$%.2f", aur, s2);

    return 0;
}