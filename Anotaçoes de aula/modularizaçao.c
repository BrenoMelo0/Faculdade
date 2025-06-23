//Em c a execuçao de um progama começa pelo entry point que é a funao main, e so seguira com outras funçoes caso seja chamada.
#include <stdio.h>
void imprimirPalavra (void){
    printf("unigoias");
}
int main(void){
    imprimirPalavra();
    return 0;
}
//o tipo que vem antes da funçao é o tipo de dado da saida(return), ja o tipo entre parenteses é o tipo de entrada.
//para o tipo de declaraçao se nao houver nada o padrao é int, ja no parenteses o tipo padrao para quando nao tem nada é void, por isso nao ha problema em deixar vazio

#include <stdio.h>
void imprimirNumero (int n){
    printf("unigoias");
}
int main(void){
    int x;
    printf("Entre com um intiro");
    scanf("%d, &x");
    imprimirNumero(x);
    return 0;
}
//int n presente no parenteses da funçao é um parametro, esse parametro recebe o argumento x que é inserido na funçao main.



