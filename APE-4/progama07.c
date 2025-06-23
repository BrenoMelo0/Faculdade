/* Escreva um programa em linguagem C que leia apenas um desses 18 símbolos (. , : / \ | ; { }
( ) [ ] @ ! $ * &) e, utilizando o comando switch, mostre uma mensagem dizendo o nome do
símbolo digitado pelo usuário. Dica: use a função getche (biblioteca conio.h).
*/
#include <stdio.h>
#include <conio.h>  

int main() {
    char simbolo;

    printf("Digite um símbolo (. , : / \\ | ; { } ( ) [ ] @ ! $ * &): ");
    simbolo = getche(); 
    printf("\n");
    switch(simbolo) {
        case '.': 
            printf("Ponto.\n"); 
            break;
        case ',': 
            printf("Vírgula.\n"); 
            break;
        case ':': 
            
            printf("Dois-pontos.\n"); 
            break;
        case '/': 
            printf("Barra.\n"); 
            break;
        case '\\': 
            printf("Barra invertida.\n"); 
            break;
        case '|': 
            printf("Barra vertical (pipe).\n"); 
            break;
        case ';': 
            printf("Ponto e vírgula.\n"); 
            break;
        case '{': 
            printf("Chave esquerda.\n"); 
            break;
        case '}': 
            printf("Chave direita.\n");
             break;
        case '(': 
            printf("Parêntese esquerdo.\n"); 
            break;
        case ')': 
            printf("Parêntese direito.\n"); 
            break;
        case '[': 
            printf("Colchete esquerdo.\n"); 
            break;
        case ']': 
            printf("Colchete direito.\n"); 
            break;
        case '@': 
            printf("Arroba.\n"); 
            break;
        case '!': 
            printf("Exclamação.\n"); 
            break;
        case '$':   
            printf("Cifrão.\n"); 
            break;
        case '*': 
            printf("Asterisco.\n"); 
            break;
        case '&': 
            printf("E comercial (E comercial).\n"); 
            break;
        default: 
            printf("Símbolo não reconhecido!\n");
    }
    return 0;
}
