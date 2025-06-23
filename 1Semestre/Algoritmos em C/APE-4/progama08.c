/*vEscreva um programa em linguagem C que imprima o nome do dia da semana atual. Dica:
use o trecho de código abaixo. A biblioteca time.h será necessária.
*/
#include <stdio.h>
#include <time.h>    
    int main() {
        time_t agora = time(NULL);          
        struct tm *data = localtime(&agora); 
    
        int diaSemana = data->tm_wday;
    
        if (diaSemana == 0) {
            printf("Hoje é: Domingo\n");
        } else if (diaSemana == 1) {
            printf("Hoje é: Segunda-feira\n");
        } else if (diaSemana == 2) {
            printf("Hoje é: Terça-feira\n");
        } else if (diaSemana == 3) {
            printf("Hoje é: Quarta-feira\n");
        } else if (diaSemana == 4) {
            printf("Hoje é: Quinta-feira\n");
        } else if (diaSemana == 5) {
            printf("Hoje é: Sexta-feira\n");
        } else if (diaSemana == 6) {
            printf("Hoje é: Sábado\n");
        }
        return 0;
    }
   
