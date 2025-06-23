/*Escreva um programa modularizado em linguagem C que crie uma variável x na função
main inicializando esta variável com o número inteiro 5. Em seguida, a função main deve
chamar uma outra função que deve receber o valor de x e imprimir esse valor.*/
#include<stdio.h> 
void imprime_x (int n){
    printf("o valor de x atribuido no main: %d",n);
}
int main(){
    int x = 5;
    imprime_x(x);
    return 0;
}

