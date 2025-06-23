/*Escreva um programa em linguagem C que inicie mostrando o menu abaixo para o usuário.
Programa Calculadora Simples
(1) Somar dois números inteiros
(2) Multiplicar dois números inteiros
(3) Dividir dois números inteiros
(4) Calcular a raiz quadrada de um número inteiro
(0) Encerrar o programa
Sua opção: _
Assim que o usuário escolher a opção do menu desejada, o programa deverá executar
a operação correspondente do menu utilizando o comando switch da linguagem C. Por
enquanto não há a necessidade do programa retornar ao menu após resolver uma opção que
o usuário escolheu. Você aprenderá a fazer isso mais adiante na disciplina quando
estudarmos as estruturas de repetição.*/

#include<stdio.h>
#include<math.h> 
int main(){
    int ope , n1, n2;
    float r;
    printf("Escolha uma das operaçoes a baixo para usar a  calculadora: \n");
    printf("(1) Somar dois números inteiros\n");
    printf("(2) Multiplicar dois números inteiros\n");
    printf("(3) Dividir dois números inteiros\n");
    printf("(4) Calcular a raiz quadrada de um número inteiro\n");
    printf("(0) Encerrar o programa\n");
    scanf("%d", &ope);

    switch (ope){
        case 1:
            printf("Digite o primeiro numero: ");
            scanf("%d", &n1);
            printf("Digite o segundo numero: ");
            scanf("%d", &n2);
            r = n1 + n2;
            break;
        case 2:
            printf("Digite o primeiro numero: ");
            scanf("%d", &n1);
            printf("Digite o segundo numero: ");
            scanf("%d", &n2);
            r = n1 * n2;
            break;
        case 3:
            printf("Digite o primeiro numero: ");
            scanf("%d", &n1);
            printf("Digite o segundo numero: ");
            scanf("%d", &n2);
            r = (float) n1 /n2;
            break;
        case 4:
            printf("Digite o primeiro numero: ");
            scanf("%d", &n1);
            r =  sqrt(n1);
            break;
        case 0:
            return 0;
            break;
    }
    printf("resultado = %.2f",r);
    return 0;
}
