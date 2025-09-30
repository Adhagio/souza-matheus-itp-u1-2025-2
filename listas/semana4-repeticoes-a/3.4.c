#include <stdio.h>
#include <math.h>


float distancia(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}


int pontuacao_principal(float dist) {
    if (dist <= 1.0) return 10;
    else if (dist <= 2.0) return 6;
    else if (dist <= 3.0) return 4;
    else return 0;
}

int main() {
    float x, y, x_anterior, y_anterior;
    float dist_centro, dist_anterior;
    int pontuacao_total = 0;
    int pontuacao_principal_valor, pontuacao_bonus;
    
    printf("=== JOGO DE DARDOS ===\n");
    printf("Digite as coordenadas de 10 lançamentos:\n");
    
   
    printf("Lançamento 1 (x y): ");
    scanf("%f %f", &x, &y);
    dist_centro = distancia(x, y, 0, 0);
    pontuacao_principal_valor = pontuacao_principal(dist_centro);
    pontuacao_total += pontuacao_principal_valor;
    
    x_anterior = x;
    y_anterior = y;
    
    printf("Distância ao centro: %.2f → Pontuação: %d\n", dist_centro, pontuacao_principal_valor);
    
   
    for (int i = 2; i <= 10; i++) {
        printf("Lançamento %d (x y): ", i);
        scanf("%f %f", &x, &y);
        
        
        dist_centro = distancia(x, y, 0, 0);
        pontuacao_principal_valor = pontuacao_principal(dist_centro);
        
       
        dist_anterior = distancia(x, y, x_anterior, y_anterior);
        pontuacao_bonus = pontuacao_principal(dist_anterior) / 2;
        
       
        pontuacao_total += pontuacao_principal_valor + pontuacao_bonus;
        
        printf("Distância ao centro: %.2f → Pontuação principal: %d\n", dist_centro, pontuacao_principal_valor);
        printf("Distância ao anterior: %.2f → Pontuação bônus: %d\n", dist_anterior, pontuacao_bonus);
      
        x_anterior = x;
        y_anterior = y;
    }
    
    printf("\n=== PONTUAÇÃO FINAL ===\n");
    printf("Total: %d pontos\n", pontuacao_total);
    
    return 0;
}