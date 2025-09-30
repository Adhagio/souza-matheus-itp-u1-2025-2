#include <stdio.h>

int main() {
    int tabuleiro[4][4] = {0};
    int solucoes = 0;
    int i, j, k, l;
    
    printf("=== SOLUÇÕES PARA O PROBLEMA DAS 4 RAINHAS ===\n\n");
    
   
    for (int a = 0; a < 4; a++) {
        for (int b = 0; b < 4; b++) {
            for (int c = 0; c < 4; c++) {
                for (int d = 0; d < 4; d++) {
                    for (i = 0; i < 4; i++) {
                        for (j = 0; j < 4; j++) {
                            tabuleiro[i][j] = 0;
                        }
                    }
                    
                 
                    tabuleiro[0][a] = 1;
                    tabuleiro[1][b] = 1;
                    tabuleiro[2][c] = 1;
                    tabuleiro[3][d] = 1;
                    
                   
                    int valido = 1;
                    
                    
                    if (a == b || a == c || a == d || b == c || b == d || c == d) {
                        valido = 0;
                    }
                    
                  
                    if (valido) {
                        
                        for (i = 0; i < 4 && valido; i++) {
                            int coluna_rainha = -1;
                            if (i == 0) coluna_rainha = a;
                            if (i == 1) coluna_rainha = b;
                            if (i == 2) coluna_rainha = c;
                            if (i == 3) coluna_rainha = d;
                            
                            
                            for (j = i-1, k = coluna_rainha-1; j >= 0 && k >= 0; j--, k--) {
                                int coluna_outra = -1;
                                if (j == 0) coluna_outra = a;
                                if (j == 1) coluna_outra = b;
                                if (j == 2) coluna_outra = c;
                                if (j == 3) coluna_outra = d;
                                
                                if (k == coluna_outra) {
                                    valido = 0;
                                    break;
                                }
                            }
                            
                           
                            for (j = i-1, k = coluna_rainha+1; j >= 0 && k < 4; j--, k++) {
                                int coluna_outra = -1;
                                if (j == 0) coluna_outra = a;
                                if (j == 1) coluna_outra = b;
                                if (j == 2) coluna_outra = c;
                                if (j == 3) coluna_outra = d;
                                
                                if (k == coluna_outra) {
                                    valido = 0;
                                    break;
                                }
                            }
                        }
                    }
                    
                  
                    if (valido) {
                        solucoes++;
                        printf("Solução %d:\n", solucoes);
                        for (i = 0; i < 4; i++) {
                            for (j = 0; j < 4; j++) {
                                if ((i == 0 && j == a) || (i == 1 && j == b) || 
                                    (i == 2 && j == c) || (i == 3 && j == d)) {
                                    printf("R ");
                                } else {
                                    printf(". ");
                                }
                            }
                            printf("\n");
                        }
                        printf("\n");
                    }
                }
            }
        }
    }
    
    printf("Total de soluções encontradas: %d\n", solucoes);
    return 0;
}