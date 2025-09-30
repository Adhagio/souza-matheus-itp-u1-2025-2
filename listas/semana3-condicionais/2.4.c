#include <stdio.h>

int main() {
    char j1, j2;

    printf("Jogador 1 - Digite sua jogada (P para Pedra, A para Papel, T para Tesoura): ");
    scanf(" %c", &j1);
    printf("Jogador 2 - Digite sua jogada (P para Pedra, A para Papel, T para Tesoura): ");
    scanf(" %c", &j2);

    
    if (j1 >= 'a' && j1 <= 'z') j1 = j1 - 32;
    if (j2 >= 'a' && j2 <= 'z') j2 = j2 - 32;

    printf("Jogador 1: %c\n", j1);
    printf("Jogador 2: %c\n", j2);

    
    if (j1 == j2) {
        printf("Resultado: Empate!\n");
    } else if ((j1 == 'P' && j2 == 'T') ||  // Pedra vence Tesoura
               (j1 == 'T' && j2 == 'A') ||  // Tesoura vence Papel
               (j1 == 'A' && j2 == 'P')) {  // Papel vence Pedra
        printf("Resultado: Jogador 1 venceu!\n");
    } else if ((j2 == 'P' && j1 == 'T') ||  // Pedra vence Tesoura
               (j2 == 'T' && j1 == 'A') ||  // Tesoura vence Papel
               (j2 == 'A' && j1 == 'P')) {  // Papel vence Pedra
        printf("Resultado: Jogador 2 venceu!\n");
    } else {
        printf("Jogada inválida! Use apenas P, A ou T.\n");
    }

    return 0;
}