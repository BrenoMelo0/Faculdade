/*Escreva um programa em linguagem C que leia as notas de, no máximo, 50 alunos e
armazene essas notas em um array unidimensional homogêneo (vetor). As notas informadas
pelo usuário devem ser válidas, ou seja, notas de 0,0 até 10,0. Se uma nota inválida for
informada o programa deve apresentar a mensagem “Nota inválida” e ler a nota novamente.
Após a leitura obrigatória de todas as 50 notas, o programa deve mostrar o menu de opções
abaixo e ler a opção do usuário, além de executar cada uma das opções. Após a execução de
cada opção do menu o programa deve mostrar o menu novamente para permitir ao usuário
escolher uma outra opção.
(1) Imprimir todas as notas digitadas para conferência
(2) Calcular e imprimir a média da turma
(3) Alterar uma nota
(4) Imprimir a maior nota da turma
(5) Imprimir a menor nota da turma
(6) Imprimir as notas acima de uma nota informada
(7) Imprimir as notas abaixo de uma nota informada
(0) Encerrar o programa
Opção: _
Para todas as opções do menu que imprimem uma listagem de notas, imprima a quantidade
de notas impressas ao final da listagem, como no exemplo abaixo para a opção 1 do menu.
Além disso, imprima também um número de ordem sequencial para permitir que o usuário
consiga saber a nota que ele deseja alterar (opção 3 do menu).
Listagem de notas para conferência
----------------------------------
01 - 6,5
02 - 7,0
03 - 9,5
04 - 4,8
...
28 - 6,7
29 - 8,0
30 - 10,0
----------------------------------
30 notas impressas*/
#include<stdio.h>
#include<stdbool.h>
#define TAM 50
int main(){
    int i = 0, menu, ii = 0;
    float notas[TAM], nota = 0, media = 0 ;
    float  maior, menor, nota_pret;
    bool validanota;

    while(i<TAM && nota != -1){
        do {
            validanota = false;

            printf("%d Nota(digite -1 para sair): ", i);
            scanf("%f", &nota);

            if(nota == -1){
                validanota = false;
            }
            else if(nota < 0 || nota > 10){
                printf("Nota invalida digite novamente!\n");
                validanota = true;
            }
        }while(validanota == true);
        if (nota == -1){
            break;
        }
        notas[i] = nota;
        i++;
    }

    do{
        printf("\n(1) imprimir todas as notas\n");
        printf("(2) imprimir a media da turma\n");
        printf("(3) alterar uma nota\n");
        printf("(4) imprimir a maior nota\n");
        printf("(5) imprimir a menor nota\n");
        printf("(6) imprimir as notas acima de uma nota informada\n");
        printf("(7) imprimir as notas abaixo de uma nota informada\n");
        printf("(0) encerrar\n\n");
        scanf("%d", &menu);  

        ii = 0;
        maior =0;
        menor = 0;
        media = 0;

        switch(menu){
            case 1:
                while(ii < i){
                    printf("\nnota(%d): %.2f\n", ii, notas[ii]);
                    ii++;
                }
            break;
            case 2:
                while(ii < i){
                    media += (notas[ii])/i;
                    ii++;
                }
                printf("\nmedia: %.2f\n", media);
            break;
            case 3:
                printf("\nDigite qual a nota quer alterar: \n");
                scanf("%d", &ii);
                printf("nota(%d) = %.2f\n",ii, notas[ii]);
                printf("Qual a nova nota:  ");
                scanf("%f", &notas[ii]);
            break;
            case 4:
                maior = notas[0]; 
                for (ii = 1; ii < i; ii++) {
                    if (notas[ii] > maior) {
                        maior = notas[ii];
                    }
                }
                printf("A maior nota foi %.2f", maior);
            break;
            case 5:
               menor = notas[0]; 
                for (ii = 1; ii < i; ii++) {
                    if (notas[ii] < menor) {
                        menor = notas[ii];
                    }
                }
                printf("A menor nota foi %.2f", menor);
            break;
            case 6:
                printf("Digite uma nota para saber as que foram acima\n");
                scanf("%f", &nota_pret);
                while(ii < i){
                    if(notas[ii]> nota_pret){
                        printf("\nnota(%d): %.2f\n", ii, notas[ii]);
                    }
                    ii++;
                }
            break;
             case 7:
                printf("Digite uma nota para saber as que foram abaixo\n");
                scanf("%f", &nota_pret);
                while(ii < i){
                    if(notas[ii]< nota_pret){
                        printf("\nnota(%d): %.2f\n", ii, notas[ii]);
                    }
                    ii++;
                }
            break;
        }
    }while(menu != 0);
    return 0;
}