#include <stdio.h>

int main() {
    float p, q, razao, melhor_razao = 0;
    int x, y, melhor_x, melhor_y;
    int encontrou = 0;
    
    // Entrada dos preços
    printf("Digite o preco de venda p: ");
    scanf("%f", &p);
    printf("Digite o preco de producao q: ");
    scanf("%f", &q);
    
    // Loop por todas as possibilidades de x e y
    for (x = 2; x <= 10; x++) {  // x deve ser pelo menos 2 para ter y < x
        for (y = 1; y < x; y++) {  // y deve ser menor que x
            // Verifica se não há prejuízo: y * p >= x * q
            if (y * p >= x * q) {
                razao = (float)x / y;
                
                // Se encontrou uma razão melhor, atualiza
                if (razao > melhor_razao) {
                    melhor_razao = razao;
                    melhor_x = x;
                    melhor_y = y;
                    encontrou = 1;
                }
            }
        }
    }
    
    // Exibe o resultado
    if (encontrou) {
        printf("A melhor promocao eh: leve %d pague %d\n", melhor_x, melhor_y);
        printf("Razao: %.2f\n", melhor_razao);
    } else {
        printf("Nenhuma promocao sem prejuizo encontrada.\n");
    }
    
    return 0;
}