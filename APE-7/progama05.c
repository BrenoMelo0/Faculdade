/*Escreva um programa em linguagem C que preencha um array unidimensional homogêneo
de tamanho 100 com números inteiros aleatórios de 1 a 1000 gerados pelo computador
utilizando uma instrução for. Em seguida, calcule e imprima a quantidade de números pares
e a quantidade de números ímpares existentes no array.*/ 
#include<math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
    int main() {
        srand(time(NULL));
        int numeros[100],i,impar = 0, par = 0, resto; 
    
        for (i = 0; i < 100; i++) {
            numeros[i] = (rand() % 1000) +1 ;
        }
    
        for (int i = 0; i < 100; i++) {
            resto = numeros[i] % 2;
            switch(resto){
                case 0:
                    par++;
                break;
                case 1:
                    impar++;
                break;
            }       
        }
        printf("foram gerados %d impares e %d pares", impar, par);

    return 0;
}