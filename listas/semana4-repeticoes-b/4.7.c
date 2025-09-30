#include <stdio.h>
#include <math.h>

int main() {
    int a, b, i, j, ehPrimo;
    
  
    printf("Digite dois números inteiros (a e b, onde a > b): ");
    scanf("%d %d", &a, &b);
    
   
    if (a <= b) {
        printf("Erro: a deve ser maior que b!\n");
        return 1;
    }
    
    printf("Números primos entre %d e %d:\n", b, a);
    
   
    for (i = b; i <= a; i++) {
       
        if (i < 2) {
            continue;
        }
        
       
        ehPrimo = 1;
        
    
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                ehPrimo = 0; // Não é primo
                break;
            }
        }
        
       
        if (ehPrimo) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}