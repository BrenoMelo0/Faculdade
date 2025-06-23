/*Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Escreva um
programa em linguagem C que receba o valor do salário mínimo e a quantidade de
quilowatts consumida por uma residência, calcule e mostre:
a) o valor de cada quilowatt.
b) o valor a ser pago por essa residência.
c) o valor a ser pago com desconto de 15%.*/

#include<stdio.h>
#include<math.h> 
int main(){

    double sal, consumo, kwh, conta, contadesconto;

    printf("digite o salario minimo:");
    scanf("%lf", &sal);

    printf("digite o consumo em kwh: ");
    scanf("%lf", &consumo);

    kwh = sal/5;
    conta = kwh * consumo;
    contadesconto = conta - ((conta*15)/100);

    printf("a) o valor de cada quilowatt: R$ %.2lf \n b) o valor a ser pago por essa residencia: R$ %.2lf \n c) o valor a ser pago com desconto de 15: R$ %.2lf \n", kwh, conta, contadesconto);

    return 0 ;
}