#include <stdio.h>

int main() {
    int n, i;
    int altura[30];
    int max_altura = 0;
    int primeiro_indice = -1, ultimo_indice = -1;
    
    printf("Digite o número de pontos: ");
    scanf("%d", &n);
    

    printf("Digite as %d alturas: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &altura[i]);
       
        if (altura[i] > max_altura) {
            max_altura = altura[i];
        }
    }
    
   
    for (i = 0; i < n; i++) {
        if (altura[i] == max_altura) {
            primeiro_indice = i;
            break;
        }
    }
    
    for (i = n - 1; i >= 0; i--) {
        if (altura[i] == max_altura) {
            ultimo_indice = i;
            break;
        }
    }
    
    int comprimento = ultimo_indice - primeiro_indice - 1;
    
    printf("Comprimento da ponte: %d\n", comprimento);
    
    return 0;
}