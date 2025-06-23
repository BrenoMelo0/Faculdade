/*Escreva um programa em linguagem C que leia o salário base de um funcionário, calcule e
mostre o salário a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o
salário base e paga imposto de 7% sobre este salário.
*/
#include<stdio.h>
#include<math.h>
int main(){

    double sb,g,i,sl,sbi;

    printf("digite seu salario bruto para calcularmos o salario liquido: ");
    scanf("%lf",&sb);

    g = (sb * 5)/100;
    sbi = sb + g;
    i = (sbi * 7)/100;
    sl = sbi - i;

    printf("Salario base: R$%.2lf\n Gratificaçao: R$%.2lf\n Salario antes do imposto: R$%.2lf\n Imposto: R$%.2lf\n Salario liquido: %.2lf",sb,g,sbi,i,sl);

    return 0;
}