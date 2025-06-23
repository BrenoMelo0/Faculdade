/*12) Nesta questão você aplicará a técnica de Modularização em um programa que já foi feito em
lista prática anterior. Segue o enunciado da questão novamente para simples conferência:
Escreva um programa em linguagem C que inicie mostrando o menu abaixo para o usuário:
Programa Calculadora Simples
(1) Somar dois números inteiros
(2) Multiplicar dois números inteiros
(3) Dividir dois números inteiros
(4) Calcular a raiz quadrada de um número inteiro
(0) Encerrar o programa
Sua opção: _
Assim que o usuário escolher a opção do menu desejada, o programa deverá
executar a operação correspondente do menu.
A seguir, as modificações a serem feitas no programa:
a) crie uma função para imprimir o menu.
b) crie uma função para o algoritmo de cada opção do menu.
c) crie uma função específica para a leitura de um número inteiro, reduzindo
 a redundância de código.*/
#include<stdio.h>
#include<math.h> 
void menu (void){
    printf("Escolha uma das operaçoes a baixo para usar a  calculadora: \n");
    printf("(1) Somar dois numeros inteiros\n");
    printf("(2) Multiplicar dois numeros inteiros\n");
    printf("(3) Dividir dois numeros inteiros\n");
    printf("(4) Calcular a raiz quadrada de um numero inteiro\n");
    printf("(0) Encerrar o programa\n");
}
int lernumero (){
    int n;
    scanf("%d", &n);
    return n;
}
void op1 (){
    int n1, n2;
    float r;
    printf("Digite o primeiro numero: ");
    n1 = lernumero();
    printf("Digite o segundo numero: ");
    n2 = lernumero();
              r = n1 + n2;
    printf("resultado = %.2f",r);
}
void op2 (){
    int n1, n2;
    float r;
    printf("Digite o primeiro numero: ");
    n1 = lernumero();
    printf("Digite o segundo numero: ");
    n2 = lernumero();
            r = n1 * n2;
    printf("resultado = %.2f",r);
}
void op3 (){
    int n1, n2;
    float r;
    printf("Digite o primeiro numero: ");
    n1 = lernumero();
    printf("Digite o segundo numero: ");
    n2 = lernumero();
            r = (float) n1 /n2;
    printf("resultado = %.2f",r);
}
void op4 (){
    int n1;
    float r;
    printf("Digite o numero: ");
       n1 = lernumero();
            r =  sqrt(n1);
    printf("resultado = %.2f",r);
}
int op0 (){
    return 0;
}
int main(){
    int ope;
    menu();
    printf("Digite a opçao pretendida: ");
    ope = lernumero();
    switch (ope){
        case 1:
          op1();
            break;
        case 2:
            op2();
            break;
        case 3:
           op3();
            break;
        case 4:
           op4();
            break;
        case 0:
            op0();
            break;
    }
    return 0;
}
