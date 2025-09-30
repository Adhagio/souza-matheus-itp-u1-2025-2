#include <stdio.h>

int main() {
    float valor_compra, desconto, valor_final;
    int porcentagem;


    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor_compra);

    if (valor_compra <= 100.00) {
        desconto = 0.0;
        porcentagem = 0;
    } else if (valor_compra <= 500.00) {
        desconto = valor_compra * 0.10;
        porcentagem = 10;
    } else if (valor_compra <= 1000.00) {
        desconto = valor_compra * 0.15;
        porcentagem = 15;
    } else {
        desconto = valor_compra * 0.20;
        porcentagem = 20;
    }

    valor_final = valor_compra - desconto;


    printf("Valor original: R$ %.2f\n", valor_compra);
    printf("Desconto aplicado: %d%%\n", porcentagem);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valor_final);

    return 0;
}