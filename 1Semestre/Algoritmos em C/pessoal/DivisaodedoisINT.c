/*escreva um codigo que leia dois inteiros e retorne a divisao entre eles*/
#include <stdio.h>
int main(void)
{
    /* code */
    int first = 0, second =0;
    float result = 0.0;

    printf("Digite um numero: ");
        scanf("%d", &first);

    printf("Digite outro numero: ");
        scanf("%d", &second);

    result = (float) first/second;

    printf("A divisao de %d por %d e igual a %.2f", first, second, result);

    return 0;
}
