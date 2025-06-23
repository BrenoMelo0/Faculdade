/*Escreva um programa em linguagem C que inicie mostrando o menu abaixo para o usuário.
Programa Calculadora Simples
(1) Somar dois números inteiros
(2) Multiplicar dois números inteiros
(3) Dividir dois números inteiros
(4) Calcular a raiz quadrada de um número inteiro
(0) Encerrar o programa
Sua opção: _
Assim que o usuário escolher a opção do menu desejada, o programa deverá executar
a operação correspondente do menu. Por enquanto não há a necessidade do programa
retornar ao menu após resolver uma opção que o usuário escolheu. Você aprenderá a fazer
isso mais adiante na disciplina quando estudarmos as estruturas de repetição.
*/
#include<stdio.h>
#include<math.h> 
int main() {
    int opcao, num1, num2;
    double resultado;

    
    printf("Programa Calculadora Simples\n");
    printf("(1) Somar dois números inteiros\n");
    printf("(2) Multiplicar dois números inteiros\n");
    printf("(3) Dividir dois números inteiros\n");
    printf("(4) Calcular a raiz quadrada de um número inteiro\n");
    printf("(0) Encerrar o programa\n");
    printf("Sua opção: ");
    scanf("%d", &opcao);

    
    switch (opcao) {
        case 1: 
            printf("Digite um numro: ");
            scanf("%d", &num1);
            printf("Digite outro numero: ");
            scanf("%d", &num2);
            resultado = num1 + num2;
            printf("Resultado da soma: %d\n", (int)resultado);
            break;

        case 2: 
            printf("Digite um numro: ");
            scanf("%d", &num1);
            printf("Digite outro numero: ");
            scanf("%d", &num2);
            resultado = num1 * num2;
            printf("Resultado da multiplicação: %d\n", (int)resultado);
            break;

        case 3: 
            printf("Digite um numro: ");
            scanf("%d", &num1);
            printf("Digite outro numero: ");
            scanf("%d", &num2);
            resultado = (double)num1 / num2;
            printf("Resultado da divisão: %.2f\n", resultado);
            break;

        case 4: 
            printf("Digite um número: ");
            scanf("%d", &num1);
            resultado = sqrt(num1);
            printf("Resultado da raiz quadrada: %.2f\n", resultado);
            break;

        case 0: 
            printf("Programa encerrado.\n");
            break;

        default: 
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}