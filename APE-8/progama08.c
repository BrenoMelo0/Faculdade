/*Escreva um programa modularizado em linguagem C que leia uma palavra e um número
inteiro positivo e imprima a palavra lida esse número de vezes utilizando uma estrutura de
repetição à sua escolha. A impressão da palavra deve ser feita por uma função
*/
#include<stdio.h>
#include<string.h> 
void contar(int x1, char y1[]){
    int i = 0 ;
    while(i <= x1){
        printf("%s", y1);
        i++;
    }
}
main(){
    int x;
    char y[100];
    printf("digite um numero: ");
    scanf("%d", &x);
    getchar();
    printf("digite uma palavra: ");
    fgets(y,sizeof(y),stdin);
    contar(x,y);
    return 0;
}