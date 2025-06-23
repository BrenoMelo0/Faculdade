/* Escreva um programa em linguagem C que preencha um array unidimensional homogêneo
de tamanho 50 com números inteiros aleatórios de 100 a 500 gerados pelo computador
utilizando uma instrução do..while. Em seguida, imprima todos os números contidos no
array utilizando uma outra instrução do..while.*/

#include<math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
    int main() {
        srand(time(NULL));
        int numeros[50], i=0; 
    
       do{
            numeros[i] = (rand() % 401) + 100;
            i++;
        }while(i < 50);
        i=0;
       do{
            printf("numero[%.2d] = %d\n", i, numeros[i]);
            i++;
        }while(i < 50);

    return 0;
    }