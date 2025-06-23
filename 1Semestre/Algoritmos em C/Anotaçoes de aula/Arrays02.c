/*escreva um progama c que leia as notas de 50 alunos. apos a leitura das notas o progama deve 
mostrar o menu a baixo e deve execultar cada opçao do menu.*/
#include<stdio.h>
#include<stdbool.h>
#define TAM 50
int main(){
    int i = 0, menu = -1, ii = 0;
    float notas[TAM], nota = 0, media = 0 ;
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
        printf("(3) imprimir a maior nota\n");
        printf("(4) imprimir a menor nota\n");
        printf("(5) alterar uma nota\n");
        printf("(0) encerrar\n\n");
        scanf("%d", &menu);  

        ii = 0;

            if(menu == 1){
                while(ii < i){
                    printf("\nnota(%d): %.2f\n", ii, notas[ii]);
                    ii++;
                }
                menu = -1;
            }
            if(menu == 2){
                while(ii < i){
                    media += (notas[ii])/i;
                    ii++;
                }
                printf("\nmedia: %.2f\n", media);
                menu = -1;
            }
    }while(menu != 0);

    return 0;
}