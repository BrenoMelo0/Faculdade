/*Escreva um programa em linguagem C que calcule o somatório de todos os números inteiros
contidos desde x até y, sendo x e y informados pelo usuário.

*/
#include<stdio.h>
#include<math.h> 
int main(){
    int x, y;
    int i = 0, soma = 0;


    printf("Para saber a soma de todos os numeros entre 2 periodos\n");

    do{
        printf("\nDigite o inicio: ");
        scanf("%d", &x);
        printf("\nDigite o fim: ");
        scanf("%d", &y);
        if(x>y){
            printf("Periodo invalido, inicio tem que ser menor que o fim.\n Tente novamente\n");
        };
    }while(x>y);

    i=x;

    do{
        soma += i;
        i++;
    }while(i<=y);

    printf("A soma dos numeros %d ate %d e %d", x, y, soma);
    return 0;
}
