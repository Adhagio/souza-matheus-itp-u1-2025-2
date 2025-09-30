#include <stdio.h>
#include <math.h>

int main() {
    float x, y, comprimento_teia, ax, ay, distancia;
    int n, i;
    int consegue = 1; // 1 para sim, 0 para não


    printf("Digite a coordenada inicial do Homem Aranha (x y): ");
    scanf("%f %f", &x, &y);
    printf("Digite o comprimento máximo da teia: ");
    scanf("%f", &comprimento_teia);
    printf("Digite o número de alvos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite as coordenadas do alvo %d (x y): ", i + 1);
        scanf("%f %f", &ax, &ay);
        
  
        distancia = sqrt(pow(ax - x, 2) + pow(ay - y, 2));
        
    
        if (distancia <= comprimento_teia) {
         
            x = 2 * ax - x;
            y = ay;
            printf("Alvo %d alcançado! Nova posição: (%.2f, %.2f)\n", i + 1, x, y);
        } else {
            printf("Alvo %d não alcançado! Distância: %.2f\n", i + 1, distancia);
            consegue = 0;
            break; // Para de processar os alvos restantes
        }
    }

    // Resultado final
    if (consegue) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}