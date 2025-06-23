/*Escreva um programa em linguagem C que preencha um array unidimensional homogêneo
de tamanho 50 com números inteiros aleatórios de 1 a 200 gerados pelo computador
utilizando uma instrução while. Em seguida, imprima todos os números contidos no array
utilizando uma outra instrução while.*/

#include<math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
    int main() {
        srand(time(NULL));
        int numeros[50], i=0; 
    
        while(i < 50) {
            numeros[i] = (rand() % 200) + 1;
            i++;
        }
        i=0;
        while(i < 50) {
            printf("numero[%.2d] = %d\n", i, numeros[i]);
            i++;
        }

    return 0;
}
