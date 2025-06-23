/*Escreva um programa em linguagem C que preencha um array unidimensional homogêneo
de tamanho 50 com números inteiros aleatórios de 0 a 100 gerados pelo computador
utilizando uma instrução for. Em seguida, imprima todos os números contidos no array
utilizando uma outra instrução for.*/

#include<math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
    int main() {
        srand(time(NULL));
        int numeros[50],i; 
    
        for (int i = 0; i < 50; i++) {
            numeros[i] = (rand() % 100);
        }
    
        for (i = 0; i < 50; i++) {
            printf("numero[%d] = %d\n", i, numeros[i]);
        }

    return 0;
}
