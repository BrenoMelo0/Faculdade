/*Escreva um programa em linguagem C que leia as duas notas de um aluno, calcule e
imprima sua média aritmética simples. O programa deve imprimir também a mensagem
“Aprovado” ou “Reprovado”. A média mínima para aprovação é 6,0. As notas lidas devem
ser validadas (nota válida: 0,0 até 10,0). A mensagem “Nota inválida! Redigite.” deve ser
apresentada e a nota deve ser lida novamente.*/

#include <stdio.h>
int main() {
    float nota1, nota2, media;

    do {
        printf("Digite a primeira nota (0.0 a 10.0): ");
        scanf("%f", &nota1);
        if (nota1 < 0.0 || nota1 > 10.0) {
            printf("Nota inválida! Redigite.\n");
        }
    } while (nota1 < 0.0 || nota1 > 10.0);

    do {
        printf("Digite a segunda nota (0.0 a 10.0): ");
        scanf("%f", &nota2);
        if (nota2 < 0.0 || nota2 > 10.0) {
            printf("Nota inválida! Redigite.\n");
        }
    } while (nota2 < 0.0 || nota2 > 10.0);

    media = (nota1 + nota2) / 2.0;

    printf("Média: %.2f\n", media);

    if (media >= 6.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    return 0;
}