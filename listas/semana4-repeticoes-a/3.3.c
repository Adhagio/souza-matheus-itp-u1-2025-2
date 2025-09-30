#include <stdio.h>
#include <stdlib.h> // Para a função abs()


int soma_divisores_proprios(int num) {
    int soma = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int a, b, soma_a, soma_b, diff1, diff2;
    
  
    printf("Digite dois números inteiros diferentes: ");
    scanf("%d %d", &a, &b);
    
    
    soma_a = soma_divisores_proprios(a);
    soma_b = soma_divisores_proprios(b);
    
    
    diff1 = abs(soma_a - b);
    diff2 = abs(soma_b - a);
    
    printf("Soma dos divisores próprios de %d: %d\n", a, soma_a);
    printf("Soma dos divisores próprios de %d: %d\n", b, soma_b);
    printf("|D(%d) - %d| = %d\n", a, b, diff1);
    printf("|D(%d) - %d| = %d\n", b, a, diff2);
    

    if (diff1 <= 2 && diff2 <= 2) {
        printf("S\n"); // São colegas
    } else {
        printf("N\n"); // Não são colegas
    }
    
    return 0;
}