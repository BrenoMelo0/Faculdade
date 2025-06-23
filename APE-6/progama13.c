/*Escreva um algoritmo que calcule o que deve ser pago por um produto, considerando o
preço normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela
a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado. O
programa deve permitir a leitura do preço e da condição de pagamento várias vezes e deve
interromper a sua execução somente quando o usuário digitar um preço igual a zero. O preço
e a condição de pagamento devem ser validados.
Código Condição de Pagamento
1 À vista em dinheiro, recebe 10% de desconto
2 À vista no cartão de crédito, recebe 5% de desconto
3 Em duas vezes no cartão de crédito, preço normal de etiqueta sem juros
4 Em três vezes no cartão de crédito, preço normal de etiqueta mais juros de 10%*/

#include <stdio.h>
int main() {
    float preco, precoFinal;
    int codigoPagamento;

    do {
    
        printf("Digite o preço do produto (0 para sair): ");
        scanf("%f", &preco);

        if (preco == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        if (preco < 0) {
            printf("Preço inválido! Tente novamente.\n");
            continue; 
        }

        printf("\nCódigo da condição de pagamento:\n");
        printf("1 - À vista em dinheiro (10%% de desconto)\n");
        printf("2 - À vista no cartão (5%% de desconto)\n");
        printf("3 - Em duas vezes (sem desconto)\n");
        printf("4 - Em três vezes (10%% de juros)\n");
        printf("Digite o código: ");
        scanf("%d", &codigoPagamento);

        if (codigoPagamento < 1 || codigoPagamento > 4) {
            printf("Código inválido! Tente novamente.\n");
            continue;
        }

        switch (codigoPagamento) {
            case 1:
                precoFinal = preco * 0.9;
                break;
            case 2:
                precoFinal = preco * 0.95;
                break;
            case 3:
                precoFinal = preco;
                break;
            case 4:
                precoFinal = preco * 1.10;
                break;
        }

        printf("Preço final: R$ %.2f\n\n", precoFinal);

    } while (1);

    return 0;
}
