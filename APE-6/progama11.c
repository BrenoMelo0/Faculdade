/*Escreva um programa em linguagem C que leia uma frase qualquer e conte o número de
vogais que essa frase possui. Dica: para acessar cada caractere da string utilize a sintaxe:
variável[posição].
*/


#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    int i, vogais = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); 

    for (i = 0; frase[i] != '\0'; i++) {
        char c = frase[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vogais++;
        }
    }

    printf("\nQuantidade de vogais: %d\n", vogais);

    return 0;
}