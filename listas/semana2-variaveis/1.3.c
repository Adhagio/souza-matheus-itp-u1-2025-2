#include <stdio.h>
#include <math.h>

int main() {
    double capital, taxa, tempo, montante;
    
    printf("Digite o capital inicial: R$ ");
    scanf("%lf", &capital);
    
    printf("Digite a taxa de juros (em %%): ");
    scanf("%lf", &taxa);
    
    printf("Digite o tempo (em anos): ");
    scanf("%lf", &tempo);
    

    montante = capital * pow(1 + taxa/100, tempo);
    
    
    printf("\nResultado do calculo de juros compostos:\n");
    printf("Capital inicial: R$ %.2lf\n", capital);
    printf("Taxa de juros: %.2lf%%\n", taxa);
    printf("Tempo: %.2lf anos\n", tempo);
    printf("Montante final: R$ %.2lf\n", montante);
    
    return 0;
}