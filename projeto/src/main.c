#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// MÓDULO DE PROCESSAMENTO - Lógica do jogo
char tabuleiro[3][3];

void inicializarTabuleiro() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}

int posicaoValida(int linha, int coluna) {
    return (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == ' ');
}

void fazerJogada(int linha, int coluna, char jogador) {
    tabuleiro[linha][coluna] = jogador;
}

char verificarVencedor() {
    // Verificar linhas e colunas
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] != ' ' && tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2]) {
            return tabuleiro[i][0];
        }
        if (tabuleiro[0][i] != ' ' && tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i]) {
            return tabuleiro[0][i];
        }
    }
    
    // Verificar diagonais
    if (tabuleiro[0][0] != ' ' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) {
        return tabuleiro[0][0];
    }
    if (tabuleiro[0][2] != ' ' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]) {
        return tabuleiro[0][2];
    }
    
    return ' '; // Sem vencedor
}

int tabuleiroCheio() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') return 0;
        }
    }
    return 1;
}

// MÓDULO DE SAÍDA - Interface com usuário
void exibirTabuleiro() {
    printf("\n  0   1   2\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i);
        for (int j = 0; j < 3; j++) {
            printf("%c", tabuleiro[i][j]);
            if (j < 2) printf(" | ");
        }
        printf("\n");
        if (i < 2) printf("  ---------\n");
    }
    printf("\n");
}

void exibirVitoria(char jogador) {
    if (jogador == 'X') {
        printf("Jogador X venceu!\n");
    } else {
        printf("Computador (O) venceu!\n");
    }
}

void exibirEmpate() {
    printf("Empate!\n");
}

void exibirMenu() {
    printf("\n=== JOGO DA VELHA ===\n");
    printf("1 - Dois jogadores\n");
    printf("2 - Jogar contra o computador\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção: ");
}

// MÓDULO DE ENTRADA - Captura de dados 
void obterJogadaHumana(char jogador, int *linha, int *coluna) {
    int tentativas = 0;
    
    while (1) {
        if (jogador == 'X') {
            printf("Jogador X, digite linha e coluna (0-2): ");
        } else {
            printf("Jogador O, digite linha e coluna (0-2): ");
        }
        
        // Tenta ler os números
        int resultado = scanf("%d %d", linha, coluna);
        
        // Se não conseguiu ler 2 números
        if (resultado != 2) {
            printf("Entrada invalida! Digite apenas numeros. Exemplo: 0 1\n");
            
            // Limpa o buffer de entrada
            while (getchar() != '\n');
            
            tentativas++;
            if (tentativas > 3) {
                printf("Dica: Digite dois numeros separados por espaço, como: 1 2\n");
            }
        } else {
            // Conseguiu ler os números, sai do loop
            break;
        }
    }
}

// FUNÇÃO AUXILIAR - IA
int podeVencer(char jogador, int *linhaVencedora, int *colunaVencedora) {
    // Verifica se o jogador pode vencer na próxima jogada
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') {
                // Simula a jogada
                tabuleiro[i][j] = jogador;
                char vencedor = verificarVencedor();
                tabuleiro[i][j] = ' '; // Desfaz a simulação
                
                if (vencedor == jogador) {
                    *linhaVencedora = i;
                    *colunaVencedora = j;
                    return 1; // Encontrou jogada vencedora
                }
            }
        }
    }
    return 0; // Não pode vencer
}

// Obter jogada da IA
void obterJogadaIA(int *linha, int *coluna) {
    printf("Computador esta pensando...\n");
    
    // 1. PRIMEIRO: Tenta vencer se possível
    if (podeVencer('O', linha, coluna)) {
        printf("IA: Vou vencer!\n");
        return;
    }
    
    // 2. SEGUNDO: Tenta bloquear o jogador de vencer
    if (podeVencer('X', linha, coluna)) {
        printf("IA: Vou bloquear voce!\n");
        return;
    }
    
    // 3. TERCEIRO: Estratégia de prioridade (centro > cantos > bordas)
    int tentativas[9][2] = {{1,1}, {0,0}, {0,2}, {2,0}, {2,2}, {0,1}, {1,0}, {1,2}, {2,1}};
    
    for (int i = 0; i < 9; i++) {
        *linha = tentativas[i][0];
        *coluna = tentativas[i][1];
        if (posicaoValida(*linha, *coluna)) {
            return;
        }
    }
}

// Função principal que orquestra tudo
int main() {
    int linha, coluna;
    char jogadorAtual = 'X';
    int opcao;
    int modoIA = 0; // 0 = 2 jogadores, 1 = vs IA
    
    srand(time(NULL)); // Inicializar gerador de números aleatórios
    
    do {
        int leu_opcao = 0;
        while (!leu_opcao) {
            exibirMenu();
            
            if (scanf("%d", &opcao) == 1) {
                leu_opcao = 1; // Conseguiu ler um número
            } else {
                printf("Opcao invalida! Digite apenas numeros.\n");
                while (getchar() != '\n'); // Limpa o buffer
            }
        }
        
        switch (opcao) {
            case 1:
                modoIA = 0;
                printf("\nModo: Dois jogadores selecionado!\n");
                break;
            case 2:
                modoIA = 1;
                printf("\nModo: Jogador vs Computador selecionado!\n");
                printf("Voce e o Jogador X, o Computador e O\n");
                break;
            case 3:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Opcao invalida! Use 1, 2 ou 3.\n");
                continue;
        }
        
        // Reinicializar o jogo
        inicializarTabuleiro();
        jogadorAtual = 'X';
        
        while (1) {
            exibirTabuleiro();
            
            // Entrada: humano ou IA?
            if (modoIA == 1 && jogadorAtual == 'O') {
                // Vez da IA
                obterJogadaIA(&linha, &coluna);
                printf("Computador (O) jogou na posicao (%d, %d)\n", linha, coluna);
            } else {
                // Vez do jogador humano
                obterJogadaHumana(jogadorAtual, &linha, &coluna);
            }
            
            // Validação
            if (!posicaoValida(linha, coluna)) {
                printf("Jogada invalida! Tente novamente.\n");
                continue;
            }
            
            // Processamento
            fazerJogada(linha, coluna, jogadorAtual);
            
            // Verificação de fim de jogo
            char vencedor = verificarVencedor();
            if (vencedor != ' ') {
                exibirTabuleiro();
                exibirVitoria(vencedor);
                break;
            }
            
            if (tabuleiroCheio()) {
                exibirTabuleiro();
                exibirEmpate();
                break;
            }
            
            // Próximo jogador
            jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
        }
        
        printf("\nPressione Enter para continuar...");
        getchar(); getchar(); // Aguardar entrada do usuário
        
    } while (opcao != 3);
    
    return 0;
}