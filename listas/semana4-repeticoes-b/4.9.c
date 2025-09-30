#include <stdio.h>

int main() {
    float preco1, preco2, quantia, total, resto, menor_resto;
    int i, j, melhor_i, melhor_j;
    int encontrou = 0; 
  
    printf("Digite o preço do primeiro fornecedor: ");
    scanf("%f", &preco1);
    printf("Digite o preço do segundo fornecedor: ");
    scanf("%f", &preco2);
    printf("Digite a quantia disponível: ");
    scanf("%f", &quantia);
    
    menor_resto = quantia + 1;
    
    
    for (i = 0; i <= 10; i++) {
        for (j = 0; j <= 10; j++) {
            
            total = i * preco1 + j * preco2;
            
            
            if (total <= quantia) {
                resto = quantia - total;
                encontrou = 1;
                
               
                if (resto < menor_resto) {
                    menor_resto = resto;
                    melhor_i = i;
                    melhor_j = j;
                }
            }
        }
    }
    
   
    if (encontrou) {
        printf("Resta menos comprando %d do primeiro e %d do segundo\n", melhor_i, melhor_j);
    } else {
        printf("Não é possível comprar nenhuma combinação.\n");
    }
    
    return 0;
}