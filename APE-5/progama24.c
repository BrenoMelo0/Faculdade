/* Escreva um programa em linguagem C que calcule e imprima o somatório de todos os
números inteiros desde o número 1 até o número 10.
*/
#include <stdio.h>

int main() {
    int i = 1, r = 0;

    do {
        r += i; 

        if (i < 10) {
            printf("%d + ", i);
        } else if (i == 10) {
            printf("%d = %d", i, r);
        }

        i++;
    } while (i <= 10);

    return 0;
}