/*) Escreva um programa modularizado em linguagem C que leia dois números inteiros
formando um intervalo, por exemplo, o usuário digita o número 5 e depois digita o número
20. O primeiro número deve ser inferior ao segundo número, caso contrário a mensagem
“Intervalo incorreto” deve ser apresentada ao usuário e o programa deve ser encerrado. Se o
intervalo estiver correto, o programa deve imprimir todos os números do intervalo. Crie uma
função para ler um único número inteiro. A validação dos números lidos deve ser feita por
uma função. A impressão dos números deve ser feita por uma função. Cada processo deve
ser feito por uma função diferente.*/
#include<stdio.h>
int cap_n (){
    int n;
    printf("digite um numero: ");
    scanf("%d", &n);
    return n;
}
int verify (int x, int y){
    if(y<= x){
        printf("intervalo invalido! ");
        return 0;
    }
}
void result (int x, int y){
    int i = x;
    while (i <= y){
        printf("%d\n", i);
        i++;
    }
}
int main(){
    int x,y;
    x = cap_n();
    y = cap_n();
    verify(x,y);
    result(x,y);
    return 0;
}
