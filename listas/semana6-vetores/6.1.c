#include <stdio.h>

int main() {
    int n, i, acertos = 0;
    int gabarito[20], respostas[20];
    
   
    printf("Digite o número de questões: ");
    scanf("%d", &n);
    
   
    if (n < 1 || n > 20) {
        printf("Número de questões deve estar entre 1 e 20.\n");
        return 1;
    }
    
    printf("Digite as %d respostas do gabarito: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &gabarito[i]);
    }
    
    
    printf("Digite as %d respostas do aluno: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &respostas[i]);
    }
    
  
    for (i = 0; i < n; i++) {
        if (gabarito[i] == respostas[i]) {
            acertos++;
        }
    }
    

    if (acertos == 1) {
        printf("%d acerto\n", acertos);
    } else {
        printf("%d acertos\n", acertos);
    }
    
    return 0;
}