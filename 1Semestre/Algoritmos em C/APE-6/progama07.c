/*Escreva um programa em linguagem C que leia um número inteiro de 1 até 5. Caso o
usuário informe um número fora desse intervalo apresente a mensagem “Número inválido.
Redigite”. Se o número informado estiver inválido o programa deverá ler o número
novamente. Assim que o número informado estiver correto, o programa deverá apenas
imprimir a mensagem “Número informado está correto*/
#include<stdio.h>
#include<math.h> 
int main(){
    int n;
    do {
        printf("Digite um valor para o intervalo (entre 1 e 5): ");
        scanf("%d", &n);

        if (n < 1 || n> 5) {
            printf("Numero invalido. Redigite.\n");
        }
    } while (n < 1 || n > 5);
    printf("Numero informado está correto");
    return 0;
}