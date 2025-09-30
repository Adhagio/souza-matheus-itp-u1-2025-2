#include <stdio.h>

int main() {
    float consumo, valor;
    char tipo;

  
    printf("Digite o consumo em kWh: ");
    scanf("%f", &consumo);
    printf("Digite o tipo de consumidor (R, C ou I): ");
    scanf(" %c", &tipo);  // Espaço antes do %c para ignorar enter/whitespace

    
    if (tipo == 'R' || tipo == 'r') {
        valor = consumo * 0.60;
    } else if (tipo == 'C' || tipo == 'c') {
        valor = consumo * 0.48;
    } else if (tipo == 'I' || tipo == 'i') {
        valor = consumo * 1.29;
    } else {
        printf("Tipo de consumidor inválido!\n");
        return 1;  // Encerra o programa com código de erro
    }

    
    valor += 15.00;

   
    printf("Valor total da conta: R$ %.2f\n", valor);

    return 0;
}