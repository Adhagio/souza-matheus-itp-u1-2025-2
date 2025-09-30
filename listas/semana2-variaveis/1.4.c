#include <stdio.h>

int main() {
    int num1, num2;
    int soma, diferenca, produto, resto;
    float divisao, media;
    
   
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    

    soma = num1 + num2;
    diferenca = num1 - num2;
    produto = num1 * num2;
    divisao = (float)num1 / num2;  // Conversão para float para divisão real
    resto = num1 % num2;
    media = (float)(num1 + num2) / 2;  // Conversão para float para média real
    
   
    printf("\n=== RESULTADOS DAS OPERAÇÕES ===\n");
    printf("Soma: %d + %d = %d\n", num1, num2, soma);
    printf("Diferença: %d - %d = %d\n", num1, num2, diferenca);
    printf("Produto: %d × %d = %d\n", num1, num2, produto);
    printf("Divisão real: %d ÷ %d = %.2f\n", num1, num2, divisao);
    printf("Resto da divisão inteira: %d %% %d = %d\n", num1, num2, resto);
    printf("Média aritmética: (%.2f + %.2f) / 2 = %.2f\n", (float)num1, (float)num2, media);
    
    return 0;
}