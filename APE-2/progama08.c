/*Escreva um programa em linguagem C que leia o número de horas trabalhadas e o valor do
salário mínimo, calcule e mostre o salário a receber seguindo estas regras:
a) a hora trabalhada vale um décimo do salário mínimo.
b) o salário bruto equivale ao número de horas trabalhadas multiplicado
 pelo valor da hora trabalhada.
c) o imposto equivale a 3% do salário bruto.
d) o inss também deve ser descontado e equivale a 11% do salário bruto.
e) o salário a receber equivale ao salário bruto menos o imposto e o inss*/
#include<stdio.h>
#include<math.h> 
int main(){

    double sal, hora, valhora, salbrt, taxa, inss, sallqd;
    printf("digite o salario minimo:");
    scanf("%lf", &sal);

    printf("digite a quantidade de horas trabalhadas: ");
    scanf("%lf", &hora);

    valhora = sal/10;
    salbrt = valhora * hora;
    taxa = (salbrt * 3)/100;
    inss = (salbrt * 11)/100;
    sallqd = salbrt - taxa - inss;

    printf("o salario a receber: %.2lf", sallqd);

    return 0;
}