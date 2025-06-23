/*Escreva um programa em linguagem C que calcule o somatório de todos os números inteiros
pares e ímpares contidos desde x até y, sendo x e y informados pelo usuário.
*/
#include<stdio.h>
#include<math.h> 
int main(){
    int x, y;
    int i = 0, somap = 0, somai = 0;


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
        if((i % 2)==0){
            somap += i;
        }else if((i % 2)==1){
            somai += i;
        }
        i++;
    }while(i<=y);

    printf("Para o intervalo de %d a %d.\n A soma dos pares: %d\n A soma dos impares: %d\n", x, y, somap, somai);
    return 0;
}
