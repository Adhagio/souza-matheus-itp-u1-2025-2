#include <stdio.h>

int main() {
    char febre, dor_cabeca, dor_corpo, tosse;
    int count_sim = 0;

    printf("=== DIAGNÓSTICO MÉDICO SIMPLES ===\n");
    printf("Responda com S para Sim ou N para Não\n\n");
    
    printf("Tem febre? (S/N): ");
    scanf(" %c", &febre);
    printf("Tem dor de cabeça? (S/N): ");
    scanf(" %c", &dor_cabeca);
    printf("Tem dor no corpo? (S/N): ");
    scanf(" %c", &dor_corpo);
    printf("Tem tosse? (S/N): ");
    scanf(" %c", &tosse);

   
    if (febre == 's') febre = 'S';
    if (dor_cabeca == 's') dor_cabeca = 'S';
    if (dor_corpo == 's') dor_corpo = 'S';
    if (tosse == 's') tosse = 'S';

   
    if (febre == 'S') count_sim++;
    if (dor_cabeca == 'S') count_sim++;
    if (dor_corpo == 'S') count_sim++;
    if (tosse == 'S') count_sim++;

   
    printf("\n--- RESULTADO ---\n");
    
    if (febre == 'S' && dor_cabeca == 'S' && dor_corpo == 'S') {
        printf("Diagnóstico: Possível gripe\n");
    } else if (tosse == 'S' && febre == 'S') {
        printf("Diagnóstico: Possível resfriado\n");
    } else if (dor_cabeca == 'S' && count_sim == 1) {
        printf("Diagnóstico: Possível enxaqueca\n");
    } else if (febre == 'S' && count_sim == 1) {
        printf("Diagnóstico: Consulte um médico\n");
    } else if (count_sim == 0) {
        printf("Diagnóstico: Você parece estar bem\n");
    } else {
        printf("Diagnóstico: Consulte um médico para avaliação\n");
    }

    return 0;
}