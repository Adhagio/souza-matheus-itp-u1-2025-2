#include <stdio.h>

int main() {
    float preco1, preco2, quantia, total, resto;
    int i, j;
    

    printf("Digite o preço do primeiro fornecedor: ");
    scanf("%f", &preco1);
    printf("Digite o preço do segundo fornecedor: ");
    scanf("%f", &preco2);
    printf("Digite a quantia disponível: ");
    scanf("%f", &quantia);
    
    printf("\nCombinações possíveis:\n");
    
 
    for (i = 0; i <= 10; i++) {
        for (j = 0; j <= 10; j++) {
            
            total = i * preco1 + j * preco2;
            
            
            if (total <= quantia) {
                resto = quantia - total;
                printf("Comprando %d do primeiro e %d do segundo resta: R$ %.2f\n", i, j, resto);
            }
        }
    }
    
    return 0;
}