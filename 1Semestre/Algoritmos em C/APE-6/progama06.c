/*Escreva um programa em linguagem C que leia um número de 10 até 100 em uma variável
chamada intervaloChute. Em seguida, o programa deverá ler a quantidade de números a
serem gerados aleatoriamente. O programa deverá gerar a quantidade de números aleatórios
informada e os números aleatórios devem ser gerados dentro do intervalo informado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int intervaloChute, quantidade, i;

    srand(time(NULL));

    do {
        printf("Digite um valor para o intervalo (entre 10 e 100): ");
        scanf("%d", &intervaloChute);

        if (intervaloChute < 10 || intervaloChute > 100) {
            printf("Valor inválido! Digite novamente.\n");
        }
    } while (intervaloChute < 10 || intervaloChute > 100);

    printf("Digite a quantidade de números aleatórios que deseja gerar: ");
    scanf("%d", &quantidade);

    printf("\nNúmeros gerados:\n");
    for (i = 0; i < quantidade; i++) {
        int aleatorio = rand() % intervaloChute + 1; 
        printf("%d ", aleatorio);
    }

    printf("\n");

    return 0;
}