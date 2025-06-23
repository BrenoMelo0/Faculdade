/*Escreva um programa em linguagem C que imprima 10 números inteiros aleatórios de 1 até
100. Dica: peça ao professor para explicar as funções srand, rand e time.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
srand(time(NULL));

for(int i=1; i<=10; i++){
    int numero = rand() % 100;
    printf("%d\n",numero);
}
    return 0;
}