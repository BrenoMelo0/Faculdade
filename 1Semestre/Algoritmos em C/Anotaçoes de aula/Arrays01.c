/*escreva um progama que preencha um array unidimensional homogeneo de tamanho 1000
 com inteiras aleatorios de 1 a 5000. em seguida, em outra estrutura de repetiçao imprima o conteudo
 do array*/
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 
 int main() {
     int numeros[1000]; 
     /*srand(time(NULL));*/
 
     for (int i = 0; i < 1000; i++) {
         numeros[i] = (rand() % 5000) + 1;
     }
 
     for (int i = 0; i < 1000; i++) {
         printf("numeros[%d] = %d\n", i, numeros[i]);
     }
 
     return 0;
 }