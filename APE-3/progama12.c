/*Escreva um programa em linguagem C que leia o salário de um funcionário, calcule e
mostre o valor do imposto devido usando as regras da tabela a seguir:
Salário Percentual do Imposto
Menor que R$ 1.400,00 5%
De R$ 1.400,00 a R$ 3.000,00 10%
Acima de R$ 3.000,00 15%*/
#include<stdio.h>
#include<math.h> 
int main(){
    float sal, tax;
    printf("digite seu salario: ");
    scanf("%f", &sal);

    if (sal<1400)
        tax = sal * 0.05;
    else if (sal >= 1400 && sal<=3000)
        tax = sal * 0.10;
    else if (sal > 3000)
        tax = sal * 0.15;
    
    printf("o imposto devido para seu salario = %.2f", tax);
    
    return 0;
}
