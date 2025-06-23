/*Escreva um programa em linguagem C que leia dois números inteiros formando um
intervalo, por exemplo, o usuário digita o número 5 e depois digita o número 20. O primeiro
número deve ser inferior ao segundo número, caso contrário a mensagem “Intervalo
incorreto” deve ser apresentada ao usuário e o programa deve ser encerrado. Se o intervalo
estiver correto, o programa deve imprimir todos os números do intervalo.*/
#include<stdio.h>
int main() {
    int init, fim, i;
    printf("Digite o numero de inicio: ");
    scanf("%d",&init);
    printf("Digite o numero final: ");
    scanf("%d",&fim);

    i = init;
    
if(fim<init){
    printf("Intervalo incorreto");
}
else{
    while(i <= fim){
        printf("%d\n",i);
        i++;
    }
} 
    return 0;
}