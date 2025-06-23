/*Escreva um programa em linguagem C que leia dois números inteiros de 1 até 50. Caso cada
número informado não esteja no intervalo solicitado a mensagem “Número inválido” deverá
ser apresentada ao usuário e o número deverá ser lido novamente. Cada número deve ler
novamente lido sempre que seja inválido. O primeiro número deve ser inferior ao segundo
número. Assim que ambos os números estiverem válidos o programa deverá calcular e
imprimir o somatório de todos os números inteiros contidos entre os dois números
informados. Utilize a estrutura do..while para a validação dos números informados*/
#include<stdio.h>
#include<stdbool.h>
int main(){
    int i,n1, n2, soma = 0;
    bool invalido;
    do{
        do{
            invalido = false;
            printf("Digite um numero de 1 a 50: ");
            scanf("%d", &n1);
                if(n1 < 1 || n1>50){
                    printf("Numero invalido");
                    invalido = true;
                }
        }while(invalido);
        do{
            invalido = false;
            printf("Digite outro numero de 1 a 50: ");
            scanf("%d", &n2);
                if(n2 < 1 || n2>50){
                    printf("Numero invalido");
                    invalido = true;
                }
        }while(invalido);

        if(n1>=n2){
            printf("\nO primeiro tem que ser menor que o segundo.\n Tente novamente\n");
            invalido = true;
        }else{
            invalido = false;
        }
    }while(invalido);

    for(i = (n1+1); i<n2; i++){
        soma += i;
    };
    printf("A soma dos numeros de %d a %d é %d", n1, n2, soma);
    return 0;
}

