/*14) Escreva um programa em linguagem C que, dada a idade de um nadador, classifique-o em
uma das categorias abaixo. O programa deve permitir a leitura da idade várias vezes e deve
interromper a sua execução somente quando o usuário digitar uma idade igual a zero. A
idade deve ser validada (idade válida de 1 até 100).
Idade Categoria
5 até 7 anos Infantil A
8 até 10 anos Infantil B
11 até 13 anos Juvenil A
14 até 17 anos Juvenil B
Maiores de 18 anos Adulto*/
#include <stdio.h>

int main() {
    int idade;

    do {
        printf("Digite a idade do nadador (0 para sair): ");
        scanf("%d", &idade);

        if (idade == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        if (idade < 1 || idade > 100) {
            printf("Idade inválida! Digite uma idade entre 1 e 100.\n\n");
            continue;
        }

        if (idade >= 5 && idade <= 7) {
            printf("Categoria: Infantil A\n\n");
        } else if (idade >= 8 && idade <= 10) {
            printf("Categoria: Infantil B\n\n");
        } else if (idade >= 11 && idade <= 13) {
            printf("Categoria: Juvenil A\n\n");
        } else if (idade >= 14 && idade <= 17) {
            printf("Categoria: Juvenil B\n\n");
        } else if (idade >= 18) {
            printf("Categoria: Adulto\n\n");
        } else {
            printf("Sem categoria.\n\n");
        }

    } while (1);

    return 0;
}
