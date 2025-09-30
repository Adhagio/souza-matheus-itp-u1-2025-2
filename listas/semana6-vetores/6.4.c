#include <stdio.h>

int main() {
    int sugestoes[10];
    int visitado[10] = {0};
    int ilha_atual = 0;
    int proxima_ilha;
    
    
    printf("Digite as sugestões das 10 ilhas: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &sugestoes[i]);
    }
    
  
    visitado[0] = 1;
    
    
    while (1) {
        proxima_ilha = sugestoes[ilha_atual];
        
       
        if (visitado[proxima_ilha] == 1) {
            printf("%d\n", proxima_ilha);
            break;
        }
        
       
        visitado[proxima_ilha] = 1;
        ilha_atual = proxima_ilha;
    }
    
    return 0;
}